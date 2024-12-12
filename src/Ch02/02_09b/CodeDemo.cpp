// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 
// Modified by Emon Sarkar

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;
};

int main(){

    game_character Player_1;
    Player_1.name = "Mon";
    Player_1.level = 100;
    Player_1.role = character_role::protagonist;

    std::cout<< Player_1.name << " is a level " << Player_1.level << " character with the role  of " << (int) Player_1.role << "." << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
