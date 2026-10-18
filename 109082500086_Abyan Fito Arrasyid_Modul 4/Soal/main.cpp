#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    
    CreateList(L);
    
    P1 = alokasi(10);
    insertFirst(L, P1);
    
    P2 = alokasi(91);
    insertFirst(L, P2);
    
    P3 = alokasi(69);
    insertFirst(L, P3);
    
    P4 = alokasi(67);
    insertFirst(L, P4);
    
    P5 = alokasi(80);
    insertFirst(L, P5);
    
    printInfo(L);
    
    return 0;
}