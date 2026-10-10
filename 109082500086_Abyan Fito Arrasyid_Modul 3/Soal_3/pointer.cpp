#include <iostream>
#include "pointer.h"

using namespace std;

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void tampilkanArray2D(int arr[BARIS][KOLOM]) {
    for (int i = 0; i < BARIS; i++) {
        for (int j = 0; j < KOLOM; j++) {
            cout << "Elemen [" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
}

void tukarElemenArray2D(int arr1[BARIS][KOLOM], int arr2[BARIS][KOLOM], int r, int c) {
    tukarPointer(&arr1[r][c], &arr2[r][c]);
}