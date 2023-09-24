      

#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;
 float xi,yi,di,dl,dll,r;
	int limit=0;
	int xc=650,yc=350;
	
void mh();
void md();
void mv();
void ddal(int x1, int y1, int x2, int y2);

void bresenham(int rr)
{
	r=rr;
	xi=0;
	yi=r;
	di=2*(1-r);
	while(yi>=limit)
	{
		putpixel(xc+xi,yc+yi,WHITE);
		putpixel(xc-xi,yc-yi,WHITE);
		putpixel(xc+xi,yc-yi,WHITE);
		putpixel(xc-xi,yc+yi,WHITE);
		
		if(di<0)
		{
			dl=2*di+2*yi-1;
			if(dl<=0)
			   mh();
			else
			   md();
		}
		else if (di>0)
		{
			dll=2*di-2*xi-1;
			if(dll<=0)
			   md();
			else 
			    mv();  
		}
		else if(di==0)
		    md();
		    
	};
	
} 
void mh()
{
	xi=xi+1;
	di=di+2*xi+1;
	
	
}
void md()
{
	xi=xi+1;
	yi=yi-1;
	di=di+2*xi-2*yi+2;
}
void mv()
{
	yi=yi-1;
	di=di-2*yi+1;
}

void ddal(int x1, int y1, int x2, int y2)
{
	float l;
	float dx,dy,x,y;
	if(abs(x2-x1)>=(y2-y1))
	l=abs(x2-x1);
	else
	
	
        l=abs(y2-y1);
    
	dx=(x2-x1)/l;
	dy=(y2-y1)/l;
	x=x1+0.5;
	y=y1+0.5;
	int i=1;
	while(i<=l)
	{
		putpixel(int(x),int(y),RED);
		x=x+dx;
		y=y+dy;
		i++;
	}


}
int main()
{
	int radius,m,n;
	
	cout<<"Enter the radius of the circle"<<endl;
	cin>>radius;
	n=radius*cos(30*3.14/180);
	m=radius*sin(30*3.14/180);
	initwindow(1300,750);
	bresenham(radius);
	ddal(xc,yc-r,xc+n,yc+m);
	ddal(xc+n,yc+m,xc-n,yc+m);
	ddal(xc-n,yc+m,xc,yc-r);
	bresenham(m);

	getch();

}

