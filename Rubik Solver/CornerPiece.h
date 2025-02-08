#pragma once
class CornerPiece
{
private:
	char TopColor;
	char FrontColor;
	char RightColor;
public:
	CornerPiece(char a, char b, char c);
	CornerPiece();
	char GetColor(char k);
	void afisare();
	void R1();
	void R2();
	void L1();
	void L2();
	void F1();
	void F2();
};

