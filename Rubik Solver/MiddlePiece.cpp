#include "MiddlePiece.h"
#include <iostream>
MiddlePiece::MiddlePiece(char a, char b)
{
	this->TopColor = a;
	this->FrontColor = b;
}
MiddlePiece::MiddlePiece()
{
	this->TopColor = '0';
	this->FrontColor = '0';
}
void MiddlePiece::afisare()
{
	std::cout << this->TopColor <<' ';
	std::cout <<this->FrontColor << std::endl;
}
void MiddlePiece::rotatie()
{
	char aux = this->FrontColor;
	this->FrontColor = this->TopColor;
	this->TopColor = aux;
}
char MiddlePiece:: GetColor(char k)
{
	if (k == 'f')
	{
		return this->FrontColor;
	}
	return this->TopColor;
}