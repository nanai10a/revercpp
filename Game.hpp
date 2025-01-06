#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <cstddef>

#include "Player.hpp"
#include "Master.hpp"
#include "Board.hpp"

class Game {
    private:
        Player *players[2];
        size_t playersLength = 2;
        size_t playersCapacity = 2;

        Master *master;
        Board *board;

    public:
        Game *appendPlayer(Player *player);

        Game *setMaster(Master *master);
        Game *setBoard(Board *board);

        bool start();
};

#endif // _GAME_HPP_
