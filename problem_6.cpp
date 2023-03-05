#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_of_inputs;
    cin>>num_of_inputs;
   int arr[num_of_inputs];
    for(int i= 0;i<num_of_inputs;i++)
    {
        cin>>arr[i];

    }
    for(int i=num_of_inputs-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";

    }
    return 0;

}