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
        if(arr[i]>0)
        {
            arr[i]=1;

        }
        else if(arr[i]<0)
        {
            arr[i]=2;
        }

    }
     for(int i=0;i<num_of_input;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}