#include<iostream>
#include<string.h>
#define max 20
using namespace std;
class Stack
{

char a[max];
int top;
public:
		Stack()
		{
			top=-1;
		}
void Push(char m)
{
	top++;
	a[top] = m;
	cout<<endl<<m<<" is Pushed in Stack ...";
}
void ReverseString()
{
	char str[max];
	cout<<"\n\nReverse string is : ";
	for(int i=top,j=0; i>=0; i--,j++)
{
	
	cout<<a[i];
	str[j]=a[i];
}
	cout<<endl;
}
void CheckPalindrome()
{
	char str[max];
	int i,j;
	for(i=top,j=0; i>=0; i--,j++)
{
	str[j]=a[i];
}
str[j]='\0';
if(strcmp(str,a) == 0)
cout<<"\n\nString is Palindrome...";
else
cout<<"\n\nString is not Palindrome...";
}
void RemoveSpaces(char *str)
{
int count = 0;
for (int i = 0; str[i]; i++)
if (str[i] != ' ')
str[count++] = str[i];
str[count] = '\0';
}
};
int main()
{
Stack s;
char str[max];
int i=0;
cout<<"\nenter string to be Reversed and check whether it is Palindrome or not : \n\n";
cin.getline(str , 30);
s.RemoveSpaces(str);

while(str[i] != '\0')
{
s.Push(str[i]);
i++;
}
s.CheckPalindrome();
s.ReverseString();
}
