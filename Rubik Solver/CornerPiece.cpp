#include "CornerPiece.h"
#include <iostream>
CornerPiece::CornerPiece(char a, char b, char c)
{
	this->TopColor = a;
	this->FrontColor = b;
	this->RightColor = c;
}
CornerPiece::CornerPiece()
{
	this->FrontColor = '0';
	this->RightColor = '0';
	this->TopColor = '0';
}
void CornerPiece::afisare()
{
	std::cout << "Top, front, right" << std::endl;
	std::cout << TopColor << ' ' << FrontColor << ' ' << RightColor << std::endl;
}
void CornerPiece::R1()
{
	char aux = this->RightColor;
	this->RightColor = this->FrontColor;
	this->FrontColor = this->TopColor;
	this->TopColor = aux;
}
void CornerPiece::R2()
{
	char x = this->TopColor;
	this->TopColor = this->FrontColor;
	this->FrontColor = this->RightColor;
	this->RightColor = x;
}
char CornerPiece::GetColor(char k)
{
	if (k == 'f')
		return this->FrontColor;
	else
		if (k == 'r')
			return this->RightColor;
		else
		{
			return this->TopColor;
		}
}
void CornerPiece::L1()
{
	char aux;
	aux = this->FrontColor;
	this->FrontColor = this->TopColor;
	this->TopColor = RightColor;
	this->RightColor = aux;
}
void CornerPiece::L2()
{
	char aux;
	aux = this->TopColor;
	this->TopColor = this->FrontColor;
	this->FrontColor = this->RightColor;
	this->RightColor = aux;
}
void CornerPiece::F1()
{
	char aux;
	aux = this->FrontColor;
	this->FrontColor = this->TopColor;
	this->TopColor = this->RightColor;
	this->RightColor = aux;
}
void CornerPiece::F2()
{
	char aux;
	aux = this->RightColor;
	this->RightColor = this->TopColor;
	this->TopColor = this->FrontColor;
	this->FrontColor = aux;
}