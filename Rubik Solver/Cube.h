#pragma once
#include "Level1.h"
#include "Level2.h"
#include "Level3.h"
class Cube
{
public:
	Level1 lvl1;
	Level2 lvl2;
	Level3 lvl3;
public: 
	Cube();
	Cube(Level1 a, Level2 b, Level3 c);
	void afisare();
	void U();
	void Uprime();
	void R();
	void Rprime();
	void L();
	void Lprime();
	void F();
	void Fprime();
	void D();
	void Dprime();
	void B();
	void Bprime();
	void U2();
	void L2();
	void B2();
	void R2();
	void F2();

};

