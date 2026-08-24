#include <bits/stdc++.h>
using namespace std;

class MyVector {
private:
    int* arr;
    int len = 100;

public:
    MyVector(const MyVector& v1 ) {
        this->len = v1.len;
        this->arr = new int[len];
        for (int i = 0; i < len; ++i) {
            this->arr[i] = v1.arr[i];

        }
    }
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
    void  set(int index , int new_item){
        if (index >= len || index < 0) return;
        arr[index] = new_item;
        
        }
    int get(int pos) {
        if (pos >= this->len  || pos <0)
        return 0;
        return this->arr[pos];
    }
    int getlen() {

        return len;
    }
};
int main() {
    int max = 100;
    int array[max];
    MyVector v1(max);
    MyVector v2 = v1;


}
