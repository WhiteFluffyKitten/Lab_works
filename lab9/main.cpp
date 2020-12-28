#include "maze.h"
#include "MTreeNode.h"
#include <algorithm>
using namespace std;
void AddChildTrees(MTreeNode* tree, Maze& maze, int* distArr, int n)
{
	int i = tree->i();
	int j = tree->j();
	int distance = tree->distance();
	auto c = maze.cell(i, j);
	distArr[i * n + j] = distance;
	if (c.right())
	{
		tree->addChild(i, j + 1);
		AddChildTrees(tree->hasChild(i, j + 1), maze, distArr, n);
	}
	if (c.down())
	{
		tree->addChild(i + 1, j);
		AddChildTrees(tree->hasChild(i + 1, j), maze, distArr, n);
	}
}

void PrintDistanceMap(int* distArr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << distArr[i * n + j] << " ";
		cout << endl;
	}
}

int main()
{
	int n = 5;
	int m = 5;
	auto maze = new Maze(n, m);

	for (int centre = 0; centre < min(n, m); centre++)
	{
		for (int i = centre + 1; i < n; i++)
		{
			maze->makeConnection(i - 1, centre, i, centre);
		}
		for (int j = centre + 1; j < n; j++)
		{
			maze->makeConnection(centre, j - 1, centre, j);
		}
		maze->makeConnection(centre, centre + 1, centre + 1, centre + 1);
	}
	maze->printMaze();

	auto* distArr = new int[n * m];
	auto tree = MTreeNode::beginTree(0, 0);
	AddChildTrees(tree, *maze, distArr, n);
	PrintDistanceMap(distArr, n, m);
}



