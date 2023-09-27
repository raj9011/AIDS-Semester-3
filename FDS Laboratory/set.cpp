/*Second year AI & DS class, set A of students like Vanilla Ice-cream and set B
of students like butterscotch ice-cream. Write C++ program to store two sets using linked
list. compute and display-
a) Set of students who like both vanilla and butterscotch
b) Set of students who like either vanilla or butterscotch or not both
c) Number of students who like neither vanilla nor butterscotch*/

#include<iostream>
using namespace std;
class node
{
    public:
    int rno;
    node *next;
};
class aids
{
    public:
    node *head=NULL, *head1=NULL, *head2=NULL, *temp,*temp1, *temp2, *t1=NULL, *t2=NULL;
    node *newnode, *n1, *n2;
    void seaids()
    {
        int n;
        cout<<"Number of Students in the class"<<endl;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            newnode=new node();
            newnode->rno=i;
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
                temp=head;
            }
            else
            {
                temp->next=newnode;
                temp=temp->next;
            }
        }

    }
void display()
{
    if(head==NULL)
    {
        cout<<"List is empty";

    }
    else
    {
        temp2=head;
        while(temp2->next!=NULL)
        {
        cout<<temp2->rno<<endl;
        temp2=temp2->next;
        }
        cout<<temp2->rno<<endl;

    }
}

void vanilla()
{
    char key='y';
    
    while(key!='n')
    {
        
        int n;
        cout<<"Enter the roll number who likes Vanilla"<<endl;
        cin>>n;
        n1=new node();
        n1->rno=n;
        n1->next=NULL;
        if(head1==NULL)
        {
            head1=n1;
            temp1=head1;
        }
        else
        {
            temp1->next=n1;
            temp1=temp1->next;
        }
    cout<<"want to add more to Vanilla"<<endl;
    cin>>key;    
    }
}



void Butter_Scotch()
{
    char key='y';
    while(key!='n')
    {
        
        int n;
        cout<<"Enter the roll number who likes Butter Scotch"<<endl;
        cin>>n;
        n2=new node();
        n2->rno=n;
        n2->next=NULL;
        if(head2==NULL)
        {
            head2=n2;
            temp2=head2;
        }
        else
        {
            temp2->next=n2;
            temp2=temp2->next;
        }
        
    cout<<"want to add more to Butter_Scotch"<<endl;
    cin>>key;
    }
}
void both_v_b()
{
    t1=head1;
    t2=head2;
    int i=0;
    int vb[4];
    while(t1!=NULL || t2!=NULL)
    {
        if(t1->rno==t2->rno)
        {
            //vb[i]=temp1->rno;
            //i++;
            cout<<t1->rno;
            t1=t1->next;
            t2=t2->next;
        }
        //cout<<t1->rno<<endl;

    }
    //cout<<"Students who like both Vanilla and Butter_Scotch"<<endl;
    //for(i=0;i<sizeof(vb);i++)
    //cout<<vb[i]<<endl;
}

};
int main()
{
    aids a;
    a.seaids();
    a.display();
    a.vanilla();
    a.Butter_Scotch(); 
    a.both_v_b();
}