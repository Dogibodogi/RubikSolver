#include "Cube.h"
#include<iostream>
Cube::Cube(Level1 a, Level2 b, Level3 c)
{
	this->lvl1 = a;
	this->lvl2 = b;
	this->lvl3 = c;
}
Cube::Cube()
{
	Level1 x;
	Level2 y;
	Level3 z;
	this->lvl1 = x;
	this->lvl2 = y;
	this->lvl3 = z;
}
void Cube::afisare()
{
	//lvl3.afisare();
	std::cout << std::endl;
	std::cout << std::endl;
	char Matrice[12][9];
	Matrice[1][4] = 'g';
	Matrice[2][4] = this->lvl3.GetMiddlePiece(0).GetColor('f');
	Matrice[1][5] = this->lvl3.GetMiddlePiece(1).GetColor('f');
	Matrice[0][4] = this->lvl3.GetMiddlePiece(2).GetColor('f');
	Matrice[1][3] = this->lvl3.GetMiddlePiece(3).GetColor('f');
	Matrice[2][3] = this->lvl3.GetCornerPiece(0).GetColor('f');
	Matrice[2][5] = this->lvl3.GetCornerPiece(1).GetColor('f');
	Matrice[0][5] = this->lvl3.GetCornerPiece(2).GetColor('f');
	Matrice[0][3] = this->lvl3.GetCornerPiece(3).GetColor('f');

	Matrice[4][4] = 'v';
	Matrice[3][4] = this->lvl3.GetMiddlePiece(0).GetColor('t');
	Matrice[5][4] = this->lvl1.GetMiddlePiece(0).GetColor('t');
	Matrice[4][3] = this->lvl2.GetMiddlePiece(0).GetColor('t');
	Matrice[4][5] = this->lvl2.GetMiddlePiece(1).GetColor('f');
	Matrice[3][3] = this->lvl3.GetCornerPiece(0).GetColor('t');
	Matrice[3][5] = this->lvl3.GetCornerPiece(1).GetColor('r');
	Matrice[5][5] = this->lvl1.GetCornerPiece(1).GetColor('t');
	Matrice[5][3] = this->lvl1.GetCornerPiece(0).GetColor('r');

	Matrice[7][4] = 'a';
	Matrice[6][4] = this->lvl1.GetMiddlePiece(0).GetColor('f');
	Matrice[7][5] = this->lvl1.GetMiddlePiece(1).GetColor('f');
	Matrice[8][4] = this->lvl1.GetMiddlePiece(2).GetColor('f');
	Matrice[7][3] = this->lvl1.GetMiddlePiece(3).GetColor('f');
	Matrice[6][3] = this->lvl1.GetCornerPiece(0).GetColor('f');
	Matrice[6][5] = this->lvl1.GetCornerPiece(1).GetColor('f');
	Matrice[8][5] = this->lvl1.GetCornerPiece(2).GetColor('f');
	Matrice[8][3] = this->lvl1.GetCornerPiece(3).GetColor('f');

	Matrice[4][1] = 'r';
	Matrice[4][2] = this->lvl2.GetMiddlePiece(0).GetColor('f');
	Matrice[4][0] = this->lvl2.GetMiddlePiece(3).GetColor('t');
	Matrice[3][1] = this->lvl3.GetMiddlePiece(3).GetColor('t');
	Matrice[5][1] = this->lvl1.GetMiddlePiece(3).GetColor('t');
	Matrice[3][2] = this->lvl3.GetCornerPiece(0).GetColor('r');
	Matrice[5][2] = this->lvl1.GetCornerPiece(0).GetColor('t');
	Matrice[5][0] = this->lvl1.GetCornerPiece(3).GetColor('r');
	Matrice[3][0] = this->lvl3.GetCornerPiece(3).GetColor('t');

	Matrice[10][4] = 'b';
	Matrice[9][4] = this->lvl1.GetMiddlePiece(2).GetColor('t');
	Matrice[11][4] = this->lvl3.GetMiddlePiece(2).GetColor('t');
	Matrice[10][5] = this->lvl2.GetMiddlePiece(2).GetColor('t');
	Matrice[10][3] = this->lvl2.GetMiddlePiece(3).GetColor('f');
	Matrice[9][3] = this->lvl1.GetCornerPiece(3).GetColor('t');
	Matrice[11][3] = this->lvl3.GetCornerPiece(3).GetColor('r');
	Matrice[11][5] = this->lvl3.GetCornerPiece(2).GetColor('t');
	Matrice[9][5] = this->lvl1.GetCornerPiece(2).GetColor('r');

	Matrice[4][7] = 'p';
	Matrice[3][7] = this->lvl3.GetMiddlePiece(1).GetColor('t');
	Matrice[5][7] = this->lvl1.GetMiddlePiece(1).GetColor('t');
	Matrice[4][6] = this->lvl2.GetMiddlePiece(1).GetColor('t');
	Matrice[4][8] = this->lvl2.GetMiddlePiece(2).GetColor('f');
	Matrice[3][6] = this->lvl3.GetCornerPiece(1).GetColor('t');
	Matrice[5][6] = this->lvl1.GetCornerPiece(1).GetColor('r');
	Matrice[5][8] = this->lvl1.GetCornerPiece(2).GetColor('t');
	Matrice[3][8] = this->lvl3.GetCornerPiece(2).GetColor('r');

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (Matrice[i][j] < 'A')
				Matrice[i][j] = ' ';
			std::cout << Matrice[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}
void Cube::U()
{
	lvl3.U();
	std::cout << "U" << ' ';
}
void Cube::Uprime()
{
	lvl3.Uprime();
	std::cout << "U'" << ' ';
}
void Cube::R()
{
	CornerPiece CornerAux;
	MiddlePiece MiddleAux;
	this->lvl1.GetCornerPiece(1).R1();
	this->lvl1.GetCornerPiece(2).R2();
	this->lvl3.GetCornerPiece(1).R2();
	this->lvl3.GetCornerPiece(2).R1();

	CornerAux = this->lvl1.GetCornerPiece(2);
	this->lvl1.GetCornerPiece(2) = this->lvl3.GetCornerPiece(2);
	this->lvl3.GetCornerPiece(2) = this->lvl3.GetCornerPiece(1);
	this->lvl3.GetCornerPiece(1) = this->lvl1.GetCornerPiece(1);
	this->lvl1.GetCornerPiece(1) = CornerAux;

	this->lvl3.GetMiddlePiece(1).rotatie();
	this->lvl2.GetMiddlePiece(2).rotatie();

	MiddleAux = lvl1.GetMiddlePiece(1);
	this->lvl1.GetMiddlePiece(1) = this->lvl2.GetMiddlePiece(2);
	this->lvl2.GetMiddlePiece(2) = this->lvl3.GetMiddlePiece(1);
	this->lvl3.GetMiddlePiece(1) = this->lvl2.GetMiddlePiece(1);
	this->lvl2.GetMiddlePiece(1) = MiddleAux;
	std::cout << "R" << ' ';
}
void Cube::	Rprime()
{
	CornerPiece CornerAux;
	MiddlePiece MiddleAux;

	this->lvl3.GetCornerPiece(1).R2();
	this->lvl1.GetCornerPiece(2).R2();
	this->lvl3.GetCornerPiece(2).R1();
	this->lvl1.GetCornerPiece(1).R1();

	CornerAux = this->lvl3.GetCornerPiece(2);
	this->lvl3.GetCornerPiece(2) = this->lvl1.GetCornerPiece(2);
	this->lvl1.GetCornerPiece(2) = this->lvl1.GetCornerPiece(1);
	this->lvl1.GetCornerPiece(1) = this->lvl3.GetCornerPiece(1);
	this->lvl3.GetCornerPiece(1) = CornerAux;

	this->lvl1.GetMiddlePiece(1).rotatie();
	this->lvl2.GetMiddlePiece(2).rotatie();

	MiddleAux = this->lvl2.GetMiddlePiece(2);
	this->lvl2.GetMiddlePiece(2) = this->lvl1.GetMiddlePiece(1);
	this->lvl1.GetMiddlePiece(1) = this->lvl2.GetMiddlePiece(1);
	this->lvl2.GetMiddlePiece(1) = this->lvl3.GetMiddlePiece(1);
	this->lvl3.GetMiddlePiece(1) = MiddleAux;
	std::cout << "R'" << ' ';
}
void Cube::L()
{
	CornerPiece CornerAux;
	MiddlePiece MiddleAux;

	this->lvl3.GetCornerPiece(0).L1();
	this->lvl3.GetCornerPiece(3).L2();
	this->lvl1.GetCornerPiece(3).L1();
	this->lvl1.GetCornerPiece(0).L2();
	CornerAux = this->lvl3.GetCornerPiece(0);
	this->lvl3.GetCornerPiece(0) = this->lvl3.GetCornerPiece(3);
	this->lvl3.GetCornerPiece(3) = this->lvl1.GetCornerPiece(3);
	this->lvl1.GetCornerPiece(3) = this->lvl1.GetCornerPiece(0);
	this->lvl1.GetCornerPiece(0) = CornerAux;

	this->lvl3.GetMiddlePiece(3).rotatie();
	this->lvl2.GetMiddlePiece(0).rotatie();

	MiddleAux = this->lvl3.GetMiddlePiece(3);
	this->lvl3.GetMiddlePiece(3) = this->lvl2.GetMiddlePiece(3);
	this->lvl2.GetMiddlePiece(3) = this->lvl1.GetMiddlePiece(3);
	this->lvl1.GetMiddlePiece(3) = this->lvl2.GetMiddlePiece(0);
	this->lvl2.GetMiddlePiece(0) = MiddleAux;
	std::cout << "L" << ' ';
}
void Cube::Lprime()
{
	this->L();
	this->L();
	this->L();
}
void Cube::F()
{
	MiddlePiece MiddleAux;
	CornerPiece CornerAux;
	
	this->lvl3.GetMiddlePiece(0).rotatie();
	this->lvl2.GetMiddlePiece(1).rotatie();

	MiddleAux = this->lvl1.GetMiddlePiece(0);
	this->lvl1.GetMiddlePiece(0) = this->lvl2.GetMiddlePiece(1);
	this->lvl2.GetMiddlePiece(1) = this->lvl3.GetMiddlePiece(0);
	this->lvl3.GetMiddlePiece(0) = this->lvl2.GetMiddlePiece(0);
	this->lvl2.GetMiddlePiece(0) = MiddleAux;

	this->lvl1.GetCornerPiece(1).F2();
	this->lvl3.GetCornerPiece(0).F2();
	this->lvl1.GetCornerPiece(0).F1();
	this->lvl3.GetCornerPiece(1).F1();

	CornerAux = this->lvl1.GetCornerPiece(1);
	this->lvl1.GetCornerPiece(1) = this->lvl3.GetCornerPiece(1);
	this->lvl3.GetCornerPiece(1) = this->lvl3.GetCornerPiece(0);
	this->lvl3.GetCornerPiece(0) = this->lvl1.GetCornerPiece(0);
	this->lvl1.GetCornerPiece(0) = CornerAux;
	std::cout << "F" << ' ';
}
void Cube::Fprime()
{
	this->F();
	this->F();
	this->F();
}
void Cube::D()
{
	MiddlePiece MiddleAux;
	CornerPiece CornerAux;

	MiddleAux = this->lvl1.GetMiddlePiece(0);
	this->lvl1.GetMiddlePiece(0) = this->lvl1.GetMiddlePiece(3);
	this->lvl1.GetMiddlePiece(3) = this->lvl1.GetMiddlePiece(2);
	this->lvl1.GetMiddlePiece(2) = this->lvl1.GetMiddlePiece(1);
	this->lvl1.GetMiddlePiece(1) = MiddleAux;

	CornerAux = this->lvl1.GetCornerPiece(0);
	this->lvl1.GetCornerPiece(0) = this->lvl1.GetCornerPiece(3);
	this->lvl1.GetCornerPiece(3) = this->lvl1.GetCornerPiece(2);
	this->lvl1.GetCornerPiece(2) = this->lvl1.GetCornerPiece(1);
	this->lvl1.GetCornerPiece(1) = CornerAux;
	std::cout << "D" << ' ';
}
void Cube::Dprime()
{
	this->D();
	this->D();
	this->D();
}
void Cube::B()
{
	MiddlePiece MiddleAux;
	CornerPiece CornerAux;

	this->lvl2.GetMiddlePiece(3).rotatie();
	this->lvl3.GetMiddlePiece(2).rotatie();
	MiddleAux = this->lvl3.GetMiddlePiece(2);
	this->lvl3.GetMiddlePiece(2) = this->lvl2.GetMiddlePiece(2);
	this->lvl2.GetMiddlePiece(2) = this->lvl1.GetMiddlePiece(2);
	this->lvl1.GetMiddlePiece(2) = this->lvl2.GetMiddlePiece(3);
	this->lvl2.GetMiddlePiece(3) = MiddleAux;

	this->lvl3.GetCornerPiece(2).F2();
	this->lvl1.GetCornerPiece(3).F2();
	this->lvl3.GetCornerPiece(3).F1();
	this->lvl1.GetCornerPiece(2).F1();

	CornerAux = this->lvl3.GetCornerPiece(3);
	this->lvl3.GetCornerPiece(3) = this->lvl3.GetCornerPiece(2);
	this->lvl3.GetCornerPiece(2) = this->lvl1.GetCornerPiece(2);
	this->lvl1.GetCornerPiece(2) = this->lvl1.GetCornerPiece(3);
	this->lvl1.GetCornerPiece(3) = CornerAux;
	std::cout << "B" << ' ';
}
void Cube::Bprime()
{
	this->B();
	this->B();
	this->B();

}
void Cube::U2()
{
	this->U();
	this->U();

}
void Cube::L2()
{
	this->L();
	this->L();
}
void Cube::B2()
{
	this->B();
	this->B();
}
void Cube::R2()
{
	this->R();
	this->R();
}
void Cube::F2()
{
	this->F();
	this->F();
}