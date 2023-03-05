#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_of_input;
    cin>>num_of_input;
    int arr[num_of_input];
    for(int i=0;i<num_of_input;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<num_of_input;i++)
    {
        for(int j=0;j<num_of_input-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<num_of_input;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


}