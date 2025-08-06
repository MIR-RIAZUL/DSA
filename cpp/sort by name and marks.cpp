#include<iostream>

using namespace std;

int main()
{



    int n;
    cout<<"enter the name number:"<<endl;
    cin>>n;

    string name[n];
    int marks[n];

    cout<<"enter the name and marks:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>name[i]>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if( marks[i]<marks[j])
           {
               swap(marks[i],marks[j]);
               swap(name[i],name[j]);
           }
           else if(marks[i]==marks[j] && name[i]>name[j])
           {
               swap(name[i],name[j]);
           }
        }
    }

    cout<<"after sorting"<<endl;
       for (int i = 0; i < n; i++) {
        cout << name[i] << " " << marks[i] << endl;
    }

    return 0;

}
