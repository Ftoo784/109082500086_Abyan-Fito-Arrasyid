#ifndef POINTER_H_INCLUDED
#define POINTER_H_INCLUDED

const int BARIS = 3;
const int KOLOM = 3;

void tukarPointer(int *p1, int *p2);
void tampilkanArray2D(int arr[BARIS][KOLOM]);
void tukarElemenArray2D(int arr1[BARIS][KOLOM], int arr2[BARIS][KOLOM], int r, int c);

#endif