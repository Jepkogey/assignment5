#pragma once
#include <iostream>
#include <limits>
#include <fstream>
using namespace std;

class Position
{
public:
	Position()
	{
		x = y = homeY = 0;
		xMax = Ymax = 10;
	}