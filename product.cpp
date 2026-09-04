#include<iostream>
using namespace std;
class Product
{
    int product_id,unit_price,quantity;
    string product_name;

public : 
    void input()
    {
        cout<<"Enter product ID : ";
        cin>>product_id;
        cout<<"Enter product name : ";
        cin>>product_name;
        cout<<"Enter Product quantity : ";
        cin>>quantity;
        cout<<"Enter unit price : ";
        cin>>unit_price;

    }
    int cal_totalCost()
    {
        return quantity*unit_price;        
    }
    void display()
    {
        cout<<"product ID : "<<product_id<<endl;
        cout<<"Product name : "<<product_name<<endl;
        cout<<"Product quantity : "<<quantity<<endl;
        cout<<"Total Cost of "<<quantity<<" products"<<cal_totalCost();
    }

};
int main()
{
    Product p1;
    p1.input();
    p1.display();
    return 0 ;
}
