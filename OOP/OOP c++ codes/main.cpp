#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>

class droplet{
	public:
	void display(){
	int i,j,k,t;
    ellipse(320,300,0,360,2*30,30-10);
	for(j=10;j<295;j+=6)
{
	setcolor(WHITE);
	line(320,j,315,j+10);
	line(320,j,315,j+10);
	arc(320,j+10,180,360,5);
	delay(40);
	setcolor(BLACK);
	line(320,j,315,j+10);
	line(320,j,315,j+10);
	arc(320,j+10,180,360,5);
	
	
	
}
    for (i=30;i<130;i+=4)
	{
	setcolor(WHITE);
	ellipse(320,300,0,360,2*i,i-10);
	delay(40);
		
	}	
	}
};
int main()
{
	int gd= DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	droplet w;
	w.display();
	getch();
	return (0);
}
