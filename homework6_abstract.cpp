#include <cstdio>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>

class LuckyNum {
public:
    void printaddress() {
        printf("function address :%p\n", &LuckyNum::printaddress);
    }
};

int main()

{
    LuckyNum a;
    LuckyNum b;
    a.printaddress();
    b.printaddress();
}
//member function share the same address among all objects
