#ifndef _MASTER_HPP_
#define _MASTER_HPP_

class Board;

class Master {
    public:
        virtual void flip(Board *board) = 0;
};

#endif // _MASTER_HPP_
