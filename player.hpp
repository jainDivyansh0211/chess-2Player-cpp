#pragma once
#include "board.hpp"

class Player {
public:
    Color color;
    Player(Color c) : color(c) {}
    virtual bool makeMove(Board& board) = 0;
};

class HumanPlayer : public Player {
public:
    HumanPlayer(Color c);
    bool makeMove(Board& board) override;
};

class AIPlayer : public Player {
public:
    int maxDepth;
    bool makeMove(Board& board) override;
};
