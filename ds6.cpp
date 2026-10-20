/*
design and implement C++ program for a hash table of fixed size. use the devision method for the hash function and resolve collisions using linear probing allow the user to perform the following oprations
insert key
search for key
delete a key
display the table
*/
#include<iostream>
using namespace std;
int arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

void insert()
{
    int a,h;
    cout<<"Enter the keys"<<endl;
    cin>>a;
    h=a%10;
    if(arr[h]==-1)
    {
        arr[h]=a;
        return ;
    }
    else
    {
        while(arr[h]!=-1)
        {
        h=(h+1)%10;
        }
        arr[h]=a;
    }
}

void search()
{
    int a,i,temp=0;
    cout<<"Enter the key to search : "<<endl;
    cin>>a;
    for(i=0;i<10;i++)
    {
        if(arr[i]==a)
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
    {
        cout<<"Element Found\nIndex No : "<<i<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }
}

void delete_k()
{
    int n,i,temp=0;
    cout<<"Enter the Element want to delete : ";
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
    {
        cout<<"Element Deleted Successfully"<<endl;
        arr[i]=-1;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }

}

void display()
{
    int i;
    cout<<"\nIndex | Key"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<i<<"     | "<<arr[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int c,count=0;
    do 
    {
        cout<<"1.insert\n2.display\n3.Delete\n4.Search\n5.Exit"<<endl;
        cout<<"Enter the choice : ";
        cin>>c;
        if (count==10)
        {
            cout<<"Size Full"<<endl;
        }
        switch (c)
        {
            case 1:
                if(count==10)
                {
                    return 1;
                }
                insert();
                count++;
                break;
            case 2:
                display();
                break;
            case 3:
        	    delete_k();
        	    break;
            case 4:
                search();
            	break;
            case 5:
                break;
            default :
                cout<<"Invalid Choice"<<endl;
        }
    }
    while(c!=5);
}
