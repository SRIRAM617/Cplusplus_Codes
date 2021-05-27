/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,A[100],sum=0;
   cout<<"enter total elements of an integer array"<<endl;
   cin>>n;
   cout<<"Enter n elements of the array"<<endl;
   for(int i=0;i<n;i++){
       cin>>A[i];
       sum+=A[i];
   }
   cout<<endl<<"Sum is "<<sum;
   

    return 0;
}
