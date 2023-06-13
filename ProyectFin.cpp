#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace System;

using namespace std;
int ganador[25][80] =
{ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,1,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,1,1,1,1,0,0,0,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
void Ganador()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 80; j++)
		{
			if (ganador[i][j] == 0)
			{
				Console::BackgroundColor = ConsoleColor::Black;
				cout << " ";
			}
			else
			{
				if (ganador[i][j] == 1)
				{
					Console::BackgroundColor = ConsoleColor::White;
					cout << " ";
				}
			}
		}
		cout << endl;
	}
}

int tablero[26][27] =
{
  {9,9,9,8,9,9,10,9,9,11,9,9,12,9,9,13,9,9,14,9,9,15,9,9,16,9,9 },

  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {17 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },

   {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {18 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },

  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {19 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },

  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {20 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },

   {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {21 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },

  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {22 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },

  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {23,9 ,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },
  {9 ,9,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3, 9 },

  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {24,9 ,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },
  {9 ,9,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1,3,3,3,1,1,1, 9 },

  {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },

};
int Logo[25][80] =
{ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,1,1,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
void Ing_Nomb(char* jugador1, char* jugador2)
{
	Console::ForegroundColor = ConsoleColor::Red;

	Console::SetCursorPosition(29, 2);
	cout << "-------------------------------------------------------------" << endl;
	Console::SetCursorPosition(55, 26);
	cout << "innova" << endl;

	Console::SetCursorPosition(29, 20);
	cout << "-------------------------------------------------------------" << endl;
	Console::SetCursorPosition(29, 3);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 4);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 5);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 6);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 7);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 8);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 9);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 10);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 11);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 12);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 13);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 14);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 15);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 16);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 17);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 18);
	cout << "|" << endl;
	Console::SetCursorPosition(29, 19);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 3);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 4);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 5);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 6);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 7);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 8);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 9);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 10);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 11);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 12);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 13);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 14);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 15);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 16);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 17);

	cout << "|" << endl;
	Console::SetCursorPosition(90, 18);
	cout << "|" << endl;
	Console::SetCursorPosition(90, 19);
	cout << "|" << endl;
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(50, 25);
	cout << "Exígete," << endl;
	Console::SetCursorPosition(59, 27);
	cout << " UPC" << endl;
	Console::SetCursorPosition(44, 3);
	cout << "-----D---A---M---A----S-----" << endl;
	Console::SetCursorPosition(40, 6);
	cout << "--Ingresar Nombre de los Jugadores---" << endl << endl;
	Console::SetCursorPosition(40, 8);
	cout << "Nombre del jugador 1: " << endl;
	Console::SetCursorPosition(40, 9);
	cin >> jugador1;
	Console::SetCursorPosition(40, 11);
	cout << "Nombre del jugador 2: " << endl;
	Console::SetCursorPosition(40, 12);
	cin >> jugador2;
}

void Color_Fich(char& ficha, char* nom1, char* nom2, int& opcion)
{
	setlocale(LC_ALL, "esp");
	Console::SetCursorPosition(38, 15);
	cout << "La asignacion de las piezas serán al azar" << endl;
	_sleep(1200);

	Random r;
	int num_aleatorio = r.Next(1, 3);

	if (num_aleatorio == 2)
	{
		ficha = 'B';
		Console::SetCursorPosition(38, 17);
		cout << "La pieza del jugador " << nom1 << " será el color Blanco " << endl;
		Console::SetCursorPosition(38, 18);
		cout << "La pieza del jugador " << nom2 << " será el color Negro " << endl;

		opcion = 2;

	}
	if (num_aleatorio == 1)
	{
		ficha = 'B';

		Console::SetCursorPosition(38, 17);
		cout << "La pieza del jugador " << nom2 << " será el color Blanco " << endl;
		Console::SetCursorPosition(38, 18);
		cout << "La pieza del jugador " << nom1 << " será el color Negro " << endl;

		opcion = 1;
	}
}
void Pos_Tab(char ficha)
{
	switch (ficha)
	{
	case 'B':



		tablero[2][6] = 'N'; tablero[2][12] = 'N'; tablero[2][18] = 'N'; tablero[2][24] = 'N';
		tablero[5][3] = 'N'; tablero[5][9] = 'N'; tablero[5][15] = 'N'; tablero[5][21] = 'N';
		tablero[8][6] = 'N'; tablero[8][12] = 'N'; tablero[8][18] = 'N'; tablero[8][24] = 'N';

		tablero[17][3] = 'B'; tablero[17][9] = 'B'; tablero[17][15] = 'B'; tablero[17][21] = 'B';
		tablero[20][6] = 'B'; tablero[20][12] = 'B'; tablero[20][18] = 'B'; tablero[20][24] = 'B';
		tablero[23][3] = 'B'; tablero[23][9] = 'B'; tablero[23][15] = 'B'; tablero[23][21] = 'B';

		break;
	}
}


