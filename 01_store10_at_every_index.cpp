#include<iostream>
using namespace std;
int main()
{
    int arr1[2][3]={{1,2,3},{4,5,6}}; // way to initialize the array.
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            arr[i][j]=10;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}