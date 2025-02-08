#include "Level3.h"
#include <iostream>
using namespace std;
Level3::Level3(char k, MiddlePiece x[4], CornerPiece y[4])
{
	this->Center = k;
	for (int i = 0; i < 4; i++)
	{
		this->Level3MiddlePieces[i] = x[i];
		this->Level3CornerPieces[i] = y[i];
	}
}
Level3::Level3()
{
	CornerPiece a(0, 0, 0);
	MiddlePiece b(0, 0);
	this->Center = 0;
	for (int i = 0; i < 4; i++)
	{
		this->Level3MiddlePieces[i] = b;
		this->Level3CornerPieces[i] = a;
	}
}
void Level3::operator=(Level3 x)
{
	this->Center = x.Center;
	for (int i = 0; i < 4; i++)
	{
		this->Level3MiddlePieces[i] = x.Level3MiddlePieces[i];
		this->Level3CornerPieces[i] = x.Level3CornerPieces[i];
	}

}
void Level3::afisare()
{

	std::cout << "Piesele de mijloc in ordine sunt:" <<std:: endl;
	for (int i = 0; i < 4; i++)
	{
		Level3MiddlePieces[i].afisare();
	}
	std::cout << "Piesele de colturi in ordine sunt:" <<std:: endl;
	for (int j = 0; j < 4; j++)
	{
		Level3CornerPieces[j].afisare();
	}

}
void Level3:: afisareMatrice()
{
	char Matrice[3][3];
	Matrice[1][1] = this->Center;
	Matrice[2][1] = this->GetMiddlePiece(0).GetColor('f');
	Matrice[1][2] = this->GetMiddlePiece(1).GetColor('f');
	Matrice[0][1] = this->GetMiddlePiece(2).GetColor('f');
	Matrice[1][0] = this->GetMiddlePiece(3).GetColor('f');
	Matrice[2][0] = this->GetCornerPiece(0).GetColor('f');
	Matrice[2][2] = this->GetCornerPiece(1).GetColor('f');
	Matrice[0][2] = this->GetCornerPiece(2).GetColor('f');
	Matrice[0][0] = this->GetCornerPiece(3).GetColor('f');

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrice[i][j]<<' ';
		}
		cout << endl;
	}

}
void Level3::U()
{
	MiddlePiece aux;
	aux = Level3MiddlePieces[0];
	Level3MiddlePieces[0] = Level3MiddlePieces[1];
	Level3MiddlePieces[1] = Level3MiddlePieces[2];
	Level3MiddlePieces[2] = Level3MiddlePieces[3];
	Level3MiddlePieces[3] = aux;
	CornerPiece CornerAux;
	CornerAux = Level3CornerPieces[0];
	Level3CornerPieces[0] = Level3CornerPieces[1];
	Level3CornerPieces[1] = Level3CornerPieces[2];
	Level3CornerPieces[2] = Level3CornerPieces[3];
	Level3CornerPieces[3] = CornerAux;

}
void Level3::Uprime()
{
	MiddlePiece aux;
	aux = Level3MiddlePieces[3];
	Level3MiddlePieces[3] = Level3MiddlePieces[2];
	Level3MiddlePieces[2] = Level3MiddlePieces[1];
	Level3MiddlePieces[1] = Level3MiddlePieces[0];
	Level3MiddlePieces[0] = aux;
	CornerPiece CornerAux;
	CornerAux = Level3CornerPieces[3];
	Level3CornerPieces[3] = Level3CornerPieces[2];
	Level3CornerPieces[2] = Level3CornerPieces[1];
	Level3CornerPieces[1] = Level3CornerPieces[0];
	Level3CornerPieces[0] = CornerAux;
}
CornerPiece& Level3::GetCornerPiece(int a)
{
	return this->Level3CornerPieces[a];
}
MiddlePiece& Level3:: GetMiddlePiece(int a)
{
	return this->Level3MiddlePieces[a];
}