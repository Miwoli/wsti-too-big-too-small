#include <iostream>
#include "game.hpp"

int main(int argc, char** argv) {
    std::cout << "Too big, too small" << std::endl;

    Game shoot_game;

    std::cout << "Type in the number you want to shoot at" << std::endl;

    int shoot;
    std::cin >> shoot;

    while (!shoot_game.hit(shoot)) {
        if (shoot_game.last > shoot_game.target) {
            std::cout << "Your number is too big" << std::endl;
        } else {
            std::cout << "Your number is too small" << std::endl;
        }
        std::cin >> shoot;
    }

    std::cout << "Bullseye!";

    std::getchar();
    return 0;
}