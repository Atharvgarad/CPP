#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *top=NULL;
node *front=NULL;
node *rear=NULL;  

void s_push()
{
    node *newnode=new node;
    cout<<"Enter the Data"<<endl;
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
    void s_display();
    s_display();
}

void s_pop()
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
        cout<<"Element deleted "<<temp->data<<endl;
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
        cout<<"Elements are:"<<endl;
        while (temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

void q_push()
{
    node *newnode = new node;
    cout << "Enter the Data" << endl;
    cin >> newnode->data;
    newnode->next = NULL;
    if (rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    void q_display();
    q_display();
}

void q_pop()
{
    node *temp;
    temp=front;
    front=front->next;
    cout<<"Element deleted "<<temp->data<<endl;
    delete temp;
    if (front==NULL)
    {
        rear=NULL;
    }
    void q_display();
    q_display();
    
}

void q_display()
{
    node *temp;
    temp=front;
    cout<<"Elements are:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
int c;
do 
{
	cout<<"\n1.Stack\n2.Queue"<<endl;
	cout<<"Enter the Choice";
	cin>>c;
	switch (c)
	{
	case 1:
		int s;
		do 
		{
		cout<<"\n1.PUSH\n2.POP"<<endl;
		cout<<"Enter the Choice";
		cin>>s;
		switch (s)
		{
		case 1:
			s_push();
			break;
		case 2:
			s_pop();
			break;
		}
		}
		while (s!=0);
		break;
	case 2:
		int m;
		do
		{
		cout<<"\n1.Inqueue\n2.Dequeue"<<endl;
		cout<<"Enter the Choice";
		cin>>m;
		switch (m)
		{
		case 1:
			q_push();
			break;
		case 2:
			q_pop();
			break;
		}
		}
		while (m!=0);
		break;
	}
}
while (c!=0);
return 0;
}