void Dib_Tab(int ficha, int& turno, int& colora)
{
	int filas, columnas;

	for (filas = 0; filas < 26; filas++)
	{
		for (columnas = 0; columnas < 27; columnas++)
		{
			Console::SetCursorPosition(columnas, filas);

			if (tablero[filas][columnas] == 3)
			{
				Console::BackgroundColor = ConsoleColor::Red;
				cout << ' ';
			}
			else
			{
				if (tablero[filas][columnas] == 1)
				{
					Console::BackgroundColor = ConsoleColor::White;
					cout << ' ';
				}

				else if (tablero[filas][columnas] == 8)
				{

					Console::BackgroundColor = ConsoleColor::Black;
					Console::ForegroundColor = ConsoleColor::White;
					cout << 'A';
				}
				else if (tablero[filas][columnas] == 10)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'B';
				}
				else if (tablero[filas][columnas] == 11)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'C';
				}
				else if (tablero[filas][columnas] == 12)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'D';
				}
				else if (tablero[filas][columnas] == 13)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'E';
				}
				else if (tablero[filas][columnas] == 14)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'F';
				}
				else if (tablero[filas][columnas] == 15)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'G';
				}
				else if (tablero[filas][columnas] == 16)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << 'H';
				}
				else if (tablero[filas][columnas] == 17)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)56;
				}
				else if (tablero[filas][columnas] == 18)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)55;
				}
				else if (tablero[filas][columnas] == 19)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)54;
				}
				else if (tablero[filas][columnas] == 20)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)53;
				}
				else if (tablero[filas][columnas] == 21)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)52;
				}
				else if (tablero[filas][columnas] == 22)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)51;
				}
				else if (tablero[filas][columnas] == 23)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)50;
				}
				else if (tablero[filas][columnas] == 24)
				{
					Console::BackgroundColor = ConsoleColor::Black;

					Console::ForegroundColor = ConsoleColor::White;
					cout << (char)49;
				}


			}

			if (tablero[filas][columnas] == 'B')
			{
				Console::ForegroundColor = ConsoleColor::DarkGray;
				cout << 'B';
				Console::ForegroundColor = ConsoleColor::White;
				Console::BackgroundColor = ConsoleColor::White;
			}
			if (tablero[filas][columnas] == 'N')
			{
				Console::ForegroundColor = ConsoleColor::DarkBlue;
				cout << 'N';
				Console::ForegroundColor = ConsoleColor::White;
				Console::BackgroundColor = ConsoleColor::White;

			}
			if (tablero[filas][columnas] == 'R' && filas == 2 || tablero[filas][columnas] == 'R')
			{
				Console::ForegroundColor = ConsoleColor::DarkGray;
				cout << 'R';
				Console::ForegroundColor = ConsoleColor::White;
				Console::BackgroundColor = ConsoleColor::White;

			}
			if (tablero[filas][columnas] == 'r' && filas == 23 || tablero[filas][columnas] == 'r')
			{
				Console::ForegroundColor = ConsoleColor::DarkBlue;
				cout << 'r';
				Console::ForegroundColor = ConsoleColor::White;
				Console::BackgroundColor = ConsoleColor::White;

			}
		}

	}
}
void Movimientos(int& Posx1, int& PosY1, int& PosX2, int& Posy2, char* jugador1, char* jugador2, char& ficha, char ficha_elegida, int& Opcion, int& turno, int& colora)
{
	char columnas1, columnas2;
	char filas1, filas2;
	int turnoA = 0, turnoB = 0;
	int PiezasComeA = 0, PiezasComeB = 0;
	do
	{
		Console::BackgroundColor = ConsoleColor::Black;
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(47, 1);
		cout << "--------------------------------------------" << endl;
		Console::SetCursorPosition(47, 17);
		cout << "--------------------------------------------" << endl;
		Console::SetCursorPosition(47, 2);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 3);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 4);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 5);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 6);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 7);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 8);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 9);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 10);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 11);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 12);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 13);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 14);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 15);
		cout << "|" << endl;
		Console::SetCursorPosition(47, 16);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 2);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 3);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 4);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 5);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 6);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 7);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 8);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 9);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 10);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 11);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 12);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 13);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 14);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 15);
		cout << "|" << endl;
		Console::SetCursorPosition(90, 16);
		cout << "|" << endl;

		Console::SetCursorPosition(48, 12);
		cout << "-----------------------------------------" << endl;

		Console::BackgroundColor = ConsoleColor::Black;
		Console::ForegroundColor = ConsoleColor::White;

		if (Opcion == 2)
		{


			if (turno % 2 == 0)
			{
				Console::SetCursorPosition(56, 2);
				cout << "Pieza Blanca" << " | " << "Pieza Negra" << endl;
				Console::SetCursorPosition(48, 3);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 5);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 12);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 14);
				cout << "------------------------------------------" << endl;

				Console::SetCursorPosition(48, 4);
				cout << " Turno";
				Console::SetCursorPosition(56, 4);
				Console::ForegroundColor = ConsoleColor::DarkRed;
				cout << jugador1;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(68, 4);
				cout << " | ";
				Console::SetCursorPosition(72, 4);
				cout << jugador2 << endl << endl;


				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(49, 13);
				cout << "Nº MOVS";
				Console::SetCursorPosition(68, 13);
				cout << " | ";
				Console::SetCursorPosition(60, 13);
				cout << turnoA;
				Console::SetCursorPosition(76, 13);
				cout << turnoB;
				Console::SetCursorPosition(49, 15);
				cout << "Pieza";
				Console::SetCursorPosition(68, 15);
				cout << " | ";
				Console::SetCursorPosition(68, 16);
				cout << " | ";
				Console::SetCursorPosition(51, 16);
				cout << "comida";
				Console::SetCursorPosition(60, 16);
				cout << PiezasComeA;
				Console::SetCursorPosition(76, 16);
				cout << PiezasComeB;
				turnoA++;

				if (PiezasComeA == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << endl;

				}
				if (PiezasComeB == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador2 << endl;

				}
				if (PiezasComeA == 11 && PiezasComeB == 11)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << " EMPATE " << jugador2 << endl;
				}
			}
			else
			{
				Console::SetCursorPosition(56, 2);
				cout << "Pieza Blanca" << " | " << "Pieza Negra" << endl;
				Console::SetCursorPosition(48, 3);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 5);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 12);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 14);
				cout << "------------------------------------------" << endl;

				Console::SetCursorPosition(48, 4);
				cout << " Turno";
				Console::SetCursorPosition(56, 4);
				cout << jugador1;
				Console::SetCursorPosition(68, 4);
				cout << " | ";
				Console::SetCursorPosition(72, 4);
				Console::ForegroundColor = ConsoleColor::DarkRed;
				cout << jugador2 << endl << endl;
				Console::ForegroundColor = ConsoleColor::White;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(49, 13);
				cout << "Nº MOVS";
				Console::SetCursorPosition(68, 13);
				cout << " | ";
				Console::SetCursorPosition(60, 13);
				cout << turnoA;
				Console::SetCursorPosition(76, 13);
				cout << turnoB;
				Console::SetCursorPosition(49, 15);
				cout << "Pieza";
				Console::SetCursorPosition(68, 15);
				cout << " | ";
				Console::SetCursorPosition(68, 16);
				cout << " | ";
				Console::SetCursorPosition(51, 16);
				cout << "comida";
				Console::SetCursorPosition(60, 16);
				cout << PiezasComeA;
				Console::SetCursorPosition(76, 16);
				cout << PiezasComeB;
				turnoB++;

				if (PiezasComeA == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << endl;

				}
				if (PiezasComeB == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador2 << endl;

				}
				if (PiezasComeA == 11 && PiezasComeB == 11)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << " EMPATE " << jugador2 << endl;
				}
			}
		}
		if (Opcion == 1)
		{


			if (turno % 2 == 0)
			{
				Console::SetCursorPosition(56, 2);
				cout << "Pieza Blanca" << " | " << "Pieza Negra" << endl;
				Console::SetCursorPosition(48, 3);
				cout << "-----------------------------------------" << endl;
				Console::SetCursorPosition(48, 5);
				cout << "-----------------------------------------" << endl;
				Console::SetCursorPosition(48, 12);
				cout << "-----------------------------------------" << endl;
				Console::SetCursorPosition(48, 14);
				cout << "------------------------------------------" << endl;

				Console::SetCursorPosition(48, 4);
				cout << " Turno";
				Console::SetCursorPosition(56, 4);
				Console::ForegroundColor = ConsoleColor::DarkRed;
				cout << jugador2;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(68, 4);
				cout << " | ";
				Console::SetCursorPosition(72, 4);
				cout << jugador1 << endl << endl;

				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(49, 13);
				cout << "Nº MOVS";
				Console::SetCursorPosition(68, 13);
				cout << " | ";
				Console::SetCursorPosition(60, 13);
				cout << turnoA;
				Console::SetCursorPosition(76, 13);
				cout << turnoB;
				Console::SetCursorPosition(49, 15);
				cout << "Pieza";
				Console::SetCursorPosition(68, 15);
				cout << " | ";
				Console::SetCursorPosition(68, 16);
				cout << " | ";
				Console::SetCursorPosition(51, 16);
				cout << "comida";
				Console::SetCursorPosition(60, 16);
				cout << PiezasComeA;
				Console::SetCursorPosition(76, 16);
				cout << PiezasComeB;
				turnoA++;
				if (PiezasComeA == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador2 << endl;

				}
				if (PiezasComeB == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << endl;

				}
				if (PiezasComeA == 11 && PiezasComeB == 11)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << " EMPATE " << jugador2 << endl;
				}
			}
			else
			{
				Console::SetCursorPosition(56, 2);
				cout << "Pieza Blanca" << " | " << "Pieza Negra" << endl;
				Console::SetCursorPosition(48, 3);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 5);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 12);
				cout << "------------------------------------------" << endl;
				Console::SetCursorPosition(48, 14);
				cout << "------------------------------------------" << endl;

				Console::SetCursorPosition(48, 4);
				cout << " Turno";
				Console::SetCursorPosition(56, 4);
				cout << jugador2;
				Console::SetCursorPosition(68, 4);
				cout << " | ";
				Console::SetCursorPosition(72, 4);
				Console::ForegroundColor = ConsoleColor::DarkRed;
				cout << jugador1 << endl << endl;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(49, 13);
				cout << "Nº MOVS";
				Console::SetCursorPosition(68, 13);
				cout << " | ";

				Console::SetCursorPosition(60, 13);
				cout << turnoA;
				Console::SetCursorPosition(76, 13);
				cout << turnoB;
				Console::SetCursorPosition(49, 15);
				cout << "Pieza";
				Console::SetCursorPosition(68, 15);
				cout << " | ";
				Console::SetCursorPosition(68, 16);
				cout << " | ";
				Console::SetCursorPosition(51, 16);
				cout << "comida";
				Console::SetCursorPosition(60, 16);
				cout << PiezasComeA;
				Console::SetCursorPosition(76, 16);
				cout << PiezasComeB;
				turnoB++;

				if (PiezasComeA == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador2 << endl;

				}
				if (PiezasComeB == 12)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << endl;

				}
				if (PiezasComeA == 11 && PiezasComeB == 11)
				{
					Console::Clear();
					Console::SetWindowSize(81, 26);
					Ganador();

					Console::SetCursorPosition(25, 18);
					cout << jugador1 << " EMPATE " << jugador2 << endl;
				}

			}
		}
		if (PiezasComeA != 12 || PiezasComeB != 12)
		{

			do
			{
				Console::SetCursorPosition(61, 6);
				cout << "Ficha a seleccionar" << endl;
				Console::SetCursorPosition(62, 7);
				cout << "Columna: "; cin >> columnas1;
				columnas1 = toupper(columnas1);
			} while (columnas1 != 'A' && columnas1 != 'B' && columnas1 != 'C' && columnas1 != 'D' && columnas1 != 'E' && columnas1 != 'F' && columnas1 != 'G' && columnas1 != 'H');

			do
			{
				Console::SetCursorPosition(62, 8);
				cout << "Fila: "; cin >> filas1;
			} while (filas1 != '1' && filas1 != '2' && filas1 != '3' && filas1 != '4' && filas1 != '5' && filas1 != '6' && filas1 != '7' && filas1 != '8');

			do
			{
				Console::SetCursorPosition(61, 9);
				cout << "Casilla a mover" << endl;
				Console::SetCursorPosition(62, 10);
				cout << "Columna : "; cin >> columnas2;
				columnas2 = toupper(columnas2);
			} while (columnas2 != 'A' && columnas2 != 'B' && columnas2 != 'C' && columnas2 != 'D' && columnas2 != 'E' && columnas2 != 'F' && columnas2 != 'G' && columnas2 != 'H');

			do
			{
				Console::SetCursorPosition(62, 11);
				cout << "Fila: "; cin >> filas2;
			} while (filas2 != '1' && filas2 != '2' && filas2 != '3' && filas2 != '4' && filas2 != '5' && filas2 != '6' && filas2 != '7' && filas2 != '8');
		}
		switch (columnas1)
		{
		case 'A':
			PosY1 = 3; break;
		case 'B':
			PosY1 = 6; break;
		case 'C':
			PosY1 = 9; break;
		case 'D':
			PosY1 = 12; break;
		case 'E':
			PosY1 = 15; break;
		case 'F':
			PosY1 = 18; break;
		case 'G':
			PosY1 = 21; break;
		case 'H':
			PosY1 = 24; break;
		}
		switch (filas1)
		{
		case '8':
			Posx1 = 2; break;
		case '7':
			Posx1 = 5; break;
		case '6':
			Posx1 = 8; break;
		case '5':
			Posx1 = 11; break;
		case '4':
			Posx1 = 14; break;
		case '3':
			Posx1 = 17; break;
		case '2':
			Posx1 = 20; break;
		case '1':
			Posx1 = 23; break;
		}


		switch (columnas2)
		{
		case 'A':
			Posy2 = 3; break;
		case 'B':
			Posy2 = 6; break;
		case 'C':
			Posy2 = 9; break;
		case 'D':
			Posy2 = 12; break;
		case 'E':
			Posy2 = 15; break;
		case 'F':
			Posy2 = 18; break;
		case 'G':
			Posy2 = 21; break;
		case 'H':
			Posy2 = 24; break;
		}
		switch (filas2)
		{
		case '8':
			PosX2 = 2; break;
		case '7':
			PosX2 = 5; break;
		case '6':
			PosX2 = 8; break;
		case '5':
			PosX2 = 11; break;
		case '4':
			PosX2 = 14; break;
		case '3':
			PosX2 = 17; break;
		case '2':
			PosX2 = 20; break;
		case '1':
			PosX2 = 23; break;
		}




		switch (ficha)
		{
		case 'N':
			if (tablero[Posx1][PosY1] == 'N')
			{
				if (tablero[PosX2][Posy2] == 3)
				{



					if ((PosX2 == Posx1 + 3 && PosY1 + 3 == Posy2) || (PosX2 == Posx1 + 3 && PosY1 - 3 == Posy2))
					{

						Console::ForegroundColor = ConsoleColor::Red;
						tablero[PosX2][Posy2] = 'N';



						Console::BackgroundColor = ConsoleColor::Red;
						tablero[Posx1][PosY1] = 3;



						Console::BackgroundColor = ConsoleColor::Black;
						turno++;
						ficha = 'B';




						if (tablero[23][3] == 'N')tablero[23][3] = 'r';
						else if (tablero[23][9] == 'N')tablero[23][9] = 'r';
						else if (tablero[23][15] == 'N')tablero[23][15] = 'r';
						else if (tablero[23][21] == 'N')tablero[23][21] = 'r';



					}
					else


						if ((PosX2 == Posx1 + 6 && PosY1 + 6 == Posy2) && tablero[PosX2 - 3][Posy2 - 3] == 'B' ||
							(PosX2 == Posx1 + 6 && PosY1 - 6 == Posy2) && tablero[PosX2 - 3][Posy2 + 3] == 'B')
						{
							tablero[PosX2][Posy2] = 'N';
							tablero[Posx1][PosY1] = 3;
							bool DobleComer = false;

							if (PosX2 == Posx1 + 6 && PosY1 + 6 == Posy2)
							{
								tablero[PosX2 - 3][Posy2 - 3] = 3;
								if ((tablero[PosX2 + 6][Posy2 - 6] == 3) && (tablero[PosX2 + 3][Posy2 - 3] == 'B'))
								{
									DobleComer = true;
								}
								else if ((tablero[PosX2 + 6][Posy2] == 3) && (tablero[PosX2 + 3][Posy2 - 3] == 'B'))
								{
									DobleComer = true;

								}
								else if ((tablero[PosX2 + 6][Posy2] == 3) && (tablero[PosX2 + 3][Posy2 + 3] == 'B'))
								{
									DobleComer = true;

								}
								else if ((tablero[PosX2 + 6][Posy2 + 6] == 3) && (tablero[PosX2 + 3][Posy2 + 3] == 'B'))
								{
									DobleComer = true;

								}


							}
							else if (PosX2 == Posx1 + 6 && PosY1 - 6 == Posy2)
							{
								tablero[PosX2 - 3][Posy2 + 3] = 3;
								if ((tablero[PosX2 + 6][Posy2 - 6] == 3) && (tablero[PosX2 + 3][Posy2 - 3] == 'B'))
								{
									DobleComer = true;
								}
								else if ((tablero[PosX2 + 6][Posy2] == 3) && (tablero[PosX2 + 3][Posy2 - 3] == 'B'))
								{
									DobleComer = true;

								}
								else if ((tablero[PosX2 + 6][Posy2] == 3) && (tablero[PosX2 + 3][Posy2 + 3] == 'B'))
								{
									DobleComer = true;

								}
								else if ((tablero[PosX2 + 6][Posy2 + 6] == 3) && (tablero[PosX2 + 3][Posy2 + 3] == 'B'))
								{
									DobleComer = true;

								}


							}

							if (DobleComer == true)
							{
								turno = 1;
								PiezasComeB++;

								ficha = 'N';
							}
							else
							{
								turno++;
								PiezasComeB++;
								ficha = 'B';
							}

						}



				}
				else
				{
					Console::Clear();
					Console::SetCursorPosition(30, 8);
					cout << "Movimiento no valido" << endl;
					Console::SetCursorPosition(60, 8);
					cout << "Movimiento no valido" << endl;
					turnoA--;
					turnoB--;
					getch();

					getch();
				}
				if (tablero[Posx1][PosY1] == 'r')
				{
					bool fichacolor = false;
					if (ficha_elegida == 'N')
					{
						if (tablero[PosX2][Posy2] == 3)
						{
							for (int i = 1; i <= 8; i++)
							{
								if ((Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2 || Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2 ||
									Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2 || Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2) && fichacolor == false)
								{
									for (int k = 1; k <= 8; k++)
									{
										if (Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 + 3 * k] != 'N') ||
											Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 - 3 * k] != 'N') ||
											Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 + 3 * k] != 'N') ||
											Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 - 3 * k] != 'N'))
										{

											if (Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 - 5 * k] == 'B') ||
												Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 + 5 * k] == 'B') ||
												Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 - 5 * k] == 'B') ||
												Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 + 5 * k] == 'B'))
											{
												if (Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2)
												{
													tablero[PosX2 - 3 * k][Posy2 - 3 * k] = 3;
												}
												else if (Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2)
												{
													tablero[PosX2 - 3 * k][Posy2 + 3 * k] = 3;
												}
												else if (Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2)
												{
													tablero[PosX2 + 3 * k][Posy2 - 3 * k] = 3;
												}
												else if (Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2)
												{
													tablero[PosX2 + 3 * k][Posy2 + 3 * k] = 3;
												}
												tablero[Posx1][PosY1] = 3;
												tablero[PosX2][Posy2] = 'r';
												fichacolor = true;
												turno++;
												turnoB++;
												PiezasComeB++;
												ficha = 'B';
											}
											else
											{
												tablero[Posx1][PosY1] = 3;
												tablero[PosX2][Posy2] = 'r';
												fichacolor = true;
												turno++;
												turnoB++;
												PiezasComeB++;
												ficha = 'B';
											}

										}
									}
								}
							}
						}


					}

				}

				break;
			}



		case 'B':
			if (tablero[Posx1][PosY1] == 'B')
			{
				if (tablero[PosX2][Posy2] == 3)
				{

					if ((PosX2 == Posx1 - 3 && PosY1 - 3 == Posy2) || (PosX2 == Posx1 - 3 && PosY1 + 3 == Posy2))
					{

						Console::ForegroundColor = ConsoleColor::Red;
						tablero[PosX2][Posy2] = 'B';



						Console::BackgroundColor = ConsoleColor::Red;
						tablero[Posx1][PosY1] = 3;



						Console::BackgroundColor = ConsoleColor::Black;
						turno++;
						ficha = 'N';




						if (tablero[2][6] == 'B')tablero[2][6] = 'R';
						else if (tablero[2][12] == 'B')tablero[2][12] = 'R';
						else if (tablero[2][18] == 'B')tablero[2][18] = 'R';
						else if (tablero[2][24] == 'B')tablero[2][24] = 'R';



					}

					else if
						((PosX2 == Posx1 - 6 && PosY1 + 6 == Posy2) && tablero[PosX2 + 3][Posy2 - 3] == 'N' ||
							(PosX2 == Posx1 - 6 && PosY1 - 6 == Posy2) && tablero[PosX2 + 3][Posy2 + 3] == 'N')
					{
						tablero[PosX2][Posy2] = 'B';
						tablero[Posx1][PosY1] = 3;

						bool DobleComer = false;
						if (PosX2 == (Posx1 - 6) && (PosY1 + 6) == Posy2)
						{
							tablero[PosX2 + 3][Posy2 - 3] = 3;
							if ((tablero[PosX2 - 6][Posy2 - 6] == 3) && (tablero[PosX2 - 3][Posy2 - 3] == 'N'))
							{
								DobleComer = true;
							}
							else if ((tablero[PosX2 - 6][Posy2] == 3) && (tablero[PosX2 - 3][Posy2 - 3] == 'N'))
							{
								DobleComer = true;

							}
							else if ((tablero[PosX2 - 6][Posy2] == 3) && (tablero[PosX2 - 3][Posy2 + 3] == 'N'))
							{
								DobleComer = true;

							}
							else if ((tablero[PosX2 - 6][Posy2 + 6] == 3) && (tablero[PosX2 - 3][Posy2 + 3] == 'N'))
							{
								DobleComer = true;

							}


						}

						if (PosX2 == (Posx1 - 6) && (PosY1 - 6) == Posy2)
						{
							tablero[PosX2 + 3][Posy2 + 3] = 3;
							if ((tablero[PosX2 - 6][Posy2 - 6] == 3) && (tablero[PosX2 - 3][Posy2 - 3] == 'N'))
							{
								DobleComer = true;

							}
							else if ((tablero[PosX2 - 6][Posy2] == 3) && (tablero[PosX2 - 3][Posy2 - 3] == 'N'))
							{
								DobleComer = true;
							}
							else if ((tablero[PosX2 - 6][Posy2] == 3) && (tablero[PosX2 - 3][Posy2 + 3] == 'N'))
							{
								DobleComer = true;

							}
							else if ((tablero[PosX2 - 6][Posy2 + 6] == 3) && (tablero[PosX2 - 3][Posy2 + 3] == 'N'))
							{
								DobleComer = true;

							}


						}
						if (DobleComer == true)
						{
							turno = 0;
							PiezasComeA++;
							ficha = 'N';
						}
						else
						{
							turno++;
							PiezasComeA++;
							ficha = 'N';
						}

					}
				}
			}
			else
			{
				Console::Clear();
				Console::SetCursorPosition(30, 8);
				cout << "Movimiento no valido" << endl;
				Console::SetCursorPosition(60, 8);
				cout << "Movimiento no valido" << endl;
				getch();
			}
			if (tablero[Posx1][PosY1] == 'R')
			{
				bool fichacolor = false;
				if (ficha_elegida == 'B')
				{
					if (tablero[PosX2][Posy2] == 3)
					{
						for (int i = 1; i <= 8; i++)
						{
							if ((Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2 || Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2 ||
								Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2 || Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2) && fichacolor == false)
							{
								for (int k = 1; k <= 8; k++)
								{
									if (Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 + 3 * k] != 'B') ||
										Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 - 3 * k] != 'B') ||
										Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 + 3 * k] != 'B') ||
										Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 - 3 * k] != 'B'))
									{

										if (Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 - 3 * k] == 'N') ||
											Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 - 3 * k][Posy2 + 3 * k] == 'N') ||
											Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 - 3 * k] == 'N') ||
											Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2 && (tablero[PosX2 + 3 * k][Posy2 + 3 * k] == 'N'))
										{
											if (Posx1 + 3 * i == PosX2 && PosY1 + 3 * i == Posy2)
											{
												tablero[PosX2 - 3 * k][Posy2 - 3 * k] = 3;
											}
											else if (Posx1 + 3 * i == PosX2 && PosY1 - 3 * i == Posy2)
											{
												tablero[PosX2 - 3 * k][Posy2 + 3 * k] = 3;
											}
											else if (Posx1 - 3 * i == PosX2 && PosY1 + 3 * i == Posy2)
											{
												tablero[PosX2 + 3 * k][Posy2 - 3 * k] = 3;
											}
											else if (Posx1 - 3 * i == PosX2 && PosY1 - 3 * i == Posy2)
											{
												tablero[PosX2 + 3 * k][Posy2 + 3 * k] = 3;
											}
											tablero[Posx1][PosY1] = 3;
											tablero[PosX2][Posy2] = 'R';
											fichacolor = true;
											turno++;
											turnoB++;
											PiezasComeB++;
											ficha = 'N';
										}
										else
										{
											tablero[Posx1][PosY1] = 3;
											tablero[PosX2][Posy2] = 'R';
											fichacolor = true;
											turno++;
											turnoB++;
											PiezasComeB++;
											ficha = 'N';
										}
									}
								}
							}
						}
					}

				}
			}
			break;
		}


		system("cls");

		Dib_Tab(ficha_elegida, turno, colora);
	} while (true);




}


