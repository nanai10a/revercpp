#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

class Board;

class Player {
    public:
        virtual void placePiece(Board *board) = 0;
};

#endif // _PLAYER_HPP_
