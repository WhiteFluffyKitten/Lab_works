#include "MTreeNode.h"

int MTreeNode::i() const
{
	return m_i;
}
int MTreeNode::j() const
{
	return m_j;
}

const   MTreeNode* MTreeNode::parent() const
{
	return m_parent;
}
const MTreeNode* MTreeNode::child(int i) const
{
	return m_children[i];
}
int MTreeNode::distance() const
{
	return m_distance;
}
int MTreeNode::childCount() const
{
	int counter = 0;
	for (int i = 0; i < 2; i++)
	{
		if (m_children[i] != nullptr)
			counter++;
	}
	return counter;
}
bool MTreeNode::addChild(int i, int j)
{
	for (int ind = 0; ind < 2; ind++)
	{
		if (m_children[ind] == nullptr)
		{
			m_children[ind] = new MTreeNode(this);
			m_children[ind]->m_i = i;
			m_children[ind]->m_j = j;
			return true;
		}
	}
	return false;
}
MTreeNode* MTreeNode::hasChild(int i, int j)
{
	for (int ind = 0; ind < 2; ind++)
	{
		if (m_children[ind] != nullptr
			&& m_children[ind] ->i() == i
			&& m_children[ind] ->j() == j)
			return m_children[ind];
	}
	return nullptr;
}
MTreeNode* MTreeNode::beginTree(int i, int j)
{
	auto node = new MTreeNode(nullptr);
	node->m_i = i;
	node->m_j = j;
	return node;
}

MTreeNode::MTreeNode(MTreeNode* parent)
{
	if (parent == nullptr)
		return;
	m_parent = parent;
	m_distance = parent->distance() + 1;
}
