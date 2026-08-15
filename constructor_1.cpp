#include <cstdio>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>

class LuckyNum {
private:
    int a;
    int b;
    int c;
public:
    LuckyNum(int a,int b,int c): b(b) , a(a) , c(c)
    {
        cout << a << b << c;
    }
};

int main()

{
    LuckyNum s(2,4,6);
    
}
// he will use class order
