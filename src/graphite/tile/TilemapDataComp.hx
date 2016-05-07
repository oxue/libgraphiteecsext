package graphite.tile;

import flash.Vector.Vector;
import graphite.collections.Vector2D;
import graphite.Comp;
import graphite.std.StdComp;

/**
 * Data component of Tilemap so different rendering methods are possible
 * @author qwerber
 */
class TilemapDataComp extends Comp
{

	//TODO: Add autotiling features;
	/**
	 * all tilemaps are composed of several layers
	 * all tilemaps have at least one layer
	 */
	public var layers:Vector<TilemapLayer>;
	
	/**
	 * the dimensions of the map
	 */
	private var mapWidth:Int;
	private var mapHeight:Int;
	
	/**
	 * sister components that we care about
	 */
	var tilesheet:TilesheetComp;
	
	public function new(_mapWidth:Int, 
						_mapHeight:Int) 
	{
		super(StdComp.TILEMAPDATA);
		
		mapWidth = _mapWidth;
		mapHeight = _mapHeight;
		
		//initialize the first layer
		layers = new Vector<TilemapLayer>(1);
		
		layers[0] = new TilemapLayer(mapWidth, mapHeight, 0, 0);
		
	}
	
	override public function cache():Void 
	{
		tilesheet = cast getComponentCache(StdComp.TILESHEET);
	}
	
	/**
	 * add a blank layer to the map and returns the index corresponding to the current depth of the layer
	 * @param	_mapWidth width
	 * @param	_mapHeight height
	 * @param	_offsetX x offset
	 * @param	_offsetY y offset
	 * @return int corresponding to the current index of the newly added tilemap
	 */
	public function addLayer(_mapWidth:Int, 
							 _mapHeight:Int,
							 _offsetX:Int,
							 _offsetY:Int):Int
	{
		var layer:TilemapLayer = new TilemapLayer(_mapWidth, _mapHeight, 
												  _offsetX, _offsetY);
		layers.push(layer);
		//returns the top of layers
		return layers.length - 1;
	}
	
	/**
	 * sets the data of selected layer by means of a string of integers
	 * @param	_layer the layer desired to be populated
	 * @param	_dpt data per tile 
	 * @param	_data the string data stream to be used to used
	 */
	public function populateLayerString(_layer:Int, _dpt:Int, _data:String):Void
	{
		//using regexes I tokenize the input data stream
		var key:EReg = new EReg(".{" + Std.string(_dpt) + "}", "");
		var rightString:String = _data;
		var posCounter:Int = 0;
		while (rightString.length > 0)
		{
			key.match(rightString);
			var index:Int = Std.parseInt(key.matched(0));
			layers[_layer].data.internalData[posCounter] = tilesheet.tiles[index]; 
			
			rightString = key.matchedRight();
			posCounter++;
		}
	}
	
}