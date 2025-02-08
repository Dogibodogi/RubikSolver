#pragma once
#include "MiddlePiece.h"
#include "CornerPiece.h"
class Level2
{
private:
	char Centers[4];
	MiddlePiece Level2MiddlePieces[4];
public:
	Level2();
	Level2(char x[4], MiddlePiece y[4]);
	void operator=(Level2 x);
	void afisare();
	MiddlePiece& GetMiddlePiece(int a);
	char GetCenterColor(int a);
};

