
#include <iostream>
using namespace std;

int main() {
  int n,r,prod=1,sum=0,number,exactN;
  cout<<"Enter a number"<<endl;
  cin>>n;
  exactN=n;
  while(n>0)
  {
      r=n%10;
      number=r;
      cout<<r<<endl;
      prod=number*number*number;
      sum+=prod;
     
      n=n/10;
      
  }
  if(sum==exactN)
  {
      cout<<"Armstrong number";
  }
  else{
      cout<<"Not a Armstrong number";
  }

    return 0;
}
