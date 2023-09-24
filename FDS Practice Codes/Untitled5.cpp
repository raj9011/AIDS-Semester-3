#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>
#include<conio.h>

#define MAX 50
void convert();
int priority (char);
char stack[MAX];
char s[MAX],t[MAX];
int top;

main()
{
	top=-1;
	cout<<"\n enter an expression in infix form:";
	get(s);
	convert ();
	cout<<"\n postfix expression is"<<t;
	getch ();
}
void convert()
{
	char opr;
	int i=0;
	int j=0;
	while (s[i]!='\0')
	{
		if (s[i]==''|| s[i]=='\t')
		{
			i++;
			continue;		
		}
	if (isdigit (s[i] || isalpha(s[i])))
	{
		while (isdigit (s[i])||isalpha(s[i]))
		{
			t[j]=s[i];
			i++;
			j++;
			
		}
	if (s[i]=='(')
	{
		stack[++top]=s[i];
		i++;
		}
	if (s[i]=='*'||s[i]=='+'||s[i]=='/'||s[i]=='-')
	{
		if (top!=-1)
		{
			opr=stack[top--];
			while (priority(opr)>=priority(s[i]))
			{
				t[j]=opr;
				j++;
				opr=stack[top--];
			}
			stack[++top]=opr;
			stack[++top]=s[i];
		}
	else
	stack[++top]=s[i];
	i++;
	}
if (s[i]==')')
{
	opr=stack[top--];
	while((opr)!='(')
	{
		t[j]=opr;
		j++;
		opr=stack[top--];
	}
	i++;
}
}
while (top!=-1)
{
	char opr=stack[top--];
	t[j]=opr;
	j++;
	
}
t[j]='0';
}

int priority (char c)
{
	if (c=='$')
	return 3;
	if (c=='*'||c=='/'||c=='%')
	return 2;
else{
	if (c=='+'||c=='-')
	return 1;
	
	else 
		return 0;
}

}






