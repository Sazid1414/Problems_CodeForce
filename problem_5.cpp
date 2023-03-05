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
    int low=arr[0] ;
    int pos=1;
     for(int i=0;i<num_of_input-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            low=arr[i+1];
            pos=i+2;
        }
    }
    cout<<low<<" "<<pos;
    return 0;
    //error on test 2;
}