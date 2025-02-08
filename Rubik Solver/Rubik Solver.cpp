#include <iostream>
#include <fstream>
#include <cstring>
#include "Cube.h"
using namespace std;
ifstream fin ("scramble.txt");
char WhiteCenter[3][3],GreenCenter[3][3],OrangeCenter[3][3],BlueCenter[3][3],RedCenter[3][3],YellowCenter[3][3];
void citire()
{
	char MatriceCitire[3][3];
	char x;
	for (int i = 0; i < 6; i++)
	{
		for (int ii = 0; ii < 3; ii++)
			for (int j = 0; j < 3; j++)
				fin>>MatriceCitire[ii][j];
		if (MatriceCitire[1][1] == 'a')
		{
			for (int k = 0; k < 3; k++)
				for (int o = 0; o < 3; o++)
					WhiteCenter[k][o] = MatriceCitire[k][o];
		}
		else
		if (MatriceCitire[1][1] == 'r')
			{
				for (int k = 0; k < 3; k++)
					for (int o = 0; o < 3; o++)
						RedCenter[k][o] = MatriceCitire[k][o];
			}
		else
		if (MatriceCitire[1][1] == 'v')
			{
				for (int k = 0; k < 3; k++)
					for (int o = 0; o < 3; o++)
						GreenCenter[k][o] = MatriceCitire[k][o];
			}
		else
		if (MatriceCitire[1][1] == 'p')
			{
				for (int k = 0; k < 3; k++)
					for (int o = 0; o < 3; o++)
						OrangeCenter[k][o] = MatriceCitire[k][o];
			}
		else
			if (MatriceCitire[1][1] == 'g')
			{
				for (int k = 0; k < 3; k++)
					for (int o = 0; o < 3; o++)
						YellowCenter[k][o] = MatriceCitire[k][o];
			}
			else
				if (MatriceCitire[1][1] == 'b')
				{
					for (int k = 0; k < 3; k++)
						for (int o = 0; o < 3; o++)
							BlueCenter[k][o] = MatriceCitire[k][o];
				}
	}
}
void InitializareLvl1(Level1 &lvl1)
{
	char Lvl1Center = 'a';
	MiddlePiece MiddleLvl1_1(GreenCenter[2][1], WhiteCenter[0][1]);
	MiddlePiece MiddleLvl1_2(OrangeCenter[2][1], WhiteCenter[1][2]);
	MiddlePiece MiddleLvl1_3(BlueCenter[0][1], WhiteCenter[2][1]);
	MiddlePiece MiddleLvl1_4(RedCenter[2][1], WhiteCenter[1][0]);

	CornerPiece CornerLvl1_1(RedCenter[2][2], WhiteCenter[0][0], GreenCenter[2][0]);
	CornerPiece CornerLvl1_2(GreenCenter[2][2], WhiteCenter[0][2], OrangeCenter[2][0]);
	CornerPiece CornerLvl1_3(OrangeCenter[2][2], WhiteCenter[2][2], BlueCenter[0][2]);
	CornerPiece CornerLvl1_4(BlueCenter[0][0], WhiteCenter[2][0], RedCenter[2][0]);
	CornerPiece Lvl1VectorCorner[4];
	Lvl1VectorCorner[0] = CornerLvl1_1;
	Lvl1VectorCorner[1] = CornerLvl1_2;
	Lvl1VectorCorner[2] = CornerLvl1_3;
	Lvl1VectorCorner[3] = CornerLvl1_4;
	MiddlePiece Lvl1VectorMiddle[4];
	Lvl1VectorMiddle[0] = MiddleLvl1_1;
	Lvl1VectorMiddle[1] = MiddleLvl1_2;
	Lvl1VectorMiddle[2] = MiddleLvl1_3;
	Lvl1VectorMiddle[3] = MiddleLvl1_4;
	Level1 k(Lvl1Center, Lvl1VectorMiddle, Lvl1VectorCorner);
	lvl1 = k;
}
void InitializareLvl2(Level2& lvl2)
{
	MiddlePiece MiddleLvl2_1(GreenCenter[1][0], RedCenter[1][2]);
	MiddlePiece MiddleLvl2_2(OrangeCenter[1][0], GreenCenter[1][2]);
	MiddlePiece MiddleLvl2_3(BlueCenter[1][2], OrangeCenter[1][2]);
	MiddlePiece MiddleLvl2_4(RedCenter[1][0], BlueCenter[1][0]);
	MiddlePiece MiddlePiecesLvl2[4];
	MiddlePiecesLvl2[0] = MiddleLvl2_1;
	MiddlePiecesLvl2[1] = MiddleLvl2_2;
	MiddlePiecesLvl2[2] = MiddleLvl2_3;
	MiddlePiecesLvl2[3] = MiddleLvl2_4;
	char Lvl2Centers[4];
	Lvl2Centers[0] = 'v';
	Lvl2Centers[1] = 'p';
	Lvl2Centers[2] = 'b';
	Lvl2Centers[3] = 'r';
	Level2 k(Lvl2Centers, MiddlePiecesLvl2);
	lvl2 = k;
}
void InitializareLvl3(Level3& lvl3)
{
	char Lvl3Center = 'g';
	MiddlePiece MiddleLvl3_1(GreenCenter[0][1], YellowCenter[2][1]);
	MiddlePiece MiddleLvl3_2(OrangeCenter[0][1], YellowCenter[1][2]);
	MiddlePiece MiddleLvl3_3(BlueCenter[2][1], YellowCenter[0][1]);
	MiddlePiece MiddleLvl3_4(RedCenter[0][1], YellowCenter[1][0]);
	CornerPiece CornerLvl3_1(GreenCenter[0][0],YellowCenter[2][0],RedCenter[0][2]);
	CornerPiece CornerLvl3_2(OrangeCenter[0][0],YellowCenter[2][2], GreenCenter[0][2]);
	CornerPiece CornerLvl3_3(BlueCenter[2][2],YellowCenter[0][2], OrangeCenter[0][2]);
	CornerPiece CornerLvl3_4(RedCenter[0][0],YellowCenter[0][0], BlueCenter[2][0]);
	CornerPiece Lvl3VectorCorner[4];
	Lvl3VectorCorner[0] = CornerLvl3_1;
	Lvl3VectorCorner[1] = CornerLvl3_2;
	Lvl3VectorCorner[2] = CornerLvl3_3;
	Lvl3VectorCorner[3] = CornerLvl3_4;
	MiddlePiece Lvl3VectorMiddle[4];
	Lvl3VectorMiddle[0] = MiddleLvl3_1;
	Lvl3VectorMiddle[1] = MiddleLvl3_2;
	Lvl3VectorMiddle[2] = MiddleLvl3_3;
	Lvl3VectorMiddle[3] = MiddleLvl3_4;
	Level3 k(Lvl3Center, Lvl3VectorMiddle, Lvl3VectorCorner);
	lvl3 = k;
}
void CrossSolve(Cube& CubRubik)
{
	char aux = '0';
	int k = 0;
	bool lvl3[4] = { false };
	while (true)
	{
		for (int i = 0; i < 4; i++)
		{
			if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('t') == 'a')
			{
				if (i == 1)
					CubRubik.U();
				else
					if (i == 2)
						CubRubik.U2();
					else
						if (i == 3)
							CubRubik.Uprime();

				CubRubik.F();
				while (CubRubik.lvl3.GetMiddlePiece(1).GetColor('f') == 'a')
					CubRubik.U();

				CubRubik.R();
			}
		}
		for (int j = 0; j < 4; j++)
		{
			if (CubRubik.lvl2.GetMiddlePiece(j).GetColor('t') == 'a')
			{
				if (j == 0)
				{
					while (CubRubik.lvl3.GetMiddlePiece(3).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.Lprime();
				}
				if (j == 1)
				{
					while (CubRubik.lvl3.GetMiddlePiece(0).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.Fprime();
				}
				if (j == 2)
				{
					while (CubRubik.lvl3.GetMiddlePiece(1).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.Rprime();
				}
				if (j == 3)
				{
					while (CubRubik.lvl3.GetMiddlePiece(2).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.Bprime();
				}
			}
			if (CubRubik.lvl2.GetMiddlePiece(j).GetColor('f') == 'a')
			{
				if (j == 0)
				{
					while (CubRubik.lvl3.GetMiddlePiece(0).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.F();
				}
				if (j == 1)
				{
					while (CubRubik.lvl3.GetMiddlePiece(1).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.R();
				}
				if (j == 2)
				{
					while (CubRubik.lvl3.GetMiddlePiece(2).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.B();
				}
				if (j == 3)
				{
					while (CubRubik.lvl3.GetMiddlePiece(3).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.L();
				}
			}
		}
		for (int k = 0; k < 4; k++)
		{
			if (CubRubik.lvl1.GetMiddlePiece(k).GetColor('f') == 'a')
			{
				while (CubRubik.lvl3.GetMiddlePiece(k).GetColor('f') == 'a')
					CubRubik.U();
				if (k == 0)
				{
					CubRubik.F();
					CubRubik.F();
				}
				if (k == 1)
				{
					CubRubik.R();
					CubRubik.R();
				}
				if (k == 2)
				{
					CubRubik.B();
					CubRubik.B();
				}
				if (k == 3)
				{
					CubRubik.L();
					CubRubik.L();
				}
			}
			if (CubRubik.lvl1.GetMiddlePiece(k).GetColor('t') == 'a')
			{
				if (k == 0)
				{
					while (CubRubik.lvl3.GetMiddlePiece(3).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.F();
					CubRubik.Lprime();
					CubRubik.Fprime();
				}
				if (k == 1)
				{
					while (CubRubik.lvl3.GetMiddlePiece(0).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.R();
					CubRubik.Fprime();
					CubRubik.Rprime();
				}
				if (k == 2)
				{
					while (CubRubik.lvl3.GetMiddlePiece(1).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.B();
					CubRubik.Rprime();
					CubRubik.Bprime();
				}
				if (k == 3)
				{
					while (CubRubik.lvl3.GetMiddlePiece(2).GetColor('f') == 'a')
						CubRubik.U();
					CubRubik.F();
					CubRubik.Lprime();
					CubRubik.Fprime();
				}
			}
		}
		for (int jj = 0; jj < 4; jj++)
			if (CubRubik.lvl3.GetMiddlePiece(jj).GetColor('f') == 'a')
				k++;
		if (k == 4)
			break;
		else
			k = 0;
	}
	k = 0;
	char ColorAux;
	while (true)
	{
		ColorAux = CubRubik.lvl3.GetMiddlePiece(0).GetColor('t');
		if (ColorAux == 'p')
		{
			CubRubik.Uprime();
			CubRubik.R2();
			CubRubik.U();
			k++;
		}
		if (ColorAux == 'b')
		{
			CubRubik.U2();
			CubRubik.B2();
			CubRubik.U2();
			k++;
		}
		if (ColorAux == 'r')
		{
			CubRubik.U();
			CubRubik.L2();
			CubRubik.Uprime();
			k++;
		}
		if (ColorAux == 'v')
		{
			CubRubik.F2();
			k++;
		}
		if (k == 4)
		{
			break;
		}
		CubRubik.U();

	}
}
void FirstLayerSolve(Cube& CubRubik)
{
	char ColorAux1;
	char ColorAux2;
	char DebugColor1 = 'o', DebugColor2 = 'o';
	char WhiteAux1, WhiteAux2, WhiteAux3;
	int k = 0;
	bool FindLevel3Piece = false;
	bool FindLevel1Piece = false;
	int counter = 0;
	while(true)
	{
	for (int jj = 0; jj < 4; jj++)
	{
		WhiteAux1 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('f');
		WhiteAux2 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('t');
		WhiteAux3 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('r');
		if (WhiteAux1 == 'a' or WhiteAux2 == 'a' or WhiteAux3 == 'a')
		{
			FindLevel3Piece = true;
			if (WhiteAux1 == 'a')
			{
				ColorAux1 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('r');
				ColorAux2 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('t');
			}
			else
				if (WhiteAux2 == 'a')
				{
					ColorAux1 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('r');
					ColorAux2 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('f');
				}
				else
					if (WhiteAux3 == 'a')
					{
						ColorAux1 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('f');
						ColorAux2 = CubRubik.lvl3.GetCornerPiece(jj).GetColor('t');
					}
			if (ColorAux1 == 'r' or ColorAux1 == 'b')
			{
				if (ColorAux2 == 'r' or ColorAux2 == 'b')
				{
					if (jj == 0)
					{
						CubRubik.U();
					}
					if (jj == 1)
					{
						CubRubik.U2();
					}
					if (jj == 2)
					{
						CubRubik.Uprime();
					}
					DebugColor1 = CubRubik.lvl1.GetCornerPiece(3).GetColor('t');
					DebugColor2 = CubRubik.lvl1.GetCornerPiece(3).GetColor('r');
					while (!(CubRubik.lvl1.GetCornerPiece(3).GetColor('f') == 'a' and
						((DebugColor1 == 'r' or DebugColor1 == 'b') and (DebugColor2 == 'b' or DebugColor2 == 'r'))))
					{
						CubRubik.L();
						CubRubik.U();
						CubRubik.Lprime();
						CubRubik.Uprime();
						DebugColor1 = CubRubik.lvl1.GetCornerPiece(3).GetColor('t');
						DebugColor2 = CubRubik.lvl1.GetCornerPiece(3).GetColor('r');
						cout << endl;
					}
				}
			}
			if (ColorAux1 == 'r' or ColorAux1 == 'v')
			{
				if (ColorAux2 == 'r' or ColorAux2 == 'v')
				{
					if (jj == 1)
					{
						CubRubik.U();
					}
					if (jj == 2)
					{
						CubRubik.U2();
					}
					if (jj == 3)
					{
						CubRubik.Uprime();
					}
					DebugColor1 = CubRubik.lvl1.GetCornerPiece(0).GetColor('t');
					DebugColor2 = CubRubik.lvl1.GetCornerPiece(0).GetColor('r');
					while (!(CubRubik.lvl1.GetCornerPiece(0).GetColor('f') == 'a' and
						((DebugColor1 == 'r' or DebugColor1 == 'v') and (DebugColor2 == 'r' or DebugColor2 == 'v'))))
					{
						CubRubik.Lprime();
						CubRubik.Uprime();
						CubRubik.L();
						CubRubik.U();
						DebugColor1 = CubRubik.lvl1.GetCornerPiece(0).GetColor('t');
						DebugColor2 = CubRubik.lvl1.GetCornerPiece(0).GetColor('r');
						cout << endl;
					}
				}
			}
			if (ColorAux1 == 'v' or ColorAux1 == 'p')
			{
				if (ColorAux2 == 'v' or ColorAux2 == 'p')
				{
					if (jj == 0)
					{
						CubRubik.Uprime();

					}
					if (jj == 2)
					{
						CubRubik.U();
					}
					if (jj == 3)
					{
						CubRubik.U2();
					}
					DebugColor1 = CubRubik.lvl1.GetCornerPiece(1).GetColor('t');
					DebugColor2 = CubRubik.lvl1.GetCornerPiece(1).GetColor('r');

					while (!(CubRubik.lvl1.GetCornerPiece(1).GetColor('f') == 'a' and
						((DebugColor1 == 'p' or DebugColor1 == 'v') and (DebugColor2 == 'p' or DebugColor2 == 'v'))))
					{
						CubRubik.R();
						CubRubik.U();
						CubRubik.Rprime();
						CubRubik.Uprime();
						DebugColor1 = CubRubik.lvl1.GetCornerPiece(1).GetColor('t');
						DebugColor2 = CubRubik.lvl1.GetCornerPiece(1).GetColor('r');
						cout << endl;
					}
				}
			}
			if (ColorAux1 == 'b' or ColorAux1 == 'p')
			{
				if (ColorAux2 == 'b' or ColorAux2 == 'p')
				{
					if (jj == 1)
					{
						CubRubik.Uprime();
					}
					if (jj == 3)
					{
						CubRubik.U();

					}
					if (jj == 0)
					{
						CubRubik.U2();

					}
					DebugColor1 = CubRubik.lvl1.GetCornerPiece(2).GetColor('t');
					DebugColor2 = CubRubik.lvl1.GetCornerPiece(2).GetColor('r');

					while (!(CubRubik.lvl1.GetCornerPiece(2).GetColor('f') == 'a' and
						((DebugColor1 == 'b' or DebugColor1 == 'p') and (DebugColor2 == 'b' or DebugColor2 == 'p'))))
					{
						CubRubik.Uprime();
						CubRubik.Rprime();
						CubRubik.U();
						CubRubik.R();
						DebugColor1 = CubRubik.lvl1.GetCornerPiece(2).GetColor('t');
						DebugColor2 = CubRubik.lvl1.GetCornerPiece(2).GetColor('r');
						cout << endl;
					}
				}
			}

		}

	}
	if (FindLevel3Piece == false)
	{
		for (int i = 0; i < 4; i++)
		{
			WhiteAux1 = CubRubik.lvl1.GetCornerPiece(i).GetColor('t');
			WhiteAux2 = CubRubik.lvl1.GetCornerPiece(i).GetColor('r');
			WhiteAux3 = CubRubik.lvl1.GetCornerPiece(i).GetColor('f');
			if (WhiteAux3 == 'a')
			{
				if (i == 0 and WhiteAux1 == 'r' and WhiteAux2 == 'v')
				{
					counter++;
					continue;
				}
				if (i == 1 and WhiteAux1 == 'v' and WhiteAux2 == 'p')
				{
					counter++;
					continue;
				}
				if (i == 2 and WhiteAux1 == 'p' and WhiteAux2 == 'b')
				{
					counter++;
					continue;
				}
				if (i == 3 and WhiteAux1 == 'b' and WhiteAux2 == 'r')
				{
					counter++;
					continue;
				}
				if (i == 1)
				{
					FindLevel1Piece = true;
					CubRubik.R();
					CubRubik.U();
					CubRubik.Rprime();
					break;
				}
				if (i == 0)
				{
					FindLevel1Piece = true;
					CubRubik.Lprime();
					CubRubik.U();
					CubRubik.L();
					break;
				}
				if (i == 2)
				{
					FindLevel1Piece = true;
					CubRubik.Rprime();
					CubRubik.U();
					CubRubik.R();
					break;
				}
				if (i == 3)
				{
					FindLevel1Piece = true;
					CubRubik.L();
					CubRubik.U();
					CubRubik.Lprime();
					break;
				}
			}
			if (WhiteAux1 == 'a' or WhiteAux2 == 'a')
			{
				FindLevel1Piece = true;
				if (i == 1)
				{
					CubRubik.R();
					CubRubik.U();
					CubRubik.Rprime();
					break;
				}
				if (i == 0)
				{
					CubRubik.Lprime();
					CubRubik.U();
					CubRubik.L();
					break;
				}
				if (i == 2)
				{
					CubRubik.Rprime();
					CubRubik.U();
					CubRubik.R();
					break;
				}
				if (i == 3)
				{
					CubRubik.L();
					CubRubik.U();
					CubRubik.Lprime();
					break;
				}
			}
		}

	}
	//cout << "Counter:" << counter << endl;
	if (FindLevel1Piece == false and FindLevel3Piece == false)
		break;
	FindLevel1Piece = false;
	FindLevel3Piece = false;
}

}
void SecondLayerSolve(Cube& CubRubik)
{
	int k = 0;
	bool AllPiecesSolved = false;
	char MiddleAux1;
	char MiddleAux2;
	while (true)
	{
		k = 0;
		for (int i = 0; i < 4; i++)
		{
			if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') != 'g' and CubRubik.lvl3.GetMiddlePiece(i).GetColor('t') != 'g')
			{
				if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('t') == 'v')
				{
					if (i == 1)
						CubRubik.U();
					if (i == 2)
						CubRubik.U2();
					if (i == 3)
						CubRubik.Uprime();
					if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'r')
					{
						CubRubik.Uprime();
						CubRubik.Lprime();
						CubRubik.U();
						CubRubik.L();
						CubRubik.U();
						CubRubik.F();
						CubRubik.Uprime();
						CubRubik.Fprime();
						cout <<endl;
					}
					else
						if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'p')
						{
							CubRubik.U();
							CubRubik.R();
							CubRubik.Uprime();
							CubRubik.Rprime();
							CubRubik.Uprime();
							CubRubik.Fprime();
							CubRubik.U();
							CubRubik.F();
							cout <<endl;
						}

				}
				if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('t') == 'p')
				{
					if (i == 0)
					{
						CubRubik.Uprime();
					}
					if (i == 2)
					{
						CubRubik.U();
					}
					if (i == 3)
					{
						CubRubik.U2();
					}
					if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'v')
					{
						CubRubik.Uprime();
						CubRubik.Fprime();
						CubRubik.U();
						CubRubik.F();
						CubRubik.U();
						CubRubik.R();
						CubRubik.Uprime();
						CubRubik.Rprime();
						cout <<endl;
					}
					else
						if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'b')
						{
							CubRubik.U();
							CubRubik.B();
							CubRubik.Uprime();
							CubRubik.Bprime();
							CubRubik.Uprime();
							CubRubik.Rprime();
							CubRubik.U();
							CubRubik.R();
							cout <<endl;
						}

				}
				if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('t') == 'b')
				{
					if (i == 0)
						CubRubik.U2();
					if (i == 1)
						CubRubik.Uprime();
					if (i == 3)
						CubRubik.U();

					if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'p')
					{
						CubRubik.Uprime();
						CubRubik.Rprime();
						CubRubik.U();
						CubRubik.R();
						CubRubik.U();
						CubRubik.B();
						CubRubik.Uprime();
						CubRubik.Bprime();
						cout <<endl;
					}
					else
						if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'r')
						{
							CubRubik.U();
							CubRubik.L();
							CubRubik.Uprime();
							CubRubik.Lprime();
							CubRubik.Uprime();
							CubRubik.Bprime();
							CubRubik.U();
							CubRubik.B();
							cout <<endl;
						}

				}
				if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('t') == 'r')
				{
					if (i == 1)
						CubRubik.U2();
					if (i == 0)
						CubRubik.U();
					if (i == 2)
						CubRubik.Uprime();
					if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'b')
					{
						CubRubik.Uprime();
						CubRubik.Bprime();
						CubRubik.U();
						CubRubik.B();
						CubRubik.U();
						CubRubik.L();
						CubRubik.Uprime();
						CubRubik.Lprime();
						cout <<endl;
					}
					else
						if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'v')
						{
							CubRubik.U();
							CubRubik.F();
							CubRubik.Uprime();
							CubRubik.Fprime();
							CubRubik.Uprime();
							CubRubik.Lprime();
							CubRubik.U();
							CubRubik.L();
							cout <<endl;
						}

				}

			}
			else
			{
				k++;
			}
		}
		if (k == 4)
		{
			for (int j = 0; j < 4; j++)
			{
				k = 0;
				MiddleAux1 = CubRubik.lvl2.GetMiddlePiece(j).GetColor('t');
				MiddleAux2 = CubRubik.lvl2.GetMiddlePiece(j).GetColor('f');

				if (j == 0 and (MiddleAux1 != 'v' or MiddleAux2 != 'r'))
				{
					CubRubik.Uprime();
					CubRubik.Lprime();
					CubRubik.U();
					CubRubik.L();
					CubRubik.U();
					CubRubik.F();
					CubRubik.Uprime();
					CubRubik.Fprime();
					cout << endl;
					break;
				}
				if (j == 1 and (MiddleAux1 != 'p' or MiddleAux2 != 'v'))
				{
					CubRubik.U();
					CubRubik.R();
					CubRubik.Uprime();
					CubRubik.Rprime();
					CubRubik.Uprime();
					CubRubik.Fprime();
					CubRubik.U();
					CubRubik.F();
					cout << endl;
					break;
				}
				if (j == 2 and (MiddleAux1 != 'b' or MiddleAux2 != 'p'))
				{
					CubRubik.U();
					CubRubik.B();
					CubRubik.Uprime();
					CubRubik.Bprime();
					CubRubik.Uprime();
					CubRubik.Rprime();
					CubRubik.U();
					CubRubik.R();
					cout << endl;
					break;
				}
				if (j == 3 and (MiddleAux1 != 'r' or MiddleAux2 != 'b'))
				{
					CubRubik.U();
					CubRubik.L();
					CubRubik.Uprime();
					CubRubik.Lprime();
					CubRubik.Uprime();
					CubRubik.Bprime();
					CubRubik.U();
					CubRubik.B();
					cout << endl;
					break;
				}
				if(j==3)
					AllPiecesSolved = true;
			}
	
		}
		if (AllPiecesSolved == true)
			break;
	}
}
void LastLayerSolve(Cube& CubRubik)
{
	int MiddlePieceAux1=0;
	int MiddlePieceAux2=0;
	int k = 0;
	int counter = 0;
	for (int i = 0; i < 4; i++)
	{
		if (CubRubik.lvl3.GetMiddlePiece(i).GetColor('f') == 'g')
		{
			if (k == 0)
				MiddlePieceAux1 = i;
			else
				MiddlePieceAux2 = i;
			k++;
		}
	}
	if (k == 0)
	{
		CubRubik.F();
		CubRubik.R();
		CubRubik.U();
		CubRubik.Rprime();
		CubRubik.Uprime();
		CubRubik.R();
		CubRubik.U();
		CubRubik.Rprime();
		CubRubik.Uprime();
		CubRubik.Fprime();
		CubRubik.U();
		CubRubik.F();
		CubRubik.R();
		CubRubik.U();
		CubRubik.Rprime();
		CubRubik.Uprime();
		CubRubik.Fprime();
	}
	if (k == 2)
	{
		if ((MiddlePieceAux1 + MiddlePieceAux2) % 2 == 0)
		{
			if (MiddlePieceAux1 == 0 or MiddlePieceAux1 == 2)
			{
				CubRubik.U();
				CubRubik.F();
				CubRubik.R();
				CubRubik.U();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.Fprime();
			}
			else
			{
				CubRubik.F();
				CubRubik.R();
				CubRubik.U();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.Fprime();
			}
		}
		else
		{
			if (MiddlePieceAux1 == 0 and MiddlePieceAux2==1)
				CubRubik.U2();
			if (MiddlePieceAux1 == 1)
				CubRubik.Uprime();
			if (MiddlePieceAux1 == 3 and MiddlePieceAux2==3)
				CubRubik.U();

			CubRubik.F();
			CubRubik.R();
			CubRubik.U();
			CubRubik.Rprime();
			CubRubik.Uprime();
			CubRubik.R();
			CubRubik.U();
			CubRubik.Rprime();
			CubRubik.Uprime();
			CubRubik.Fprime();
		}

	}
	cout <<"Am terminat crucea"<< endl;


	k = 0;
	for (int j = 0; j < 4; j++)
	{
		if (CubRubik.lvl3.GetMiddlePiece(0).GetColor('t') == 'v')
		{
			//cout << "verde";
			MiddlePieceAux1 = 0;
			k++;
		}
		if (CubRubik.lvl3.GetMiddlePiece(1).GetColor('t') == 'p')
		{
			//cout << "portocaliu";
			if (k == 0)
				MiddlePieceAux1 = 1;
			else
				MiddlePieceAux2 = 1;
			k++;
		}
		if (CubRubik.lvl3.GetMiddlePiece(2).GetColor('t') == 'b')
		{
			//cout << "albastru";
			if (k == 0)
				MiddlePieceAux1 = 2;
			else
				MiddlePieceAux2 = 2;

			k++;
		}
		if (CubRubik.lvl3.GetMiddlePiece(3).GetColor('t') == 'r')
		{
			//cout << "rosu";
			if (k == 0)
				MiddlePieceAux1 = 3;
			else
				MiddlePieceAux2 = 3;
			k++;
		}
		if (k == 2 or k==4)
		{
			break;
		}
		cout << k;
		k = 0;
		CubRubik.U();

	}

	if (k != 4)
	{
		if ((MiddlePieceAux1 + MiddlePieceAux2) % 2 == 0)
		{
			if (MiddlePieceAux1 == 1 or MiddlePieceAux1 == 3)
				CubRubik.U();

			CubRubik.R();
			CubRubik.U2();
			CubRubik.Rprime();
			CubRubik.Uprime();
			CubRubik.R();
			CubRubik.Uprime();
			CubRubik.Rprime();

			for (int i = 0; i < 4; i++)
			{
				if (CubRubik.lvl3.GetMiddlePiece(0).GetColor('t') == 'v')
				{
					cout << 'v';
					MiddlePieceAux1 = 0;
					counter++;
				}
				if (CubRubik.lvl3.GetMiddlePiece(1).GetColor('t') == 'p')
				{
					cout << 'p';
					if (counter == 0)
						MiddlePieceAux1 = 1;
					else
						MiddlePieceAux2 = 1;
					counter++;
				}
				if (CubRubik.lvl3.GetMiddlePiece(2).GetColor('t') == 'b')
				{
					cout << 'b';
					if (counter == 0)
						MiddlePieceAux1 = 2;
					else
						MiddlePieceAux2 = 2;
					counter++;
				}
				if (CubRubik.lvl3.GetMiddlePiece(3).GetColor('t') == 'r')
				{
					cout << 'r';
					if (counter == 0)
						MiddlePieceAux1 = 3;
					else
						MiddlePieceAux2 = 3;
					counter++;
				}
				cout << counter;
				if (counter == 2)
				{
					break;
				}

				counter = 0;
				CubRubik.U();
			}
			if (MiddlePieceAux1 == 0 and MiddlePieceAux2 == 1)
			{
				CubRubik.U2();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.Uprime();
			}
			if (MiddlePieceAux1 == 0 and MiddlePieceAux2 == 3)
			{
				CubRubik.U();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.Uprime();
			}
			if (MiddlePieceAux1 == 1)
			{
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
			}
			if (MiddlePieceAux1 == 2)
			{
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.U();
			}
			if (MiddlePieceAux1 == 0 and MiddlePieceAux2 == 3)
			{
				CubRubik.U();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.U2();
			}
		}
		else
		{
			if (MiddlePieceAux1 == 0 and MiddlePieceAux2 == 3)
			{
				CubRubik.U();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.Uprime();
			}
			if (MiddlePieceAux1 == 1)
			{
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
			}
			if (MiddlePieceAux1 == 2)
			{
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.U();
			}
			if (MiddlePieceAux1 == 0 and MiddlePieceAux2 == 1)
			{
				CubRubik.U2();
				CubRubik.R();
				CubRubik.U2();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.Rprime();
				CubRubik.U2();
			}

		}
	}
	while (CubRubik.lvl3.GetMiddlePiece(0).GetColor('t') != 'v')
	{
		CubRubik.U();
	}

	//asezarea pieselor ramse
	
	char ColorAux1, ColorAux2, ColorAux3;
	counter = 0;
	int counter2 = 0;
	while (true)
	{

		ColorAux1 = CubRubik.lvl3.GetCornerPiece(0).GetColor('t');
		ColorAux2 = CubRubik.lvl3.GetCornerPiece(0).GetColor('f');
		ColorAux3 = CubRubik.lvl3.GetCornerPiece(0).GetColor('r');

		if (ColorAux1 == 'g' or ColorAux1 == 'r' or ColorAux1 == 'v')
			if (ColorAux2 == 'g' or ColorAux2 == 'r' or ColorAux2 == 'v')
				if (ColorAux3 == 'g' or ColorAux3 == 'r' or ColorAux3 == 'v')
				{
					MiddlePieceAux1 = 0;
					counter++;
				}
		ColorAux1 = CubRubik.lvl3.GetCornerPiece(1).GetColor('t');
		ColorAux2 = CubRubik.lvl3.GetCornerPiece(1).GetColor('f');
		ColorAux3 = CubRubik.lvl3.GetCornerPiece(1).GetColor('r');

		if (ColorAux1 == 'g' or ColorAux1 == 'v' or ColorAux1 == 'p')
			if (ColorAux2 == 'g' or ColorAux2 == 'v' or ColorAux2 == 'p')
				if (ColorAux3 == 'g' or ColorAux3 == 'v' or ColorAux3 == 'p')
				{
					MiddlePieceAux1 = 1;
					counter++;
				}
		ColorAux1 = CubRubik.lvl3.GetCornerPiece(2).GetColor('t');
		ColorAux2 = CubRubik.lvl3.GetCornerPiece(2).GetColor('f');
		ColorAux3 = CubRubik.lvl3.GetCornerPiece(2).GetColor('r');

		if (ColorAux1 == 'g' or ColorAux1 == 'p' or ColorAux1 == 'b')
			if (ColorAux2 == 'g' or ColorAux2 == 'p' or ColorAux2 == 'b')
				if (ColorAux3 == 'g' or ColorAux3 == 'p' or ColorAux3 == 'b')
				{
					
					MiddlePieceAux1 = 2;
					counter++;
				}

		ColorAux1 = CubRubik.lvl3.GetCornerPiece(3).GetColor('t');
		ColorAux2 = CubRubik.lvl3.GetCornerPiece(3).GetColor('f');
		ColorAux3 = CubRubik.lvl3.GetCornerPiece(3).GetColor('r');

		if (ColorAux1 == 'g' or ColorAux1 == 'r' or ColorAux1 == 'b')
			if (ColorAux2 == 'g' or ColorAux2 == 'r' or ColorAux2 == 'b')
				if (ColorAux3 == 'g' or ColorAux3 == 'r' or ColorAux3 == 'b')
				{
					MiddlePieceAux1 = 3;
					counter++;
				}
		
		if (counter == 0)
		{
			CubRubik.Lprime();
			CubRubik.U();
			CubRubik.R();
			CubRubik.Uprime();
			CubRubik.L();
			CubRubik.U();
			CubRubik.Rprime();
			CubRubik.Uprime();
		}
		if (counter == 4)
		{
			break;
		}
		if (counter == 1)
		{
			if (MiddlePieceAux1 == 0)
			{
				CubRubik.Uprime();
				CubRubik.Lprime();
				CubRubik.U();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.L();
				CubRubik.U();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.U();
			}
			if (MiddlePieceAux1 == 2)
			{
				CubRubik.U();
				CubRubik.Lprime();
				CubRubik.U();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.L();
				CubRubik.U();
				CubRubik.Rprime();
				CubRubik.U2();
			}
			if (MiddlePieceAux1 == 3)
			{
				CubRubik.U2();
				CubRubik.Lprime();
				CubRubik.U();
				CubRubik.R();
				CubRubik.Uprime();
				CubRubik.L();
				CubRubik.U();
				CubRubik.Rprime();
				CubRubik.Uprime();
				CubRubik.U2();
			}
			if(counter2++!=0)
			break;
		}
		counter = 0;
	}
	cout << endl;
	//Rotirea pieselor
	for (int i = 0; i < 4; i++)
	{
		while (CubRubik.lvl3.GetCornerPiece(1).GetColor('f') != 'g')
		{
			CubRubik.Rprime();
			CubRubik.D();
			CubRubik.R();
			CubRubik.Dprime();
			cout << endl;
		}
		CubRubik.U();
	}

	
}
int main()
{
	Level1 nivelul1;
	Level2 nivelul2;
	Level3 nivelul3;
	citire();
	InitializareLvl1(nivelul1);
	InitializareLvl2(nivelul2);
	InitializareLvl3(nivelul3);
	Cube CubRubik(nivelul1, nivelul2, nivelul3);
	CubRubik.afisare();
	CubRubik.U();
	CubRubik.Bprime();
	CubRubik.U();
	CubRubik.Rprime();
	CubRubik.F();
	CubRubik.Uprime();
	CubRubik.Bprime();
	CubRubik.Dprime();
	CubRubik.Fprime();
	CubRubik.U2();
	CubRubik.Fprime();
	CubRubik.U2();
	CubRubik.L2();
	CubRubik.B2();
	CubRubik.R2();
	CubRubik.U2();
	CubRubik.F2();
	CubRubik.U2();
	CubRubik.Fprime();
	CubRubik.R2();
	CubRubik.Lprime();

	CubRubik.afisare();
	CrossSolve(CubRubik);
	cout << endl << "primul nivel" << endl;
	FirstLayerSolve(CubRubik);
	cout << endl << "al doilea nivel" << endl;
	SecondLayerSolve(CubRubik);
	cout << endl << "al treilea nivel" << endl;
	CubRubik.afisare();
	
	return 0;
}