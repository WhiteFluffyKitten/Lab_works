#include "maze.h"

int main()
{
	int n = 5;
	int m = 5;
	auto maze = new Maze(n, m);
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2; j++)
		{
			maze->makeConnection(i, i+j,i+j,i+1);
		}
	maze->printMaze();
}
