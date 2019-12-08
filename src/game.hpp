#ifndef GAME_HPP
#define GAME_HPP

#include <random>
#include <chrono>

class Game {
    public:

        int target;
        int last;

        Game() {
            unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
            std::default_random_engine random_engine(seed);
            std::uniform_int_distribution<int> distribution(1, 100);

            target = distribution(random_engine);
        }

        bool hit(int n);
};

#endif