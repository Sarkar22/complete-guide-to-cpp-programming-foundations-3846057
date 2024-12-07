// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // These are global variables
// Global variable memories are statically managed by the compiler
// They are allocated in the data segment of the memory
// Once the prgogram ends, their memory is freed

// Local varibles are only available inside the scope
// After execution they are deleted
// Called Automatic Variables, managed by the compilers
// Allocated in the stack segment of the memory

int main(){

    bool my_flag;
    std::cout << "My flag is " << my_flag << std:: endl;
    my_flag =false;
    std::cout << "My flag is " << my_flag << std:: endl;
    my_flag =true;
    std::cout << "My flag is " << my_flag << std:: endl;

    a = 100;
    std::cout << "a: " << a << std:: endl;
    std::cout << "b: " << b << std:: endl;

    std::cout << "a+b: " << a+b << std:: endl;
    std::cout << "a-b: " << a-b << std:: endl;
    std::cout << "b-a: " << b-a << std:: endl;

    unsigned int positive;
    positive = b-a;
    std::cout << "positive (b-a >> unsigned): " << positive << std:: endl;

    std::cout << std::endl << std::endl;
    return 0;
}
