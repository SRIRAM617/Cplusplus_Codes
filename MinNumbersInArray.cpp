#include <iostream>

using namespace std;

int main()
{
   int n,A[10],sum=0,min;
   cout<<"enter total elements of an integer array"<<endl;
   cin>>n;
   cout<<"Enter n elements of the array"<<endl;
   for(int i=0;i<n;i++){
       cin>>A[i];
       }
       min=A[0];
       for(int i=0;i<n;i++)
       {
           if(min>A[i])
           {
               min=A[i];
           }
          
           
       }
   cout<<endl<<"Min is "<<min;
   

    return 0;
}
