package ;

import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import flash.Vector.Vector;
import graphite.collections.Vector2D.Vector2D;
import graphite.KC8;
import graphite.tile.Tile;
import graphite.ui.KC8Frame;
import graphite.ui.KC8Pane;
//import graphite.ui.KC8Pane;
import graphite.ui.KC8UI;

/**
 * ...
 * @author qwerber
 */

class Main extends Sprite 
{
	var inited:Bool;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;
		
		var v:Vector2D<Tile> = new Vector2D<Tile>(10,10);
		
		
		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
		//done();
		KC8UI.init(done);
	}
	
	function done() 
	{
		Lib.current.stage.addChild(new DebugMenu());
		KC8.init(new LoadState());
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
