
#include <iostream>
using namespace std;

int main() {
   
    int n,i,count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for( i=1;i<=n;i++){
       if(n%i==0)
       {
           cout<<"The factors are "<<i<<endl;
           count++;
         
           
       }
      
       
          }
           if(count==2)
       {
           cout<<n<<" is prime number";
       }
       else if(count==1){
           cout<<n<<" is a natural number";
       }
       else
       cout<<n<<" is not a prime number";
           
    

    return 0;
}
