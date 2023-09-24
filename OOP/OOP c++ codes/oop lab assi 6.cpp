#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;


int main ()
{
	Typemap<string,int>mapType;
	mapTypepopulationMap;
	
	populationMap.insert(pair<string,int>("Maharashtra",11));
	populationMap.insert(pair<string,int>("Uttar Pradesh",19));
	populationMap.insert(pair<string,int>("Madhya Pradesh",12));
	populationMap.insert(pair<string,int>("Andhra Pradesh",10));
	
	mapType::iterator=--populationMap.end();
	populationMap.erase(i);
	cout<<"Size of populationMap:"<<populationMap.size()<<"/n";
	
	for (i= populationMap.begin();i!=population.end();i++){
	cout<<i->first<<":"<<i->second;
		
	}
	
	string state;
	cout<<"/n enter state:";
	cin>>state;
	i=populationMap.find(state);
	if(i!=populationMap.end())
	cout<<state<<" population is"<<i>second;
	else 
	cout<<"key is not in populationMap";
	populationMap.clear();
	
}
