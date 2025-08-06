#include<iostream>

using namespace std;

void binaarSearch(int arr[],int n,int a);

int main()
{
    int a;

    cout<<"enter the array size"<<endl;
    cin>>a;

    int arr[a];

    cout<<"enter the array"<<endl;

    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is"<<endl;

    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int n;

    cout<<"enter your target number"<<endl;

    cin>>n;
    binaarSearch(arr,n,a);

    return 0;
}

void binaarSearch(int arr[],int n,int a)
{

    int low=0;
    int high=a-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(n>arr[mid])
        {
            low=mid+1;

        }
        else if(n<arr[mid])
        {
            high=mid-1;

        }
        else if(n==arr[mid])
        {
            cout<<"found"<<endl;
            cout<<"the index is:"<<mid<<endl;
            return;
        }
    }
    cout<<"-1";
}
