#include "piece.hpp"
#include <cctype>
#include <string>
using namespace std;

string Piece::symbol() const {
    if (type == EMPTY) return ".";
    char chars[] = {'K', 'Q', 'R', 'B', 'N', 'P'};
    char s = chars[type];
    if (color == BLACK) {
        std::string str;
        str += s;
        str += '*';
        return str;
    }
    return std::string(1, s);
}
