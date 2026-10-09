#include <iostream>
using namespace std; 
class Complex { 
    private: int real, imag;
    public: 
    
    Complex(int r=0,int i=0):real(r),imag(i){}
    
    Complex add(const Complex &c){
        cout<<real<<"\t"<<c.real;
        return Complex(real+c.real, imag+c.imag);
        } 
        
    void subtract(const Complex &c){ 
        real=real-c.real;
        imag = imag-c.imag;
        cout<<real<<"+"<<imag;
        
        } 
        
    void display() const{ 
        cout<<real<<" + i"<<imag<<endl; 
    } 
    
}; 
int main(){ 
    Complex c1(4,5), c2(8,9); 
    Complex sum=c2.add(c1); 
    c2.subtract(c1); 
    cout<<"\nFirst Complex Number: "; c1.display(); 
    cout<<"Second Complex Number: "; c2.display();
    cout<<"Addition: "; sum.display(); 
    cout<<"Subtraction: "; c2.display(); 
    return 0;
} 