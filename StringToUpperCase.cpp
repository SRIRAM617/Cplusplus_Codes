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
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        *it=*it-32;
    }
    cout<<str;

    return 0;
}
//use *it=*it+32 for converting string into lower case.
