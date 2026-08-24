#include <bits/stdc++.h>
using namespace std;

class MyVector {
private:
    int* arr;
    int len = 100;

public:
    MyVector(int len, int default_value = 0) {
        this->len = len;
        this->arr = new int[len];

        for (int i = 0; i < len; ++i) {
            this->arr[i] = default_value;
        }
    }

    ~MyVector() {
        delete[] this->arr;
    }

    int get(int pos) {
        return this->arr[pos];
    }

    int& GetLen() {
        return len;
    }
};
// PROBLEM: returning 'len' by reference lets outside code change it directly.
// This breaks private/encapsulation, since len should only change inside the class.
// Also, changing len does not resize arr, so they no longer match -> crash.
int main() {
    MyVector v1(100);
   
    int&ptr = v1.GetLen();
    ptr = 100;
    cout << v1.GetLen();


}
