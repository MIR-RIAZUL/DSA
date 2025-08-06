
#include <iostream>
using namespace std;

void bubblesort(int arr[],int a);

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
    cout<<"the array is:"<<endl;
    cout<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,a);


}

void bubblesort(int arr[],int a)
{
    for(int i=0; i<a-1; i++)
    {
      for(int j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }

        }
    }

    cout<<"after bubble sort:"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }

}
