#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class student
{
  public:
  int telephone;
  int rno;
  char name[10];
};

vector <student> v;
vector <student>::iterator i;
bool compare(const student &ob1,const student &ob2)
{
  if(ob1.rno>ob2.rno)
  return true;
  return false;
}
void insert()
{
	int x;
	cout<<"\n Enter how many elements you want to enter=";
	cin>>x;
 for(int i=1;i<=x;i++)
 {
 
  student ob;
  cout<<"\n Enter roll number and name =";
  cin>>ob.rno>>ob.name;
  v.push_back(ob); 
}
}

void display()
{
  cout<<"\n ***student Details are***";
  for(i=v.begin();i!=v.end();i++)
  cout<<"\n "<<(*i).rno<<(*i).name; 
}
void search()
{
  int r;
  int flag=0;
  cout<<"\n Enterd roll number to search=";
  cin>>r;

  for(i=v.begin();i!=v.end();i++)
  {
    if(r==(*i).rno)
    {
      flag=1;
      break;
    }
      }
     if(flag==1)
     cout<<"\n Element found with details like ="<<"\n\t\tRoll Number="<<(*i).rno<<"\n\t\tName="<<(*i).name;
    else 
    cout<<"\n Enterd record not found";
}



int main() 
{
	student o;
	vector <student> v;
	vector <student>::iterator i;
	
	
	while(1)
	{
	
	int g;
	cout<<"\n\t ***MENU*** \n1.Insert Enteries \n2.Display Inserted Elements \n3.Search for a element \n4.Sort & display Sorted Enteries  \nEnter your choice=";
	cin>>g;
	switch(g)
	{
		case 1:
			insert();
			break;
		case 2:
			display();
			break;
		case 3:
			search();
			break;
		case 4:
			sort(v.begin(),v.end(),compare);
			break;
		case 5:
			
			break;
		default:
			cout<<"Invalid Choice";
	}
}

return 0;
}

