#include <iostream>
using namespace std;

class MTreeNode
{
private:
	int m_i, m_j;
	MTreeNode* m_parent;
	MTreeNode* m_children[2];
	int m_distance;
	MTreeNode(MTreeNode* parent);
public:
	int i() const;
	int j() const;
	const MTreeNode* parent() const;
	const MTreeNode* child(int i) const;
	int distance() const;
	int childCount() const;
	bool addChild(int i, int j);
	MTreeNode* hasChild(int i, int j);
	static MTreeNode* beginTree(int i, int j);
};