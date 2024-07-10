#include <iostream>
#include <list>

int main() {
    // Create a list
    std::list<int> myList;

    // Insert elements at the end
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Insert elements at the front
    myList.push_front(5);
    myList.push_front(1);

    // Display elements
    std::cout << "List after push_back and push_front: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Insert element at a specific position
    auto it = myList.begin();
    std::advance(it, 2);
    myList.insert(it, 15);

    std::cout << "List after insert: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Erase element at a specific position
    it = myList.begin();
    std::advance(it, 3);
    myList.erase(it);

    std::cout << "List after erase: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Remove elements by value
    myList.remove(10);

    std::cout << "List after remove: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Remove elements based on a condition
    myList.remove_if([](int n) { return n < 10; });

    std::cout << "List after remove_if: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Sorting the list
    myList.sort();

    std::cout << "List after sort: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Reversing the list
    myList.reverse();

    std::cout << "List after reverse: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Merging two lists
    std::list<int> otherList = {40, 50, 60};
    myList.merge(otherList);

    std::cout << "List after merge: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Clearing the list
    myList.clear();
    std::cout << "List after clear: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Checking if the list is empty
    if (myList.empty()) {
        std::cout << "List is empty." << std::endl;
    }

    // Adding elements again
    myList.push_back(100);
    myList.push_back(200);

    // Accessing front and back elements
    std::cout << "Front element: " << myList.front() << std::endl;
    std::cout << "Back element: " << myList.back() << std::endl;

    return 0;
}

