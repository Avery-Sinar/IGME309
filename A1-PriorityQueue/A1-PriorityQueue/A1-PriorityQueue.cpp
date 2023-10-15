// A1-PriorityQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm> // for std::sort
#include <vector>

template <typename T>

class PriorityQueue {

private:
    std::vector<T> data;

public:
    // Default constructor
    PriorityQueue() {}

    // Copy constructor
    PriorityQueue(const PriorityQueue& other) : data(other.data) {}

    // Copy assignment operator
    PriorityQueue& operator=(const PriorityQueue& other) {
        if (this != &other) {
            data = other.data;
        }
        return *this;
    }

    // Destructor
    ~PriorityQueue() {}

    // Push method to add an element to the queue
    void Push(const T& value) {
        data.push_back(value);
        std::sort(data.begin(), data.end()); // Sort the data after insertion
    }

    // Pop method to remove the front element from the queue
    void Pop() {
        if (!data.empty()) {
            data.erase(data.begin());
        }
    }

    // Print method to display the contents of the queue
    void Print() const {
        for (const auto& element : data) {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }

    // GetSize method to return the number of entries in the queue
    int GetSize() const {
        return static_cast<int>(data.size());
    }

    // IsEmpty method to check if the queue is empty
    bool IsEmpty() const {
        return data.empty();
    }
};

int main() {
    // Example usage
    PriorityQueue<int> intQueue;

    intQueue.Push(5);
    intQueue.Push(2);
    intQueue.Push(7);
    intQueue.Push(1);

    std::cout << "Queue contents: ";
    intQueue.Print();

    std::cout << "Queue size: " << intQueue.GetSize() << "\n";
    std::cout << "Is queue empty? " << (intQueue.IsEmpty() ? "Yes" : "No") << "\n";

    intQueue.Pop();
    std::cout << "After pop operation: ";
    intQueue.Print();

    return 0;
}