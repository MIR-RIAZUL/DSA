#include<iostream>
using namespace std;
void selectionSort(int arr[],int a);

int main()
{

    int a;
    cout<<"enter the array size"<<endl;
    cin>>a;
    int arr[a];



    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    cout<<"fuck you:"<<endl;
    cout<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,a);
}

void selectionSort(int arr[],int a)
{
    for(int i=0;i<a;i++)
    {
        int minn=i;
        for(int j=i+1;j<a;j++)
        {
            if(arr[minn]>arr[j])
            {
            minn=j;
            }
        }
        swap(arr[i],arr[minn]);
    }
    cout<<endl;
    cout<<"Matherchod"<<endl;

     for(int i=0;i<a;i++)
    {
    cout<<arr[i]<<" ";
    }

}
