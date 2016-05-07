package graphite.tile;

import flash.geom.Rectangle;
import flash.Vector.Vector;
import graphite.Comp;
import graphite.std.StdComp;
import openfl.display.Tilesheet;

/**
 * contains bindings to the tilesheet, autotiling information, and solidity information
 * @author qwerber
 */
class TilesheetComp extends Comp
{
	/**
	 * This is the profile of prototype tiles in order of ID INDEX
	 */
	public var tiles:Vector<Tile>;
	/**
	 * OpenFL tilesheet indices
	 */
	public var tsIndices:Vector<Int>;
	//tilesize
	public var tilesize:Int;
	
	//TODO: refractor data api later
	public function new(_tilesheet:Tilesheet,
						_rect:Rectangle,
						_tilesize:Int,
						_jsonData:Dynamic) 
	{
		tilesize = _tilesize;
		tiles = new Vector<Tile>(_jsonData.length);
		tsIndices = new Vector<Int>(_jsonData.length);
		var tempRect:Rectangle = new Rectangle(_rect.x,
											   _rect.y,
											   16, 
											   16);
		
		var i:Int = -1;
		while (i++<_jsonData.length-1)
		{
			//create prototype tile
			var t:Tile = new Tile(i, _jsonData[i].solid);
			tiles[i] = t;
			//create id index/tsindex table
			var ind:Int = _tilesheet.addTileRect(tempRect);
			tsIndices[i] = ind;
			t.cache = ind;
			trace(tempRect.toString());
			trace(ind);

			//increment the rectangle position
			tempRect.x += tilesize;
			if (tempRect.x == _rect.right)
			{
				tempRect.x = _rect.x;
				tempRect.y += tilesize;
			}
			
		}	
		
		super(StdComp.TILESHEET);
	}
	
}