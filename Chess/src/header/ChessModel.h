#pragma once

enum ChessPiece {
	pawn,
	knight,
	bishop,
	rook,
	queen,
	king
};

class ChessModel {
	 int chessBoard [64];

public:
	 void InitChessModel();
	 int GetPosition(int pos);
	 int GetPawnId(ChessPiece piece);
};
