#include "Game.hpp"

int main() {
    // 初期化処理

    bool isCompleted = Game().appendPlayer(&player1)
        .appendPlayer(&player2)
        .setMaster(&master)
        .setBoard(&board)
        .start();

    if (!isCompleted) {
        // エラー処理
    }

    Board::Stats stats = board->stats();

    // 良い感じに表示

    return 0;
}
