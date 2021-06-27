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
    
    int vcount=0,ccount=0,scount=0;
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        
        
        if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u')
        
            vcount++;
        
        else if(*it==' ')
        scount++;
        else
        ccount++;
    }
    cout<<"The no.of vowels are "<<vcount<<endl;
     cout<<"The no.of consonants are "<<ccount<<endl;
     cout<<"The no.of spaces are "<<scount<<endl;

    return 0;
}
