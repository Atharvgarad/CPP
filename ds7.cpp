/*
A university has several campuses spread across different
locations. The administration wants to establish an optical
fiber network connecting all campuses. The cost of laying fiber
between two campuses varies depending on distance and
terrain. Design a cost-effective network that connects all
campuses with the least total cost, using appropriate data
structures and algorithms in C++.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No. of nodes in graph : ";
    cin>>n;
    int arr[n][n];
    cout<<"\nEnter the Weight"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
            if(arr[i][j]==0)
            {
                arr[i][j]=999;
            }
        }
    }

    int vis[n]={0};
    int u,v,edges=0,total=0,min;
    vis[0]=1;
    while (edges<n)
    {
        min=999;
        for(int i=0;i<n;i++)
        {
            if(vis[i])
            {
                for(int j=0;j<n;j++)
                {
                    if(!vis[j]&&arr[i][j]<min)
                    {
                        min=arr[i][j];
                        u=i;
                        v=j;
                    }
                }
            }        
        }
        total+=min;
        edges++;
        vis[v]=1;
    }
    cout<<"Cost  : "<<total;
}