/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int A[]={6,8,15,17,20,22,25,28,30,55};
   int key,l,m,u;
   cout<<"Enter a key"<<endl;
   cin>>key;
   l=0;
   u=9;
   while(l<=u)
   {
       m=(l+u)/2;
   
   if(key==A[m])
   {
       cout<<"Found at "<<m<<endl;
       return 0;
   }
   else if(key<A[m])
   {
       u=m-1;
   }
   else {
       l=m+1;
   }
   
   
   
   }
   cout<<"Not found";
    return 0;
}
   
  
   

   
