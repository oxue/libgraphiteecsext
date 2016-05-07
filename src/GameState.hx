package ;
import flash.display.Bitmap;
import flash.geom.Rectangle;
import flash.Lib;
import graphite.collections.Vector2D.Vector2D;
import graphite.Ent;
import graphite.graphics.OpenFLTilesheetRenderer;
import graphite.io.Assets;
import graphite.KC8;
import graphite.io.GraphicLoader;
import graphite.State;
import graphite.std.CircleCollisionSub;
import graphite.std.CircleComp;
import graphite.std.CircleSub;
import graphite.std.CoordinateComp;
import graphite.std.LerpSub;
import graphite.std.MouseCoordSub;
import graphite.std.PositionSub;
import graphite.std.RandomCoordSub;
import graphite.std.StdComp;
import graphite.tile.Tile;
import graphite.tile.TilemapDataComp;
import haxe.Log;
import haxe.Timer;

/**
 * ...
 * @author qwerber
 */

class GameState extends State
{
	
	public function new() 
	{
		super();
	}
	
	private var l:GraphicLoader;
	private var e:Ent;
	
	override public function load():Void 
	{
		
		
		KC8.subManager.addSub(new PositionSub());
		KC8.subManager.addSub(new CircleSub());
		KC8.subManager.addSub(new LerpSub());
		KC8.subManager.addSub(new MouseCoordSub());
		KC8.subManager.addSub(new CircleCollisionSub());
		KC8.subManager.addSub(new RandomCoordSub());
		
		Factory.createCircle(0, 0, 100, 0xff00ff);
		
		OpenFLTilesheetRenderer.setDisplay(400, 300, 1);
		
		//new TilemapDataComp();
		e = Factory.createTileMap(
			"minetiles",
			16, 
			Assets.JSONs.get("map1.json").tiles, 
			4,
			4);
	
		var s:TilemapDataComp = cast e.componentHash.get(StdComp.TILEMAPDATA);
		s.populateLayerString(0,1,Assets.JSONs.get("map1.json").layers[0].data);
			
		s.addLayer(4, 4, 6, 1);
		s.populateLayerString(1,1,Assets.JSONs.get("map1.json").layers[0].data);
	}
	
	override public function update():Void 
	{
		OpenFLTilesheetRenderer.clear();
		(cast e.componentHash.get(StdComp.TILEMAPRENDER)).render(new Rectangle(20, 0, 100, 100));
		OpenFLTilesheetRenderer.draw();
	}
	
}