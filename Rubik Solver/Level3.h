#pragma once
#include "MiddlePiece.h"
#include "CornerPiece.h"
class Level3
{
private:
	MiddlePiece Level3MiddlePieces[4];
	char Center;
	CornerPiece Level3CornerPieces[4];
public:
	Level3();
	Level3(char CenterColor, MiddlePiece a[4], CornerPiece b[4]);
	void operator=(Level3 x);
	CornerPiece& GetCornerPiece(int a);
	MiddlePiece& GetMiddlePiece(int a);
	void afisare();
	void afisareMatrice();
	void U();
	void Uprime();
};

