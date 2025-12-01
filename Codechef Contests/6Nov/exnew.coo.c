#include <iostream>
#include <new>  // For std::bad_alloc

int main() {
    try {
        // Attempt to allocate a large amount of memory
        int* array = new int[1000000000000];  // This may fail if too large
        std::cout << "Memory allocation succeeded." << std::endl;

        // Use the allocated memory here...

        delete[] array;  // Remember to deallocate if allocation succeeded
    }
    catch (const std::bad_alloc& e) {
        // Handle the memory allocation failure
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }

    return 0;
}

