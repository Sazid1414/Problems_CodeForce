#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int num_of_digit,number,modulo;
    cin>>num_of_digit>>number;
    int sum=0;
    for(int i=0;i<num_of_digit;i++)
    {
        modulo=number%10;
        number=number/10;
        sum=sum+modulo;

    }
    cout<<sum;
    return 0;
    //error on test 2

}