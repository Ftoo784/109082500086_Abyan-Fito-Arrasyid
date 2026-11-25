#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

typedef int infotype;

struct Queue {
    infotype info[5];
    int head;
    int tail;
};

void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
void printInfo(Queue Q);

// Alternatif 1 (Head diam, Tail bergerak)
bool isFullQueue1(Queue Q);
void enqueue1(Queue &Q, infotype x);
infotype dequeue1(Queue &Q);

// Alternatif 2 (Head bergerak, Tail bergerak)
bool isFullQueue2(Queue Q);
void enqueue2(Queue &Q, infotype x);
infotype dequeue2(Queue &Q);

// Alternatif 3 (Head dan Tail berputar)
bool isFullQueue3(Queue Q);
void enqueue3(Queue &Q, infotype x);
infotype dequeue3(Queue &Q);

#endif