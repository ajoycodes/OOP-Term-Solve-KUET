#include <iostream>
#include<cmath>
#include <fstream>
using namespace std;

class Product{
    public:
        int product_id;
        string product_name;
        double product_price;
    Product():product_id(0), product_name(""), product_price(0){};
    Product(int i, string n, double p): product_id(i), product_name(n), product_price(p){};

    friend ostream& operator<< (ostream& out, Product& p){
        out<< "Product ID: "<< p.product_id << "Product_name: "<< p.product_name << "Product Price: "<< p.product_price << endl;
        return out;
    }
    friend istream& operator>> (istream& in, Product& p){
        in>>p.product_id>>p.product_name >>p.product_price;
        return in;
    }
    
};

int main (){

    ifstream in("input.txt");
    ofstream out("output.txt");

    if(!in){
        cout<<"Input file error"<< endl;
    }
    if(!out){
        cout<<"Output file error"<< endl;
    }

    Product P;
    

    in>>P;
    out<< P;

    return 0;
}

unique_ptr <int> ptr = make_unique<int>(5);
shared_ptr <int> ptr2 (new int(5));
shared_ptr <int> ptr3 = (ptr2);