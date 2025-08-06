
#include<iostream>
using namespace std;

int squre(int n);

int main()
{
    cout<<"enter the value"<<endl;

    int n;

    cin>>n;

    int result=squre(n);
    cout<<"the squre of "<<n<<" is "<<result<<endl;

}

int squre(int n)
{
    int low=0;
    int high=n;

    while(low<=high)
    {
        int mid=(low+high)/2;

        int Squre= mid*mid;

        if(Squre==n)
        {
            return mid;
        }
        else if(Squre<n)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
