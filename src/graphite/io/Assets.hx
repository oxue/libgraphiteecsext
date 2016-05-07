package graphite.io;
import flash.display.BitmapData;
import flash.geom.Rectangle;
import graphite.graphics.OpenFLTilesheetRenderer;
import graphite.graphics.TilesheetSurface2;
import graphite.io.Assets.LoadState;
import graphite.io.BinaryLoader;
import haxe.ds.HashMap.HashMap;
import haxe.ds.StringMap.StringMap;
import haxe.Json;

/**
 * ...
 * @author qwerber
 */

enum LoadState
{
	LOADING;
	LOAD_DONE;
}
 
 
class Assets 
{
	
	public static var JSONs:StringMap<Dynamic>;
	public static var bitmapDatas:StringMap<BitmapData>;
	public static var openFLTilesheetSurfaces:StringMap<TilesheetSurface2>;
	
	private static var jsonLoadState:LoadState;
	private static var bitmapDataLoadState:LoadState;
	private static var binaryLoader:BinaryLoader;
	private static var toLoadJson:Array<String>;
	static private var toLoadBitmapData:Array<String>;
	
	public function new() 
	{
		
	}
	
	public static function init():Void
	{
		binaryLoader = new BinaryLoader();
		JSONs = new StringMap<Dynamic>();
		bitmapDatas = new StringMap<BitmapData>();
		openFLTilesheetSurfaces = new StringMap<TilesheetSurface2>();
	}
	
	public static function setOpenFLTilesheet(_jsonName:String, _imageName:String):Void
	{
		var json:Dynamic = JSONs.get(_jsonName);
		var image:BitmapData = bitmapDatas.get(_imageName);
		OpenFLTilesheetRenderer.init(image);
		
		var i:Int = json.length;
		while (i-->0)
		{
			var rect:Rectangle = new Rectangle(
				json[i].x,
				json[i].y,
				json[i].width,
				json[i].height);
			
			var index:Int = OpenFLTilesheetRenderer.tilesheet.addTileRect(rect);
			openFLTilesheetSurfaces.set(json[i].name, new TilesheetSurface2(index, rect));
		}
	}
	
	public static function bitmapDataLoad(_bitmapDataPaths:Array<String>):Void
	{
		if (_bitmapDataPaths.length == 0)
		{
			bitmapDataLoadState = LOAD_DONE;
		}else
		{
			bitmapDataLoadState = LOADING;
			var url:String = _bitmapDataPaths.pop();
			toLoadBitmapData = _bitmapDataPaths;
			bitmapDatas.set(url, openfl.Assets.getBitmapData(url));
			bitmapDataLoad(toLoadBitmapData);
		}
	}
	
	public static function JSONLoad(_jsonPaths:Array<String>):Void 
	{
		if (_jsonPaths.length == 0)
		{
			jsonLoadState = LOAD_DONE;
		}else
		{
			jsonLoadState = LOADING;
			var url:String = _jsonPaths.pop();
			
			toLoadJson = _jsonPaths;
			binaryLoader.load(url, doneBinLoad);
		}
		
	}
	
	public static function getBitmapDataLoadState():LoadState
	{
		return bitmapDataLoadState;
	}
	
	public static function getJSONLoadState():LoadState
	{
		return jsonLoadState;
	}
	
	static private function doneBinLoad() 
	{
		JSONs.set(binaryLoader.name, Json.parse(binaryLoader.data));
		JSONLoad(toLoadJson);
	}
	
}