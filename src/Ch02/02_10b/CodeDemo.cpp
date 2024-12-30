// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 
// Modifiled by Emon Sarkar

#include <iostream>
#include <cstdint>

int main(){
    
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; // This will be a Double
    sprite_x = target_x; // Implicit Conversion, it will be -123
    player_x = sprite_x; // 32-bit version of 2's complement of -123 [Calcualted as (2^32) - 123)]
    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t): " << player_x << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    // Explicit Casting:
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
