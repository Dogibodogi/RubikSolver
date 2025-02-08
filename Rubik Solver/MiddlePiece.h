#pragma once
class MiddlePiece
{
private:
	char FrontColor;
	char TopColor;
public:
	MiddlePiece(char a, char b);
	MiddlePiece();
	char GetColor(char k);
	void afisare();
	void rotatie();
};

