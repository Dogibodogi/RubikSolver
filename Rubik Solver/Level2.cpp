#include "Level2.h"
#include <iostream>
Level2::Level2(char x[4], MiddlePiece y[4])
{
	for (int i = 0; i < 4; i++)
	{
		this->Centers[i] = x[i];
		this->Level2MiddlePieces[i] = y[i];
	}

}
Level2::Level2()
{
	MiddlePiece a(0, 0);
	for (int i = 0; i < 4; i++)
	{
		this->Centers[i] = 0;
		this->Level2MiddlePieces[i] = a;
	}
}
void Level2::operator=(Level2 x)
{
	for (int i = 0; i < 4; i++)
	{
		this->Centers[i] = x.Centers[i];
		this->Level2MiddlePieces[i] = x.Level2MiddlePieces[i];
	}
}
void::Level2::afisare()
{
	for (int i = 0; i < 4; i++)
	{
		Level2MiddlePieces[i].afisare();
		std::cout << Centers[i] << std::endl;
	}
}
MiddlePiece& Level2::GetMiddlePiece(int a)
{
	return this->Level2MiddlePieces[a];
}
char Level2::GetCenterColor(int a)
{
	return this->Centers[a];
}