/*
create student record management system using linked list c++
*/

#include<iostream>
#include<string>
using namespace std;

struct node
{
int roll;
string name;
float mark;
node *next;
};
node *head=NULL;

void add_s()
{
node *newnode=new node;
cout<<"Enter the Roll NO.: "<<endl;
cin>>newnode->roll;
cin.ignore();
cout<<"Enter the Name: "<<endl;
getline(cin,newnode->name);
cout<<"Enter the Mark: "<<endl;
cin>>newnode->mark;
if (head==NULL)
{
head=newnode;
newnode->next=NULL;
}
else if (head->roll > newnode->roll)
{
newnode->next=head;
head=newnode;
}
else
{
node *temp;
node *pre=NULL;
temp=head;
while (temp!=NULL && temp->roll < newnode->roll)
{
pre=temp;
temp=temp->next;
}
pre->next=newnode;
newnode->next=temp;
}
}

void delete_s()
{
int c;
cout<<"Enter the Student want to delete: ";
cin>>c;
if(head==NULL)
{
cout<<"No student"<<endl;
}
else
{
node *temp;
temp=head;
while (temp->roll != c)
{

}
}
}

void display()
{
if (head==NULL)
{
cout<<"underflow"<<endl;
}
else
{
node *temp;
temp=head;
cout<<"Students are:"<<endl;
while (temp!=NULL)
{
cout<<"Roll NO: "<<temp->roll<<endl;
cout<<"Name :"<<temp->name<<endl;
cout<<"Marks: "<<temp->mark<<endl;
temp=temp->next;
}
}
}

int main()
{
int c;
do 
{
cout<<"1.Add student\n2.Display\n"<<endl;
cout<<"Enter the choice: "<<endl;
cin>>c;
switch (c)
{
    case 1:
    add_s();
    break;
    case 2:
    display();
    break;
}
}
while(c!=0);
}
