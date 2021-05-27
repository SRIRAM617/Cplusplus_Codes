

#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter two numbers"<<endl;
    cin>>m>>n;
    while(m!=n)
    {
    if(m>n)
    {
        m=m-n;
    }
    else if(n>m)
    {
        n=m-n;
    }
    }
    
    cout<<endl<<"GCD is "<<m<<endl;
}
