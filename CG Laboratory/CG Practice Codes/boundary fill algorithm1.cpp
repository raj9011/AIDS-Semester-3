#include<iostream>
#include<graphics.h>
boundaryfill (x,y,newcolor)
{
	current = getpixel (x,y);
	if (current != newcolor) && (current!=boundary color)
	{
		putpixel (x,y,newcolor);
		boundaryfill(x-1,y,newcolor);
		boundaryfill(x+1,y,newcolor);
		boundaryfill(x,y-1,newcolor);
		boundaryfill(x,y+1,newcolor);
		
	}
}
