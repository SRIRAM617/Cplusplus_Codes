/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>


using namespace std;

int main()
{
     string str;
    
   
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    int len=str.length();
    string rev="";
    rev.resize(len);
    
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[j]=str[i];
    }
    rev[len]='\0';
    cout<<rev;
    if(str.compare(rev)==0)
    {
        cout<<endl<<"Palindrome"<<endl;
    }
    else
    cout<<endl<<"Not a Palindrome"<<endl;

    return 0;
}