void dibujarLogo()
{
	int a = 1;
	int b = 1;
	for (int i = 0; i < 25; i++)   
	{
		for (int j = 0; j < 80; j++)
		{
			Console::SetCursorPosition(j, i);
			if (Logo[i][j] == 1)
			{
				Console::BackgroundColor = ConsoleColor::DarkRed;
				cout << " ";
			}
			else if (Logo[i][j] == 0)
			{
				Console::BackgroundColor = ConsoleColor::White;
				cout << " ";
			}

		}
		cout << endl;

	}
}

int main()
{


	int a;
	do
	{

		setlocale(LC_ALL, "esp");
		system("cls");


		Console::BackgroundColor = ConsoleColor::Black;

		Console::SetWindowSize(120, 30);
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(45, 10);

		cout << "Menú de opciones: " << endl;
		Console::SetCursorPosition(45, 11);

		cout << "(1)-------Instrucciones " << endl;
		Console::SetCursorPosition(45, 12);

		cout << "(2)---------------Jugar " << endl;
		Console::SetCursorPosition(45, 13);

		cout << "(3)---------------Salir" << endl;
		Console::SetCursorPosition(45, 14);
		cout << "(4)------------Creditos" << endl;
		Console::SetCursorPosition(55, 26);
		cout << "innova" << endl;


		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(40, 16);
		cout << "====================================";
		Console::SetCursorPosition(75, 10);
		cout << "|";
		Console::SetCursorPosition(75, 11);
		cout << "|";
		Console::SetCursorPosition(75, 12);
		cout << "|";
		Console::SetCursorPosition(75, 13);
		cout << "|";
		Console::SetCursorPosition(75, 14);
		cout << "|";
		Console::SetCursorPosition(75, 15);
		cout << "|";
		Console::SetCursorPosition(40, 10);
		cout << "|";
		Console::SetCursorPosition(40, 11);
		cout << "|";
		Console::SetCursorPosition(40, 12);
		cout << "|";
		Console::SetCursorPosition(40, 13);
		cout << "|";
		Console::SetCursorPosition(40, 14);
		cout << "|";
		Console::SetCursorPosition(40, 15);
		cout << "|";
		Console::SetCursorPosition(40, 9);
		cout << "====================================";
		Console::SetCursorPosition(50, 25);
		cout << "Exígete," << endl;
		Console::SetCursorPosition(59, 27);
		cout << " UPC" << endl;

		Console::ForegroundColor = ConsoleColor::White;

		Console::SetCursorPosition(45, 15);
		cin >> a;
	} while (a < 1 || a>4);

	switch (a)
	{
	case 1:
	{
		int b;

		do
		{
			setlocale(LC_ALL, "esp");
			Console::CursorVisible = false;
			Console::Clear();
			Console::SetCursorPosition(27, 8);
			cout << "(1): Ingresar los nombres de los dos jugadores " << endl;
			Console::SetCursorPosition(27, 9);
			cout << "(2) Seleccionar el color de las piezas de los jugadores entre Blanco y Negro " << endl;
			Console::SetCursorPosition(27, 10);
			cout << "(3) Cada jugador dispone de 12 fichas de un mismo color  " << endl;
			Console::SetCursorPosition(27, 11);
			cout << "(4) Se juega por turnos alternos. Empieza a jugar quien tiene las fichas claras(blancas)" << endl;
			Console::SetCursorPosition(27, 12);
			cout << "(5) Las piezas se mueven de forma diagonal" << endl;
			Console::SetCursorPosition(27, 13);
			cout << "(6) Para comer una pieza avanza dos casillas, y avanza a una casilla libre" << endl;
			Console::SetCursorPosition(27, 14);
			cout << "(7) Si una ficha llega hasta el borde del lado contrario del tablero, se convierte en reina" << endl;
			Console::SetCursorPosition(27, 15);
			cout << "(8) Un jugador se queda sin piezas sobre el tablero, por lo tanto, ha perdido" << endl;
			Console::SetCursorPosition(27, 16);
			cout << "(9) Disfrutar del juego " << endl;
			Console::SetCursorPosition(32, 18);
			cout << "¿Listo para jugar?" << endl;
			Console::SetCursorPosition(32, 19);
			cout << "(1)--Sí" << endl;;
			Console::SetCursorPosition(32, 20);
			cout << "(2)----No" << endl;
			Console::SetCursorPosition(32, 21);
			cin >> b;
		} while (b < 1 || b>2);
		switch (b)
		{
		case 1:
		{
			main();
		}
		case 2:
		{
			main();
		}
		default:
			break;
		}
		break;
	}
	case 2:
	{
		Console::Clear();

		int PosFi1, PosFi2, Posco1, PosCo2;
		int opcion = 0;
		char* jugador1;
		char* jugador2;
		char ficha;
		int colora;
		int turno = 0;
		jugador1 = new char[15];
		jugador2 = new char[15];

		Ing_Nomb(jugador1, jugador2);
		Color_Fich(ficha, jugador1, jugador2, opcion);

		getch();
		system("cls");

		Pos_Tab(ficha);
		Dib_Tab(ficha, turno, colora);

		char ficha_elegida = ficha;



		Movimientos(PosFi1, Posco1, PosFi2, PosCo2, jugador1, jugador2, ficha, ficha_elegida, opcion, turno, colora);


		break;
	}
	case 3:

	{
		Console::Clear();
		Console::SetCursorPosition(45, 11);
		cout << "Vuelve pronto onichan";

		getch();
		return 0;

	}
	case 4:
	{
		Console::Clear();

		Console::ForegroundColor = ConsoleColor::Black;

		Console::SetWindowSize(90, 35);
		dibujarLogo();
		Console::SetCursorPosition(25, 15);

		cout << "Integrante: " << endl;;
		Console::SetCursorPosition(22, 17);

		cout << "Walter Emilio Delgado Yucra-U20201E677" << endl;
		Console::SetCursorPosition(32, 19);
		cout << "Presione una tecla" << endl;
		Console::BackgroundColor = ConsoleColor::White;


		Console::SetCursorPosition(34, 21);
		cout << "Exígete," << endl;
		Console::SetCursorPosition(37, 22);
		cout << "innova" << endl;
		Console::SetCursorPosition(39, 23);
		cout << " UPC" << endl;


		getch();
		return main();
	}






	break;
	}



	getch();
	return 0;
}