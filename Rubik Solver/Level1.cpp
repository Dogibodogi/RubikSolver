#include "Level1.h"
#include <iostream>
using namespace std;
Level1:: Level1(int k, MiddlePiece x[4], CornerPiece y[4])
{
	this->Center = k;
	for (int i=0; i<4; i++)
	{
		this->Level1MiddlePieces[i] = x[i];
		this->Level1CornerPieces[i] = y[i];
	}
}
Level1::Level1()
{
	CornerPiece a(0, 0, 0);
	MiddlePiece b(0, 0);
	this->Center = 0;
	for (int i = 0; i < 4; i++)
	{
		this->Level1CornerPieces[i] = a;
		this->Level1MiddlePieces[i] = b;
	}
}
void Level1::operator=(Level1 x)
{
	this->Center = x.Center;
	for (int i = 0; i < 4; i++)
	{
		this->Level1MiddlePieces[i] = x.Level1MiddlePieces[i];
		this->Level1CornerPieces[i] = x.Level1CornerPieces[i];
	}

}
void Level1::afisare()
{
	cout << "Piesele de mijloc in ordine sunt:" << endl;
	for (int i = 0; i < 4; i++)
	{
		Level1MiddlePieces[i].afisare();
	}
	cout << "Piesele de colturi in ordine sunt:" << endl;
	for (int j = 0; j < 4; j++)
	{
		Level1CornerPieces[j].afisare();
	}
}
CornerPiece& Level1::GetCornerPiece(int a)
{
		return this->Level1CornerPieces[a];
}
MiddlePiece& Level1::GetMiddlePiece(int a)
{
	return this->Level1MiddlePieces[a];
}