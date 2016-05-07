package ;

import flash.Lib;
import graphite.ui.KC8Pane;
import haxe.Timer;
/**
 * ...
 * @author qwerber
 */
class DebugMenu extends KC8Pane
{

	public function new() 
	{
		super("debug", 400, 300, false);
		Timer.delay(reAdd,1000);
	}
	
	function reAdd() 
	{
		parent.addChild(this);
		Timer.delay(reAdd,1000);
	}
	
}