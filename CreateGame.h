#pragma once
#include "CreateGame.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <vector>

using namespace std;

struct pos
{
	int x;
	int y;
};

class CreateGame
{	

public:
	static vector<vector<char>> maze;
	void setCursorPosition(int x, int y);
	void printMaze();
	void GameLoop();
	void fileToVec();
	pos findPlayer();

};

