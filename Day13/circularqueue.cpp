#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, capacity;
public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = rear = -1;
    }

    ~CircularQueue() {
        delete [] arr;
    }

    // Function to check if queue is full
    bool isFull() {
        return (front == 0 && rear == capacity - 1) || (rear == front - 1);
    }

    // Function to check if queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to add an element to the queue
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = item;
        cout << item << " enqueued to queue" << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int item = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        return item;
    }

    // Function to get the front element of the queue
    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Function to get the rear element of the queue
    int rearElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;

    cout << q.dequeue() << " dequeued from queue" << endl;

    q.enqueue(6);

    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;

    return 0;
}
