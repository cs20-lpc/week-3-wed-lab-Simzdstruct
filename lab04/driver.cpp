// TO DO: Implement the driver main() function to test your code.
#include <iostream>
#include "LinkedList.hpp"

using namespace std;


int main() {
    cout << "Hello" << endl;
    LinkedList<int> list;
    list.append(100);
    list.append(230);

    cout << "Element at position 0: " << list.getElement(0) << endl;
    cout << "Element at position 1: " << list.getElement(1) << endl;


    cout << "Testing replace function." << endl;
    list.replace(0, 500);
    cout << "Element at position 0 after replace: " << list.getElement(0) << endl;


    cout << "Testing Clear and getters." << endl;
    cout << "position 1 before clear: " << list.getElement(1) << endl;
    list.clear();
    cout << "Length after clear: " << list.getLength() << endl;
    list.append(3000);
    list.append(4000);

    cout << "testing ostream << operator " << endl;
    cout << list;



    return 0;
}