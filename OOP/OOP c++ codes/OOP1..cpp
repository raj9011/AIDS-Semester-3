#include<iostream>
class ABC
{
	private:int number;
	protected:int data;
	public: void getdata()
	    {
		
		    cout<<"enter first number:";
		    cin>>number;
	        cout<<"enter second number:";
	        cin>>data;
	    
        } 
		void putdata()
		{
		    cout<<"the first number entered is"<<number;
			cout<<"the second number entered is"<<data;
	    }  			 
};
void main()
{ 
    ABC obj;
    obj.getdata();
    obj.putdata();
    
}
