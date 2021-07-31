//creating nodes

#include <iostream>
using namespace std;

struct node
{
int data;
node *next;
}*n,*head,*tail;


int main()
{
  int value;
  cout<<"Enter -1 to terminate \n";
  cout<<"Enter elements : ";
  while(1)
  {
    cin>>value;
    
     if(value==-1)
        break;
     else
     {
        n = new node;
        n->data=value;
        if(head==NULL)
           head=n;
        else
           tail->next=n;
        tail=n;
        tail->next=NULL;
     }
    }
    
    cout<<"\nDisplay elements : ";
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   delete(temp);
   
   
   return 0;
   
}


//creating nodes using class

#include <iostream>
using namespace std;

struct node
{
int data;
node *next;
};

class linklist
{
 node *head;
 public:
 linklist()
 {
     head=NULL;
 }
 void create(void);
 void display(void);
};

void linklist :: create(void)
{
  node *newl=NULL,*end=newl;
  int value;
  cout<<"Enter -1 to terminate \n";
  cout<<"Enter elements : ";
  while(1)
  {
    cin>>value;
     if(value==-1)
        break;
     else
     {
        newl=new node;
        newl->data=value;
        if(head==NULL)
           head=newl;
        else
           end->next=newl;
        end=newl;
        end->next=NULL;
     }
    }
}

void linklist :: display(void)
{
  cout<<"\nDisplay elements : ";
  node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  delete(temp);
}

int main()
{
linklist o1;
o1.create();
o1.display();
return 0;
}
