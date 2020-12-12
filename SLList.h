#pragma once
#include <iostream>;
using namespace std;

class SLList
{
private:
	SLList* m_nextElem;
	int m_data;	
	SLList();
public:
	
	~SLList();
	int getData() const;
	void setData(int data);
	SLList* next() const;
	bool hasNext() const;
	static SLList* beginList(int data);
	SLList* addElement(int data);
	void removeNext();
};