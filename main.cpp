#include "board.hpp"
#include "player.hpp"
#include <iostream>
using namespace std;

int main() {
    Board board;
    HumanPlayer white(WHITE);
    HumanPlayer black(BLACK);

    while (true) {
        board.print();

        if (board.isCheckmate(board.turn)) {
            cout << ((board.turn == WHITE) ? "Black" : "White") << " wins! Checkmate.\n";
            break;
        }
        if (board.isStalemate(board.turn)) {
            cout << "Game drawn by stalemate.\n";
            break;
        }
        if (board.turn == WHITE)
            white.makeMove(board);
        else
            black.makeMove(board);
        if (board.isKingInCheck(board.turn)) {
        cout << "Check!" << endl;
        }
    }
    return 0;
}
