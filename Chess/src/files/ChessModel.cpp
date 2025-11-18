#include "ChessModel.h"


void ChessModel::InitChessModel() {

    // Clear board
    for (int i = 0; i < 64; i++) {
        chessBoard[i] = 0;
    }

    // White
    chessBoard[0] = GetPawnId(rook);  
    chessBoard[1] = GetPawnId(knight);  
    chessBoard[2] = GetPawnId(bishop);  
    chessBoard[3] = GetPawnId(queen);  
    chessBoard[4] = GetPawnId(king);  
    chessBoard[5] = GetPawnId(bishop);  
    chessBoard[6] = GetPawnId(knight);  
    chessBoard[7] = GetPawnId(rook);  

    // White pawns
    for (int i = 8; i < 16; i++)
        chessBoard[i] = GetPawnId(pawn);

    // Black pawns
    for (int i = 48; i < 56; i++)
        chessBoard[i] = -GetPawnId(pawn);

    // Black pawns
    chessBoard[56] = -GetPawnId(rook); 
    chessBoard[57] = -GetPawnId(knight); 
    chessBoard[58] = -GetPawnId(bishop); 
    chessBoard[59] = -GetPawnId(queen); 
    chessBoard[60] = -GetPawnId(king); 
    chessBoard[61] = -GetPawnId(bishop); 
    chessBoard[62] = -GetPawnId(knight); 
    chessBoard[63] = -GetPawnId(rook); 
}

int ChessModel::GetPawnId(ChessPiece pPawn) {
    switch (pPawn)
    {
    case pawn:
        return 1;
        break;
    case knight:
        return 2;
        break;
    case bishop:
        return 3;
        break;
    case rook:
        return 4;
        break;
    case queen:
        return 5;
        break;
    case king:
        return 6;
        break;
    default:
        return 0;
        break;
    }

    return 0;
}

int ChessModel::GetPosition(int pos) {
    if (pos < 0 || pos >63)
    {
        return 0;
    }

    return chessBoard[pos];
}