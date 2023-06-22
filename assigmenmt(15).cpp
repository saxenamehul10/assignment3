#include <iostream>

int main() {
    // Dynamic memory allocation using new operator
    int* dynamicInt = new int(5);
    std::cout << "Dynamic Int: " << *dynamicInt << std::endl;

    // Dynamic memory allocation for an array using new operator
    int* dynamicArray = new int[5];
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i + 1;
    }

    std::cout << "Dynamic Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocating the dynamically allocated memory
    delete dynamicInt;
    delete[] dynamicArray;

    return 0;
}
