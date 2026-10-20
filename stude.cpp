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
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
newnode->next=NULL;
}
else if (newnode->roll < head->roll)
{
newnode->next=head;
head=newnode;
}
else
{
node *temp;
node *pre;
temp=head;
while (temp != NULL && temp->roll < newnode->roll)
{
pre=temp;
temp=temp->next;
}
pre->next=newnode;
newnode->next=temp;
}
}

void find()
{
int r;
cout<<"Enter the Roll NO. to search"<<endl;
cin>>r;
node *temp;
node *pre;
temp=head;
while (temp->next != NULL && temp->roll != r)
{
pre=temp;
temp=temp->next;
}
if(temp->roll==r)
{
cout<<"Student found"<<endl;
}
else
{
cout<<"Student Not found"<<endl;
}
}

void delete_s()
{
int r;
cout<<"Enter the Roll NO. want to Delete"<<endl;
cin>>r;
node *temp;
node *pre;
temp=head;
while (temp->next != NULL && temp->roll != r)
{
pre=temp;
temp=temp->next;
}
if(temp->roll==r)
{
pre->next=temp->next;
cout<<"Student Deleted "<<temp->roll<<endl;
delete temp;
}
else
{
cout<<"Student Not found"<<endl;
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
cout<<"==== Display Students ===="<<endl;
while (temp!=NULL)
{
cout<<"Roll NO: "<<temp->roll<<endl;
cout<<"Name :"<<temp->name<<endl;
cout<<"Marks: "<<temp->mark<<endl;
temp=temp->next;
}
}
}

void update()
{
int r;
int marks;
cout<<"Enter the Roll NO. for Update"<<endl;
cin>>r;
cout<<"Enter the Marks to Update"<<endl;
cin>>marks;
node *temp;
node *pre;
temp=head;
while (temp->next != NULL && temp->roll != r)
{
pre=temp;
temp=temp->next;
}
if(temp->roll==r)
{
temp->mark=marks;
}
else
{
cout<<"Student Not found"<<endl;
}
}

int main()
{
int c;
do
{
cout<<"1.Add student\n2.Display\n3.Find\n4.Delete\n5.update\n6.Exit"<<endl;
cout<<"Enter the Choice : "<<endl;
cin>>c;
switch(c)
{
case 1:
add_s();
break;
case 2:
display();
break;
case 3:
find();
break;
case 4:
delete_s();
break;
case 5:
update();
break;
case 6:
break;
default:
cout<<"Invalid choice"<<endl;
}
}
while(c!=6);
}
