package graphite.std;
import graphite.Comp;

/**
 * ...
 * @author qwerber
 */

class LerpComp extends Comp
{
	
	public var factor:Float;
	public var position:PositionComp;
	public var destination:CoordinateComp;
	
	public function new(_factor:Float = 0.25) 
	{
		super(StdComp.LERP);
		factor = _factor;
	}
	
	override public function cache():Void 
	{
		destination = cast getComponentCache(StdComp.COORDINATES);
		position = cast getComponentCache(StdComp.POSITION);
	}
	
	override public function load():Void 
	{
		position.dampX = factor;
		position.dampY = factor;
	}
	
}