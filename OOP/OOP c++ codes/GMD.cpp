#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:/tc/bgi");
	line(100,100,200,200);
	closegraph();
	restorecrtmode();
	return 0;
}
