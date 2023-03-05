#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num_of_input;
    cin>>num_of_input;
    long long int arr[num_of_input];
    for(int i=0;i<num_of_input;i++)
    {
        cin>>arr[i];
    }
   bool ch=0;
   for(int i=0,j=num_of_input-1;i<num_of_input,j>=0;i++,j--)
   {
    if(arr[i]!=arr[j])
    {
        ch=1;
        break;
    }

   }
   if(ch==0)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
   return 0;

    }
