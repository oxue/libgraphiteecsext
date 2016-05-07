package ;

import flash.display.BitmapData;
import flash.geom.Rectangle;
import flash.Lib;
import graphite.graphics.OpenFLTilesheetRenderer;
import graphite.graphics.TilesheetSurface2;
import graphite.io.Assets;
import graphite.KC8;
import graphite.State;
import graphite.tile.TilesheetComp;
import haxe.ds.HashMap.HashMap;
import haxe.ds.StringMap.StringMap;
import openfl.display.Tilesheet;

/**
 * Tile rect deserialization happens here.
 * @author qwerber
 */
 
class LoadState extends State
{
	
	public function new() 
	{
		super();
	}
	
	override public function load():Void 
	{

		Assets.init();
		Assets.JSONLoad(["sprites.json", "map1.json"]);
		Assets.bitmapDataLoad(["img/spritesheet.png"]);
	}
	
	override public function update():Void 
	{
		if (Assets.getJSONLoadState() == LOAD_DONE &&
			Assets.getBitmapDataLoadState() == LOAD_DONE)
		{
			Assets.setOpenFLTilesheet("sprites.json", "img/spritesheet.png");
			
			KC8.stateManager.setState(new GameState());
		}
	}
	
}