#include<iostream>
using namespace std;
class Complex
{
    int real,imag;

public:
    Complex()
    {
        cout<<"enter complex no : ";
        cin>>real>>imag;
    }
    void add(Complex &c)
    {
        cout<<"Addition : "<<real+c.real<<" + "<<imag+c.imag<<" i "<<endl;
    }
    void substract(Complex &c)
    {
        cout<<"Subtraction : "<<real-c.real<<" - "<<imag-c.imag<<" i ";
    }
};
int main()
{
    Complex c1,c2;
    c1.add(c2);
    c1.substract(c2);
    return 0;

}