#pragma once
#include <iostream>

using namespace std;

class InterclasareListe
{

private:
	struct Node
	{
		int val;
		struct Node* next;
	};
	Node* a, *b, *interclasare;
	Node dummy;
	Node* tail;
	int elementTemp;
public:
	InterclasareListe(unsigned,unsigned);
	void sortedIntersect();
	void push(Node** head_ref, int new_data);
	void printList();
	~InterclasareListe();
};

