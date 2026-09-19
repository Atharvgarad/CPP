#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *top=NULL;

void push()
{
    node *newnode=new node;
    cout<<"Enter the Data"<<endl;
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
    void s_display();
    s_display();
}

void pop()
{
    if (top==NULL)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        node *temp;
        temp=top;
        top=top->next;
        delete temp;
    }
    void s_display();
    s_display();
}

void s_display()
{
    if (top==NULL)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        node *temp;
        temp=top;
        cout<<"Elements are:";
        while (temp->next!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

int main()
{
push();
push();
// pop();
}