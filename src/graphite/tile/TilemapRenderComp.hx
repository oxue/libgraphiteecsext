package graphite.tile;
import flash.display.Sprite;
import flash.geom.Rectangle;
import flash.Lib;
import graphite.Comp;
import graphite.graphics.OpenFLTilesheetRenderer;
import graphite.std.StdComp;
import graphite.tile.TilemapDataComp;
import graphite.tile.TilesheetComp;
import haxe.Timer;
import openfl.display.Tilesheet;

/**
 * ...
 * @author qwerber
 */
class TilemapRenderComp extends Comp
{
	
	private var tilemapData:TilemapDataComp;
	private var tilesheet:TilesheetComp;
	
	
	public function new() 
	{
		super(StdComp.TILEMAPRENDER);
	}
	
	override public function cache():Void 
	{
		tilemapData = cast getComponentCache(StdComp.TILEMAPDATA);
		tilesheet = cast getComponentCache(StdComp.TILESHEET);
		
		trace(tilesheet.tsIndices.length);
	}
	
	public function render(_camera:Rectangle):Void
	{
		var numLayers:Int = tilemapData.layers.length - 1;
		var i:Int = -1;
		while (i++ < numLayers)
		{
			var layer:TilemapLayer = tilemapData.layers[i];
			
			var k:Int = layer.mapWidth;
			
			while (k-->0)
			{
				var l:Int = layer.mapHeight;
				
				while (l-->0)
				{
					OpenFLTilesheetRenderer.pushSurface2e3(layer.data.getElemAt(k, l).cache, (k + layer.offsetX) * tilesheet.tilesize,
					(l+layer.offsetY) * tilesheet.tilesize);
				}
			}
			
			
		}
	}
	
}