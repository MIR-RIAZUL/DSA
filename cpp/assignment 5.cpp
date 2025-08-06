#include<iostream>

using namespace std;
int findshop(int shop[],int n,int T);

int main()

{
    cout<<"enter the size of shop:"<<endl;
    int n;
    cin>>n;
    int shop[n];

    cout<<"enter the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>shop[i];
    }

    cout<<"the shop array is:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<shop[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the tip off from Beggar:"<<endl;
    int T;

    cin>>T;

    int index=findshop(shop,n,T);

    cout<<"the index is:"<<index;


    return 0;
}

int findshop(int shop[],int n,int T)
{
    int add =0;
   // int flag=-1;
    int i;
    for(i=0;i<n;i++)
    {
        add=add+shop[i];
        if(add==T||add>T)
        {
           //flag=0;
           return i;
           //break;
        }

    }

}
