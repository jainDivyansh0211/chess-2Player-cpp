#pragma once
#include<string>
enum PieceType { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN, EMPTY };
enum Color { WHITE, BLACK, NONE };

class Piece {
public:
    PieceType type;
    Color color;

    Piece(PieceType t = EMPTY, Color c = NONE);
    std::string symbol() const;
};
