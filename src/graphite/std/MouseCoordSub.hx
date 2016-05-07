package graphite.std;

import flash.Lib;
import flash.Vector;
import graphite.collections.ObjectPool;
import graphite.Sub;
import graphite.Comp;

/**
 * ...
 * @author qwerber
 */

class MouseCoordSub extends Sub
{
	
	private var mouseCoords:Vector<MouseCoordComp>;
	private var pool:ObjectPool<MouseCoordComp>;

	public function new() 
	{
		super(1, StdComp.MOUSECOORDS);
		mouseCoords = new Vector<MouseCoordComp>();
		pool = new ObjectPool<MouseCoordComp>(10);
	}
	
	override public function get():Comp 
	{
		var mouseCoord:MouseCoordComp = pool.get();
		if (mouseCoord == null)
		{
			mouseCoord = new MouseCoordComp();
		}
		mouseCoords.push(mouseCoord);
		return mouseCoord;
	}
	
	override public function update():Void 
	{
		var i:Int = mouseCoords.length;
		var l:Int = i;
		while (i-->0)
		{
			var mouseCoord:MouseCoordComp = mouseCoords[i];
			if (mouseCoord.remove == true)
			{
				mouseCoords[i] = mouseCoords[--l];
				pool.alloc(mouseCoord);
				continue;
			}
			mouseCoord.coordinates.x = Lib.current.mouseX;
			mouseCoord.coordinates.y = Lib.current.mouseY;
			if (!Std.is(mouseCoord.coordinates.x, Float) ||
				!Std.is(mouseCoord.coordinates.x, Float))
			{
				mouseCoord.coordinates.x = 0;
				mouseCoord.coordinates.y = 0;
			}
			if (mouseCoord.coordinates.y > Lib.current.stage.stageHeight)
			mouseCoord.coordinates.y = Lib.current.stage.stageHeight;
			if (mouseCoord.coordinates.x > Lib.current.stage.stageWidth)
			mouseCoord.coordinates.x = Lib.current.stage.stageWidth;
		}
		mouseCoords.length = l;
	}
	
}