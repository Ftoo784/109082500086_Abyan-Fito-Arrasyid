#include "queue.h"

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1 && Q.tail == -1;
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t | ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
    } else {
        int i = Q.head;
        while (true) {
            cout << Q.info[i] << " ";
            if (i == Q.tail) break;
            i = (i + 1) % 5;
        }
        cout << endl;
    }
}

// ================= ALTERNATIF 1 =================
bool isFullQueue1(Queue Q) {
    return Q.tail == 4;
}

void enqueue1(Queue &Q, infotype x) {
    if (isFullQueue1(Q)) {
        cout << "Queue penuh!" << endl;
    } else if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
        Q.info[0] = x;
    } else {
        Q.tail++;
        Q.info[Q.tail] = x;
    }
}

infotype dequeue1(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {
        createQueue(Q);
    } else {
        for (int i = Q.head; i < Q.tail; i++) {
            Q.info[i] = Q.info[i + 1];
        }
        Q.tail--;
    }
    return x;
}

// ================= ALTERNATIF 2 =================
bool isFullQueue2(Queue Q) {
    return Q.head == 0 && Q.tail == 4;
}

void enqueue2(Queue &Q, infotype x) {
    if (isFullQueue2(Q)) {
        cout << "Queue penuh!" << endl;
    } else if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
        Q.info[0] = x;
    } else {
        if (Q.tail == 4) {
            for (int i = Q.head; i <= Q.tail; i++) {
                Q.info[i - Q.head] = Q.info[i];
            }
            Q.tail = Q.tail - Q.head;
            Q.head = 0;
        }
        Q.tail++;
        Q.info[Q.tail] = x;
    }
}

infotype dequeue2(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {
        createQueue(Q);
    } else {
        Q.head++;
    }
    return x;
}

// ================= ALTERNATIF 3 =================
bool isFullQueue3(Queue Q) {
    return (Q.tail + 1) % 5 == Q.head;
}

void enqueue3(Queue &Q, infotype x) {
    if (isFullQueue3(Q)) {
        cout << "Queue penuh!" << endl;
    } else if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
        Q.info[0] = x;
    } else {
        Q.tail = (Q.tail + 1) % 5;
        Q.info[Q.tail] = x;
    }
}

infotype dequeue3(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {
        createQueue(Q);
    } else {
        Q.head = (Q.head + 1) % 5;
    }
    return x;
}