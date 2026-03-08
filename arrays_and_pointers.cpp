#include <iostream>
using namespace std;

int main() {
    // 1. Declare an array
    int nums[5] = {10, 20, 30, 40, 50};

    cout << "=== Array ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "nums[" << i << "] = " << nums[i] << endl;
    }

    // 2. Get the address of a variable
    int x = 100;
    int *ptr = &x;

    cout << "\n=== Address of a Variable ===" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Address of x (&x): " << ptr << endl;
    cout << "Value via pointer (*ptr): " << *ptr << endl;

    // 3. Declare an array of pointers
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int *ptrArr[5] = {&a, &b, &c, &d, &e};

    cout << "\n=== Array of Pointers ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "ptrArr[" << i << "] points to address " << ptrArr[i]
             << " with value " << *ptrArr[i] << endl;
    }

    return 0;
}
