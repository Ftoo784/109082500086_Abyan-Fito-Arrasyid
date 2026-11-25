#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    Queue Q;

    // Alternatif 1
    cout << "=== Alternatif 1 ===" << endl;
    createQueue(Q);
    printInfo(Q);
    enqueue1(Q, 5); printInfo(Q);
    enqueue1(Q, 2); printInfo(Q);
    enqueue1(Q, 7); printInfo(Q);
    dequeue1(Q);    printInfo(Q);
    enqueue1(Q, 4); printInfo(Q);
    dequeue1(Q);    printInfo(Q);
    dequeue1(Q);    printInfo(Q);
    cout << endl;

    // Alternatif 2
    cout << "=== Alternatif 2 ===" << endl;
    createQueue(Q);
    printInfo(Q);
    enqueue2(Q, 5); printInfo(Q);
    enqueue2(Q, 2); printInfo(Q);
    enqueue2(Q, 7); printInfo(Q);
    dequeue2(Q);    printInfo(Q);
    enqueue2(Q, 4); printInfo(Q);
    dequeue2(Q);    printInfo(Q);
    dequeue2(Q);    printInfo(Q);
    cout << endl;

    // Alternatif 3
    cout << "=== Alternatif 3 ===" << endl;
    createQueue(Q);
    printInfo(Q);
    enqueue3(Q, 5); printInfo(Q);
    enqueue3(Q, 2); printInfo(Q);
    enqueue3(Q, 7); printInfo(Q);
    dequeue3(Q);    printInfo(Q);
    enqueue3(Q, 4); printInfo(Q);
    dequeue3(Q);    printInfo(Q);
    dequeue3(Q);    printInfo(Q);

    return 0;
}