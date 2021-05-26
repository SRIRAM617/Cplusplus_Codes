
#include <iostream>
using namespace std;

int main() {
   
    int n,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
       if(n%i==0&&i!=n)
       {
           cout<<"The factors are "<<i<<endl;
          
           sum+=i;
       }
          }
           if(sum==n)
           {
               cout<<n<<" is perfect number";
           }
           else
           
           cout<<n<<" is not a perfect number";
    

    return 0;
}
