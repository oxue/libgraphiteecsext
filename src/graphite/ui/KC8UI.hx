package graphite.ui;

//import flash.desktop.NativeApplication;
import flash.filters.GlowFilter;
import flash.text.TextFormat;
import flash.text.TextFormatAlign;
import graphite.io.BinaryLoader;
import haxe.Json;

/**
 * ...
 * @author worldedit
 */

class KC8UI 
{
	public static var configOptions:Dynamic;
	public static var textFormat:TextFormat;
	public static var textFormatLeft:TextFormat;
	public static var glowFilter:GlowFilter;
	
	private static var mcallback:Void->Void;
	private static var binloader:BinaryLoader;
	
	public static function init(m__callback:Void->Void):Void
	{
		mcallback = m__callback;
		binloader = new BinaryLoader();
		binloader.load("config.json", configReady);
	}
	
	static private function configReady() 
	{
		configOptions = Json.parse(binloader.data);
		textFormat = new TextFormat("verdana", 12, configOptions.text_color,null,null,null,null,null,TextFormatAlign.CENTER);
		textFormatLeft = new TextFormat("verdana", 12, configOptions.text_color, null, null, null, null, null, TextFormatAlign.LEFT);
		glowFilter = new GlowFilter(0, 0.7,10, 10, 1,5);
		mcallback();
	}
	
}