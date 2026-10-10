#include <iostream>
#include "pointer.h"

using namespace std;

int main() {
    int arrayA[BARIS][KOLOM] = {
        {3, 1, 5},
        {0, 9, 7},
        {4, 5, 8}
    };

    int arrayB[BARIS][KOLOM] = {
        {12, 20, 40},
        {50, 30, 20},
        {60, 20, 10}
    };

    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    cout << "=== ISI ARRAY A ===" << endl;
    tampilkanArray2D(arrayA);

    cout << "\n=== ISI ARRAY B ===" << endl;
    tampilkanArray2D(arrayB);

    int b = 1, k = 1;
    cout << "\n--- Menukarkan elemen pada posisi [" << b << "][" << k << "] ---\n" << endl;
    tukarElemenArray2D(arrayA, arrayB, b, k);

    cout << "=== ISI ARRAY A SETELAH DITUKAR ===" << endl;
    tampilkanArray2D(arrayA);

    cout << "\n=== ISI ARRAY B SETELAH DITUKAR ===" << endl;
    tampilkanArray2D(arrayB);

    int val1 = 100, val2 = 200;
    ptr1 = &val1;
    ptr2 = &val2;

    cout << "\n=== DEMO PENUKARAN DENGAN 2 POINTER ===" << endl;
    cout << "Sebelum ditukar: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Setelah ditukar : *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    return 0;
}