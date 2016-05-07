package graphite.tile;
import graphite.collections.Vector2D.Vector2D;

/**
 * contains the data of a single layer in a tilemap
 * @author qwerber
 */
class TilemapLayer
{

	public var offsetX:Int;
	public var offsetY:Int;
	public var mapWidth:Int;
	public var mapHeight:Int;
	
	/**
	 * 
	 */
	public var data:Vector2D<Tile>;
	
	
	public function new(_mapWidth:Int, 
						_mapHeight:Int,
						_offsetX:Int,
						_offsetY:Int) 
	{
		mapWidth = _mapWidth;
		mapHeight = _mapHeight;
		offsetX = _offsetX;
		offsetY = _offsetY;
		data = new Vector2D<Tile>(mapWidth, mapHeight);
	}
	
	public inline function right():Int { return offsetX + mapWidth; }
	public inline function bottom():Int { return offsetY + mapHeight; }
}