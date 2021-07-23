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
    void setI(int i)
    {
        this->i=i;
    }
    void setR(int r)
    {
        this->r=r;
    }
    int getI()
    {
        return i;
    }
    int getR()
    {
        return r;
    }
    Complex(int r=0,int i=0)
    {
        setI(i);
        setR(r);
    }
    friend ostream & operator<<(ostream & out,Complex & c);
};
ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.r<<"+i"<<c.i;
    //return 0;
}

int main()
{
    Complex c1(3,5);
    cout<<c1;
    
    
    
    

    
}
