#include <bits/stdc++.h>

#include "chess_piece.cpp"
using namespace std;
#define A1 21
#define H1 28
#define A8 91
#define H8 98

int get_index(string s) { return ((s[1] - '0' + 1) * 10) + s[0] - 'A' + 1; }

struct board_state {
  Chess_piece board[120];
};
board_state get_initialboard() {
  board_state r;
  memset(r.board, 0, sizeof(r.board));
  Chess_piece* b = r.board;

  string s;
  for (int i = 31; i <= 38; i++) {
    b[i] = wPawn;
  }
  for (int i = 81; i <= 88; i++) {
    b[i] = bPawn;
  }
  b[21] = b[28] = wRock;
  b[22] = b[27] = wKnight;
  b[23] = b[26] = wBishop;
  b[24] = wQueen;
  b[25] = wKing;

  b[91] = b[98] = bRock;
  b[92] = b[97] = bKnight;
  b[93] = b[96] = bBishop;
  b[94] = bQueen;
  b[95] = bKing;
  return r;
}
string valueToName(Chess_piece v) {
  switch (v) {
    case wPawn:
      return "wP";
    case wRock:
      return "wR";
    case wBishop:
      return "wB";
    case wQueen:
      return "wQ";
    case wKing:
      return "wK";
    case wKnight:
      return "wN";
    case bPawn:
      return "bP";
    case bRock:
      return "bR";
    case bBishop:
      return "bB";
    case bQueen:
      return "bQ";
    case bKing:
      return "bK";
    case bKnight:
      return "bN";
    case blank:
      return " .";
    default:
      return "ERROR";
  }
}
void printBoard(board_state board_state, bool border = true) {
  for (int i = 2; i <= 9; i++) {
    if (border) cout << i - 1 << " ";
    for (int j = 1; j <= 8; j++) {
      cout << valueToName(board_state.board[i * 10 + j]) << " ";
    }
    cout << endl;
  }
  if (border) {
    cout << "  ";
    for (int i = 0; i < 8; i++) {
      cout << (char)('A' + i) << "  ";
    }
    cout << endl;
  }
}

int main() { printBoard(get_initialboard()); }