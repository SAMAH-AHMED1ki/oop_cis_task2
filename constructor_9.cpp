class A {
private:
    int *x;                        // just a pointer to int (declaration only)

public:
    A() {
        cout << "A constructor\n";
        x = new int;                // NOW x points to heap memory — LEAK #1 source
        *x = 10;                    // dereference pointer, store 10 in that heap memory
    }
     ~A() {
        cout << "A destructor\n";
        delete x;                   // FIX for leak #1: free the heap int allocated in constructor
    }
};

int main() {
    A *a = new A();                 // LEAK #2 source: object itself allocated on heap
                                     // 'a' is just a pointer (on stack), object is on heap

    delete a;                       // FIX for leak #2: frees the heap object
                                     // this call also triggers ~A() automatically,
                                     // which is what runs "delete x" above

    return 0;
}
