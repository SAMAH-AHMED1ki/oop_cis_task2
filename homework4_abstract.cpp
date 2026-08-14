#include <vector>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>
#include<fstream>
class invoice {
private:
    string name;
    int item_Num;
    double price;
    int qantity;
public:
    void setName(string _name) {
        name = _name;
    }
    string getName() {
        return name;
    }
    int getitem_num() {
        return item_Num;
    }
    void setprice(double _price) {
        price = _price;
    }
    double getprice() {
        return price;
    }
    void setqantity(int _qantity) {
        qantity = _qantity;
    }
    int getqantity() {
        return qantity;
    }
    double gettotalprice() {
       int a= getqantity();
       double b = getprice();
        double total = b * a;
        return total;
    }
    
    void print() {
        cout << "Name:"<< getName() << endl << "Item_num:" << getitem_num() <<endl<<"total:"<< gettotalprice() << endl;
    }
    string ToString() {
        string d = to_string(getitem_num());
        string e = to_string(getprice());
        string f = to_string(getqantity());
        return getName() + "," + d + "," + e + ","+ f;
        
    }
};

int main()
{
       
}
