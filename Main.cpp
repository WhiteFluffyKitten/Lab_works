#include "SLList.h"

void printSLList(const SLList* list)
{
	auto curr = list;
	while (curr != nullptr)
	{
		cout << curr->getData() << " ";
		curr = curr->next();
	}
}

SLList* MakeList(int length)
{
	auto list = SLList::beginList(rand() % 5 + 0);
	auto curr = list;
	for (int i = 1; i < length; i++)
	{
		curr->addElement(rand() % 5 + 0);
		if (curr->hasNext())
			curr = curr->next();
	}
	return list;
}

void RemoveDuplicates(SLList* list)
{
	bool arr[5];
	auto curr = list;
	arr[curr->getData()] = true;
	while (curr->hasNext())
	{

		for (int i = 0; i < 5; i++)
		{

			if (curr->next()->getData() == i)
			{

				if (arr[i] == true)
				{
					curr->removeNext();
					break;
				}
				else
				{
					arr[i] = true;
					curr = curr->next();
				}
			}
		}
	}
}

SLList* FindElement(SLList* list, int k, int& i) {
	if (list == NULL) {
		return NULL;
	}
	SLList* nd = FindElement(list->next(), k, i);
	i = i + 1;
	if (i == k) {
		return list;
	}
	return nd;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int length = 10;
	auto list = MakeList(length);
	printSLList(list);
	RemoveDuplicates(list);
	cout << endl;
	printSLList(list);

	int k = 0;
	int i = -1;
	cout << endl<< "Введите индекс с конца k: ";
	cin >> k;
	SLList* elem = FindElement(list, k, i);
	if (elem == NULL)
		cout << "error";
	else cout << elem->getData();

}
