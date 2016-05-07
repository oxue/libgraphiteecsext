package graphite.graphics;
import flash.display.BitmapData;
import flash.display.Sprite;
import flash.Lib;
import flash.Vector.Vector;
import openfl.display.Tilesheet;

/**
 * ...
 * @author qwerber
 */
class OpenFLTilesheetRenderer
{
	public static var tilesheet:Tilesheet;
	
	public static var screenWidth:Int;
	public static var screenHeight:Int;
	public static var zoom:Int;
	
	public static var container:Sprite;
	
	public static var buffer:Array<Float>;
	
	public static function init(_bitmapData:BitmapData):Void
	{
		tilesheet = new Tilesheet(_bitmapData);
		buffer = new Array<Float>();
	}
	
	public static function pushSurface2e3(_surface2:Int, _x:Int, _y:Int, _rotation:Int = 0)
	{
		buffer.push(_x);
		buffer.push(_y);
		buffer.push(_surface2);
		//buffer.push(_rotation);
	}
	
	public static function setDisplay(
		_screenWidth:Int,
		_screenHeight:Int, 
		_zoom:Int):Void
	{
		screenWidth = _screenWidth;
		screenHeight = _screenHeight;
		zoom = _zoom;
		
		if (container == null)
		{
			container = new Sprite();
			Lib.current.stage.addChild(container);
		}
		
		container.scaleX = container.scaleY = _zoom;
	}
	
	public static function draw():Void
	{
		tilesheet.drawTiles(container.graphics, buffer, false);// , Tilesheet.TILE_ROTATION);
	}
	
	public static function clear():Void
	{
		buffer = [];
		container.graphics.clear();
	}
	
	public function new() 
	{
		
	}
	
}