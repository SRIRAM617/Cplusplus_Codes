/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,A[10],sum=0,max;
   cout<<"enter total elements of an integer array"<<endl;
   cin>>n;
   cout<<"Enter n elements of the array"<<endl;
   for(int i=0;i<n;i++){
       cin>>A[i];
       }
       max=A[0];
       for(int i=1;i<n;i++)
       {
           if(max<A[i])
           {
               max=A[i];
           }
          
           
       }
   cout<<endl<<"Max is "<<max;
   

    return 0;
}
