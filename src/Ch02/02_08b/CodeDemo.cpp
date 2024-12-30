// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 
// Modified by Emon Sarkar

#include <iostream>
#include <cstdint>

// enum asset_type {texture, sound, animation, script};
// enum menu_section {background, music, sound, cotrols, texture};
// It is better to use Enum Class:
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, cotrols, texture};

int main(){
    int sound = 8;
    
    // int asset_value; for this we need to >> asset_value = (int) sound;
    // But the solution appropriate is more appropriate where
    // asset_value is declared as asset_type variable
    asset_type asset_value;
    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;
    std::cout<< "Local Variable Sound's Value: "  << sound << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
