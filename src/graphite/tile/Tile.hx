package graphite.tile;

/**
 * data container for individual tiles.
 * @author qwerber
 */
class Tile
{

	/**
	 * corresponds to the actual index id of the tile
	 * check for interaction and logic with this value
	 * autotiling should use this value
	 */
	public var index:Int;
	/**
	 * boolean for whether the tile is passable
	public var solid:Bool;
	/**
	 * corresponds the the index on the tilesheet
	 * autotiling will set this value
	 */
	public var cache:Int;
	
	public function new(_index:Int, _solid:Bool) 
	{
		index = _index;
		solid = _solid;
		
		cache = 0;
	}
	
}