#pragma once
#include "MiddlePiece.h"
#include "CornerPiece.h"
class Level1
{
private:
	MiddlePiece Level1MiddlePieces[4];
	char Center;
	CornerPiece Level1CornerPieces[4];
public:
	Level1(int CenterColor, MiddlePiece a[4], CornerPiece b[4]);
	Level1();
	void operator=(Level1 x);
	void afisare();
	CornerPiece& GetCornerPiece(int a);
	MiddlePiece& GetMiddlePiece(int a);
};
