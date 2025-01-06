#ifndef _BOARD_HPP_
#define _BOARD_HPP_

#include "Position.hpp"

class Player;

class Board {
    protected:
        size_t size = 8;

    public:
        virtual void init() = 0;

        virtual bool isContinuable() = 0;
        virtual bool isPlacableBy(Player *player) = 0;

        virtual bool place(Position position, Player *placedBy) = 0;
        virtual bool flip(Position position, Player *flippedBy) = 0;

        struct Stats {
            // どうしよ
        };

        virtual Stats stats() = 0;
};

#endif // _BOARD_HPP_
