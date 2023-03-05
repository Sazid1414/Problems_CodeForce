#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input_number;
    double inputs;
    cin>>input_number;
    long long arr [input_number],sum=0;
    for(int i=0;i<input_number;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<abs(sum);
    return 0;
}
