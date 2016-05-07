package graphite.std;
import graphite.Comp;

/**
 * ...
 * @author qwerber
 */

class MouseCoordComp extends Comp
{
	public var coordinates:CoordinateComp;

	public function new() 
	{
		super(StdComp.MOUSECOORDS);
	}
	
	override public function cache():Void 
	{
		coordinates = cast getComponentCache(StdComp.COORDINATES);
	}
	
}