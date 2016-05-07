package graphite.graphics;
import flash.geom.Rectangle;

/**
 * ...
 * @author qwerber
 */

//TODO: possibly a component
class TilesheetSurface2
{
	public var tilesheetIndex:Int;
	public var tileRectangle:Rectangle;
	
	public function new(_tilesheetIndex:Int,
						_tileRectangle:Rectangle) 
	{
		tilesheetIndex = _tilesheetIndex;
		tileRectangle = _tileRectangle;
	}
	
}