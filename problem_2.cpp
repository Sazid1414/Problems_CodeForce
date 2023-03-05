#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_of_input,num;
     cin>>num_of_input;
    int arr[num_of_input];
   
    for(int i=0;i<num_of_input;i++)
    {
        cin>>arr[i];

    }
    cin>>num;
    bool f=0;
    for(int i=0;i<num_of_input;i++)
    {
        if(arr[i]==num)
        {
            cout<<i;
            f=1;
            break ;
        }
        
        
    }
    if(f==0)
    {
        cout<<"-1"<<endl;
    }
    
    return 0;
}