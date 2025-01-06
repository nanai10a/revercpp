#include "Game.hpp"

Game *Game::appendPlayer(Player *player) {
    if (this->playersCapacity > this->playersLength) {
        players[this->playersLength++] = player;
    }

    return this;
}

Game *Game::setMaster(Master *master) {
    this->master = master;

    return this;
}

Game *Game::setBoard(Board *board) {
    this->board = board;

    return this;
}

bool Game::start() {
    if (this->playersLength != this->playersCapacity) {
        return false;
    }

    this->board->init();

    for (size_t i = 0; i < this->playersLength; i = (i + 1) % this->playersLength) {
        if (!board->isContinuable()) {
            return true;
        }

        if (!board->isPlacableBy(this->players[i])) {
            continue;
        }

        this->players[i]->placePiece(this->board);
        this->master->flip(this->board);
    }

    return false;
}
