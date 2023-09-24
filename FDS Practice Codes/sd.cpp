#include<iostream>
using namespace std;

class set
{
int gTotalStudent, gCricketStud, gBadmintonStud;
int *SetA,*SetB;
public:
void getdata(); // gets the required data
void seaids();/* Calculates the required result */
void display();
void vanilla();
void butter_scotch();
void both_a_b();
int common();

};
int Set::common()
{
int common=0;
    for(int i=gCricketStud-1;i>=0;i--)
    {
     for(int j=gBadmintonStud-1;j>=0;j--)
     {
     if(SetA[i] == SetB[j])
     {
     common++;
     }
     }
    }
    return common;
}

void Set::getdata()
{
cout<<"\nEnter the Total number of Students in the class:-";
cin>>gTotalStudent;
cout<<"\nEnter the Set A (Cricket):-"; //This will include all the students playing cricket
cin>>gCricketStud;
SetA=new int[gCricketStud];
for(int i=0;i<gCricketStud;i++)
{
cout<<"\nEnter The Roll number of "<<i+1<<" student:-";
cin>>SetA[i]; //Get their roll number
}
cout<<"\nEnter the Set B (Badminton):-"; //This will include all the students playing badminton
cin>>gBadmintonStud;
SetB=new int[gBadmintonStud];
for(int i=0;i<gCricketStud;i++)
{
cout<<"\nEnter The Roll number of "<<i+1<<" student:-";
cin>>SetB[i]; //get their roll number
}
}

void Set::seaids()
{

    cout<<"\nSet of students who play either cricket or badminton or both:-"<<gCricketStud+gBadmintonStud-common();
    /*Logic behind this is that the SetA will have Cricket playing students as well as Badminton playing students
     * in common,so when we add both Sets(Set A and Set B) ,we are adding common students twice.So we need to delete
     * the additional common students*/

}
void Set::display()
{

    cout<<"\nSet of students who play both cricket and badminton:-"<<common();
}
void Set::vanilla()
{
cout<<"\nSet of students who play only cricket:-"<<gCricketStud-common();
}
void Set::butter_scotch()
{
cout<<"\nSet of students who play only badminton:-"<<gBadmintonStud-common();
}
void Set::both_a_b()
{
cout<<"\nNumber of students who play neither cricket nor badminton:-"<<gTotalStudent-gCricketStud-gBadmintonStud+common();
/*Remove the playing players from total number of students*/
}
int main()
{
int n;
Set obj;
obj.getdata();
cout<<"\n 1. Set of students who play either cricket or badminton or both \n 2. Set of students who play both cricket and badminton \n 3. Set of students who play only cricket \n 4. Set of students who play only badminton \n 5. Number of students who play neither cricket nor badminton:-";
cin>>n;

switch(n)
{
case 1:
obj.seaids();
break;
case 2:
obj.display();
break;
case 3:
obj.vanilla();
break;
case 4:
obj.butter_scotch();
break;
case 5:
obj.both_a_b();
break;
}
return 0;
} 
