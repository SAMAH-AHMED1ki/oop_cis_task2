#include <cstdio>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>
class type {
private:
    string a;
public:
    type(string a_) : a(a_) {
       
        cout << a;
    }
    ~type() {
        cout << a;
    }
};
class LuckyNum {
private:
    type a;
    type b;
    type c;
public:
    LuckyNum(type a,type b, type c) : b(b), a(a),c(c) {
        
    }
};

int main()

{
    string x = "first";
    string y = "second";
    string z = "third";
    LuckyNum s(x, y, z);
}
// constructor بيهيئ حسب ترتيب المتغيرات ف الكلاس وليس حسب ترتيبهم ف ال intializer list
// destructor بيدمرهم بترتيب العكس 
