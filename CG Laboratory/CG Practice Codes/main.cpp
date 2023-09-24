#include<graphics.h>
#include<iostream>
using namespace std;

class tria
{
 protected:
 int ver,x[20],y[20];
 int xmin,xmax,ymin,ymax;
 public:
  void input();
  void sketch();
  
};

void tria::input()
{
 int i;
 cout<<"---Enter the number of vertices :---"<<endl;
 cin>>ver;
 if(ver>2)
 {
  for(i=0;i<ver;i++)
  {
   cout<<"--Enter the co-ordinates of vertex"<<" "<<(i+1)<<":"<<endl;
   cout<<"\t x"<<(i+1)<<" : ";
   cin>>x[i];
   cout<<"\t y"<<(i+1)<<" : ";
   cin>>y[i];
  }
  x[i]=x[0];
  y[i]=y[0];
  xmin=xmax=x[0];
  ymin=ymax=y[0];
  
 }
 else
 {
  cout<<"It is a Invalid vertices number !!"<<endl;
 }
}

void tria::sketch()
{
 for(int i=0;i<ver;i++)
 {
  delay(50);
  line(x[i],y[i],x[i+1],y[i+1]);
 }
}

class filling:public tria
{
	
 int intersec[20];
 int c,xx,yy;
 public:
  void pxsrch();
  void intersection(float z);
  void scanline(int);
};
void filling::pxsrch()
{
 float s;
 for(int i=0;i<ver;i++)
 {
  if(xmin>x[i])
  {
   xmin=x[i];
  }
  if(xmax<x[i])
  {
   xmax=x[i];
  }
  if(ymin>y[i])
  {
   ymin=y[i];
  }
  if(ymax<y[i])
  {
   ymax=y[i];
  }
 }
 s=ymin+0.01;
 while(s<=ymax)
 {
  intersection(s);
  scanline(s);
  s++;
 }
}
void filling::intersection(float z)
{
 int x1,x2,y1,y2,temp;
 c=0;
 for(int i=0;i<ver;i++)
 {
  x1=x[i];
  y1=y[i];
  x2=x[i+1];
  y2=y[i+1];
  if(y2<y1)
  {
   temp=x1;
   x1=x2;
   x2=temp;
   temp=y1;
   y1=y2;
   y2=temp;
  }
  if(z<y2&&z>=y1)
  {
   if((y1-y2)==0)
   {
    xx=x1;
   }
   else
   {
    xx=(((x2-x1)*(z-y1))/(y2-y1));
    xx=x1+xx;
    
   }
   if(xx<=xmax&&xx>=xmin)
   {
    intersec[c++]==xx;
   }
  }
 }
}

void filling::scanline(int z)
{
 for(int i=0;i<c;i+=2)
 {
  delay(20);
  line(intersec[i],z,intersec[i+1],z);
 }
}

int main()
{
 int color;
 filling ob;
 ob.input();
 cout<<" "<<endl;
 cout<<"-Enter the colorvof your choice-"<<endl;
 cout<<"\t choices Available : (0-15)"<<endl;
 cout<<" "<<endl;
 cout<<"\t choices:";
 cin>>color;
 initwindow(1500,700);
 cleardevice();
 ob.sketch();
 setcolor(color);
 ob.pxsrch();
 getch();
 closegraph();
 return 0;
}
