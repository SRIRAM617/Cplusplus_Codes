#include <iostream>

using namespace std;

int main()
{
   int n,A[10],neg=0,pos=0;
   cout<<"enter total elements of an integer array"<<endl;
   cin>>n;
   cout<<"Enter n elements of the array"<<endl;
   for(int i=0;i<n;i++){
       cin>>A[i];
       }
       
       for(int i=0;i<n;i++)
       {
           if(A[i]<0)
           {
               neg++;
           }
           else if(A[i]>=0)
           {
               pos++;
           }
          
           
       }
   cout<<endl<<"Total Positives Numbers are "<<pos;
   cout<<endl<<"Total Negative numbers are "<<neg;

    return 0;
}
