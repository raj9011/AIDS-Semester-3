#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>

using namespace std;

class drop{
	public :
		void display() {
			
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
   for(i=30;j<130;i+=4)
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
	drop w;
	w.display();
	getch();
	return(0);
}


