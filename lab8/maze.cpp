#include "maze.h"
Maze::Maze(int n, int m)
{
	m_field = new MCell[n * m];
	this->n = n;
	this->m = m;
}
const MCell& Maze::cell(int i, int j) const
{
	return m_field[i * n + j];
}

int Maze::GetN() const
{
	return n;
}
int Maze::GetM() const
{
	return m;
}
bool Maze::hasConnection(int i1, int j1, int i2, int j2)
{
	if (abs(j2 - j1) == 0 && abs(i2 - i1) == 1)
		return cell(min(i1, i2), j1).m_down;
	if (abs(i2 - i1) == 0 && abs(j2 - j1) == 1)
		return cell(i1, min(j1, j2)).m_right;
	return false;
}
bool Maze::makeConnection(int i1, int j1, int i2, int j2)
{
	if (abs(i2 - i1) == 0 && abs(j2 - j1) == 1)
	{
		m_field[min(j1, j2) + i1 * n].m_right = true;
		return true;
	}
	if (abs(j2 - j1) == 0 && abs(i2 - i1) == 1)
	{
		m_field[min(j1, j2) + i1 * n].m_down = true;
		return true;
	}
	return false;
}
bool Maze::removeConnection(int i1, int j1, int i2, int j2)
{
	{
		if (abs(i2 - i1) == 0 && abs(j2 - j1) == 1)
		{
			m_field[min(j1, j2) + i1 * n].m_right = false;
			return true;
		}
		if (abs(j2 - j1) == 0 && abs(i2 - i1) == 1)
		{
			m_field[min(j1, j2) + i1 * n].m_down = false;
			return true;
		}
		return false;
	}
}
void Maze::printMaze()
{
	for (int i = 0; i < GetN(); i++)
	{
		for (int j = 0; j < GetM(); j++)
		{
			bool up = false;
			bool down = false;
			bool right = false;
			bool left = false;

			if (i > 0)
				up = hasConnection(i, j, i - 1, j);
			if (i < GetN() - 1)
				down = hasConnection(i, j, i + 1, j);
			if (j > 0)
				left = hasConnection(i, j, i, j - 1);
			if (j < GetM() - 1)
				right = hasConnection(i, j, i, j + 1);

			char ch = 248;
			if (up && down)
			{
				if (!left && !right)
					ch = 179;
				if (left && !right)
					ch = 180;
				if (!left && right)
					ch = 195;
				if (left && right)
					ch = 197;
			}

			else if (!up && down)
			{
				if (left && !right)
					ch = 191;
				if (left && right)
					ch = 184;
				if (!left && right)
					ch = 218;
			}
			else if (up && !down)
			{
				if (!left && right)
					ch = 192;
				if (left && right)
					ch = 193;
				if (left && !right)
					ch = 217;
			}
			else if (!up && !down && left && right)
				ch = 196;
			cout << ch;
		}
		cout << endl;
	}
}
Maze:: ~Maze()
{
	delete m_field;
}
