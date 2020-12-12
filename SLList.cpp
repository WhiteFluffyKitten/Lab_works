#include "SLList.h"

SLList::SLList() {};

SLList:: ~SLList()
{
	if (hasNext())
		delete next();
}

int SLList::getData() const
{
	return m_data;
}

void SLList::setData(int data)
{
	m_data = data;
}

SLList* SLList::next() const
{
	return m_nextElem;
}
bool SLList::hasNext() const
{
	return (m_nextElem != nullptr);
}
SLList* SLList::beginList(int data)
{
	auto list = new SLList();
	list->setData(data);
	return list;
}
SLList* SLList::addElement(int data)
{
	/*if (hasNext()) return nullptr;*/
	m_nextElem = new SLList();
	setData(data);
	return m_nextElem;
}
void  SLList::removeNext()
{
	if (hasNext())
	{
		auto n = next()->next();
		next()->m_nextElem = nullptr;
		delete next();
		m_nextElem = n;
	}
}

