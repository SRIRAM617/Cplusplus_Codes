/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Complex
{
    private:
    int i;
    int r;
    public:
    void setImg(int i)
    {
        this->i=i;
    }
    void setRel(int r)
    {
        this->r=r;
    }
    Complex(int r=0,int i=0)
    {
        setRel(r);
        setImg(i);
    }
    Complex operator+(Complex c3)
    {
        Complex temp;
        temp.r=r+c3.r;
        temp.i=i+c3.i;
        return temp;
    }
    int getRel()
    {
       return r;
    }
    int getImg()
    {
       return i;
    }
};

int main()
{
    
  Complex c1(4,5),c2(5,5),result;
  result=c1+c2;
  cout<<result.getRel()<<"+i"<<result.getImg()<<endl;
  
  
    return 0;
}
