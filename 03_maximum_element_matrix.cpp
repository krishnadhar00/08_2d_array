#include<iostream>
using namespace std;
int main()
{
    int arr1[2][3] = {{1,5,9},{7,50,6}};
    int max=arr1[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(max<arr1[i][j])
            {
                max=arr1[i][j];
            }
        }
    }
    cout<<max<<" ";
}