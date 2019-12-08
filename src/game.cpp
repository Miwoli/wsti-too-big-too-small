#include <random>
#include "game.hpp"

bool Game::hit(int n) {
    if (n == target) {
        return true;
    } else {
        last = n;
        return false;
    }
}