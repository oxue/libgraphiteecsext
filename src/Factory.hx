package ;
import flash.display.Sprite;
import flash.Lib;
import graphite.Ent;
import graphite.graphics.OpenFLTilesheetRenderer;
import graphite.io.Assets;
import graphite.KC8;
import graphite.std.CircleComp;
import graphite.std.CoordinateComp;
import graphite.std.LerpComp;
import graphite.std.PositionComp;
import graphite.std.RandomCoordComp;
import graphite.std.StdComp;
import graphite.tile.TilemapDataComp;
import graphite.tile.TilemapRenderComp;
import graphite.tile.TilesheetComp;

/**
 * ...
 * @author qwerber
 */

class Factory 
{

	public static function createCircle(_x:Float = 0, _y:Float = 0, _radius:Int = 10, _color:Int = 0x00):Ent
	{
		var e:Ent = new Ent();
		var p:PositionComp = cast KC8.subManager.get(StdComp.POSITION).get();
		p.x = _x;
		p.y = _y;
		e.add(p);
		var c:CircleComp = cast KC8.subManager.get(StdComp.CIRCLE).get();
		c.radius = _radius;
		c.lineColor = _color;
		c.fillColor = _color;
		e.add(c);
		e.add(new CoordinateComp());
		var l:LerpComp = cast KC8.subManager.get(StdComp.LERP).get();
		e.add(l);
		e.add(KC8.subManager.get(StdComp.MOUSECOORDS).get());
		c.fillColor = 0xffaa00;
		c.lineColor = 0xffaa00;
		c.redraw();
		
		e.add(KC8.subManager.get(StdComp.CIRCLECOLLISION).get());
		return e;
	}
	
	public static function createTileMap(_tileset:String,
										 _tilesize:Int,
										 _tileData:Dynamic,
										 _mapWidth:Int,
										 _mapHeight:Int):Ent
	{
		//Add central 
		var e:Ent = new Ent();
		var ts:TilesheetComp = new TilesheetComp(
			OpenFLTilesheetRenderer.tilesheet, 
			Assets.openFLTilesheetSurfaces.get(_tileset).tileRectangle,
			_tilesize,
			_tileData);
		e.add(ts);
		
		var td:TilemapDataComp = new TilemapDataComp(_mapWidth, _mapHeight);
		e.add(td);
		
		var tr:TilemapRenderComp = new TilemapRenderComp();
		e.add(tr);

		
		return e;
	}
	
	public function new() 
	{
		
	}
	
}