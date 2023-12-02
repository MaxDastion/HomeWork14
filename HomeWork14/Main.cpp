#include <iostream>
#include <string>


using namespace std;

class Tiles {
public:
    string brand;
    int size_h;
    int size_w;
    float price;

    void getData() {
        
        cout << "Brand: " << brand << endl;
        cout << "Size: " << size_h << "x" << size_w << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};

void main() {
    Tiles t1, t2;
    t1.brand = "Sony";
    t1.size_h = 10;
    t1.size_w = 5;
    t1.price = 15.99;

    t2.brand = "Xbox";
    t2.size_h = 8;
    t2.size_w = 4;
    t2.price = 12.99;

    t1.getData();
    t2.getData();

}