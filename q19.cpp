/* network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1 , num2 , j;
    bool f = true;
    cout<<"enter number 1";
    cin>>num1;
    cout<<"enter number 2";
    cin>>num2;
    for(int i = num1;i<=num2;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f = false;
                break;
            }
        }
        if(f == true)
            cout<<"\nPRIME "<<i;
        else
            cout<<"\nNOT PRIME "<<i;
    }

}