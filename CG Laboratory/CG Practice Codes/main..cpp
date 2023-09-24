#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
class mat
{
public:
float a[3][3],m,n;
int c[20][20],b[20][20];
public:
void input();
void output();
void translation();
void scaling();
void rotation();
void object();
void accept();
mat operator*(mat x);
};
void mat::object()
{
// n=m;
for(int i=0;i<3;i++)
{
for(int j=0;j<2;j++)
{
line(a[i][j],a[i+1][j],a[i][j+1],a[i+1][j+1]);
}
line(a[0][0],a[1][0],a[0][2],a[1][2]);
break;
}
}
void mat::accept()
{
cout<<"\n";
cout<<"Enter the Number Of Edges:";
cin>>m;
cout<<"\nEnter The Coordinates :";
for(int i=0;i<m;i++)
{
for(int j=0;j<3;j++)
{
if(j>=2)
a[i][j]=1;
else
cin>>a[i][j];
}
}
}
void mat::input()
{
cout<<"Enter the matrix element"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
cin>>a[i][j];
}
}
a[2][0]=a[2][1]=a[2][2]=1;
}
void mat::translation()
{
int tx,ty;
cout<<"Enter the amount of translation tx and ty";
cin>>tx>>ty;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i==j)
a[i][j]=1;
else
a[i][j]=0;
}
}
a[0][2]=tx;
a[1][2]=ty;
}
void mat::output()
{
// mat c;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
}
void mat::scaling()
{
int sx,sy;
cout<<"Enter the amount of scaling sx and sy";
cin>>sx>>sy;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i!=j)
a[i][j]=0;
else
a[0][0]=sx;
a[1][1]=sy;
}
}
a[2][0]=a[2][1]=0;
a[2][2]=1;
}
void mat::rotation()
{
float thetta=0;
int deg;
cout<<"Enter the amount of rotation ";
cin>>deg;
thetta=deg*(3.14/180);
a[0][0]=a[1][1]=cos(thetta);
a[0][1]=sin(thetta);
a[1][0]=sin(-thetta);
a[0][2]=a[1][2]=a[2][0]=a[2][1]=0;
a[2][2]=1;
}
mat mat::operator*(mat x)
{
mat c;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
c.a[i][j]=0;
for(int k=0;k<3;k++)
{
c.a[i][j]=c.a[i][j]+a[i][k]*x.a[k][j];
}
}
}
return c;
}
int main()
{
int ch;
mat p,q,r,s,t;
cout<<"Enter the element in first matrix"<<endl;
p.input();
cout<<"MENU"<<endl;
cout<<"1. Press '1' for Translation!"<<endl;
cout<<"2. Press '2' for Rotation!"<<endl;
cout<<"3. Press '3' for Scaling!"<<endl;
cout<<"4. Press '4' to exit!"<<endl;
cout<<"Enter your choice: "<<endl;
cin>>ch;
switch (ch)
{
case 1:
q.translation();
cout<<"Matrix multiplication is"<<endl;
s=q*p;
s.output();
initwindow(1600,900);
cleardevice();
p.object();
getch();
cleardevice();
s.object();
getch();
break;
case 2:
r.rotation();
cout<<"Matrix multiplication is"<<endl;
s=r*p;
s.output();
initwindow(1600,900);
cleardevice();
p.object();
getch();
cleardevice();
s.object();
getch();
break;
case 3:
t.scaling();
cout<<"Matrix multiplication is"<<endl;
s=t*p;
t.output();
initwindow(1600,900);
cleardevice();
p.object();
getch();
cleardevice();
s.object();
getch();
break;
case 4:
exit(1);
break;
default:
cout<<"Invalid Choice!"<<endl;
break;
}
return 0;
}

