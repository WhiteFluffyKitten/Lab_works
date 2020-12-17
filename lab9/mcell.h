#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

class MCell
{
private:
	bool m_down = false;
	bool m_right = false;
	MCell();
public:
	bool down();
	bool right();
	friend class Maze;
};