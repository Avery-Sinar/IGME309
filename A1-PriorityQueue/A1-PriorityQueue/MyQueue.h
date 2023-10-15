#ifndef MY_QUEUE_H
#define MY_QUEUE_H

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
class MyQueue {
private:
    std::vector<T> data;

public:
    //Normal Constructor
    MyQueue() {}

    //Copy Constructor
    MyQueue(const MyQueue& other) {
        data = other.data;
    }

    //Assignment constructor
    MyQueue& operator=(const MyQueue& other);

    ~MyQueue();

    void Push(const T& value);
    void Pop();
    void Print() const;
    int GetSize() const;
    bool IsEmpty() const;
};

#endif // MY_QUEUE_H