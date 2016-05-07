package graphite.io;
import flash.events.Event;
import flash.net.URLLoader;
import flash.net.URLRequest;

/**
 * ...
 * @author worldedit
 */

class BinaryLoader 
{
	
	private var loader:URLLoader;
	private var request:URLRequest;
	private var m_callback:Void->Void;
	
	public var name:String;
	public var data:String;

	public function new() 
	{
		data = new String('');
		name = new String('');
		loader = new URLLoader();
	}
	
	public function load(_url:String, m__callback:Void->Void):Void
	{
		m_callback = m__callback;
		request = new URLRequest(_url);
		name = _url;
		loader.addEventListener(Event.COMPLETE, loadComplete);
		loader.load(request);
	}
	
	private function loadComplete(e:Event):Void 
	{
		data = loader.data;
		m_callback();
	}
	
}