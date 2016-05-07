package graphite.collections;
import flash.Vector;

/**
 * Puts a lot of trust in the user; All members exposed.
 * @author qwerber
 */
@:generic class Vector2D<T>
{

	public var width:Int;
	public var height:Int;
	
	public var internalData:Vector<T>;
	
	public function new(_width:Int = 0, _height:Int = 0) 
	{
		width = _width;
		height = _height;
		
		internalData = new Vector<T>(width * height, true);
	}
	
	public inline function getElemAt(_x:Int, _y:Int):T
	{
		return internalData[_y * width + _x];
	}
	
	public inline function setElemAt(_x:Int, _y:Int, _elem:T):Void
	{
		internalData[_y * width + _x] = _elem;
	}
	
}