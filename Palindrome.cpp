

#include <iostream>

using namespace std;

int main()
{
    int number,reverse=0,r,exactNumber;
    cout<<"Enter a number";
    cin>>number;
    exactNumber=number;
    while(number>0)
    {
       r=number%10;
       number=number/10;
       reverse=(reverse*10)+r;
    }
    if(reverse==exactNumber)
    {
        cout<<"Palindrome";
    }
    else
    cout<<"Not a Palindrome";
}
