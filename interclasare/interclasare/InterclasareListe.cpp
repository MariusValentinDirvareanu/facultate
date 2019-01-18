#include "InterclasareListe.h"



InterclasareListe::InterclasareListe(unsigned elementePrimaLista, unsigned elementeADouaLista)
{
	a = nullptr;
	b = nullptr;
	interclasare = nullptr;
	//Elemente prima lista
	for (unsigned ee=0;ee<elementePrimaLista;++ee)
	{
		cin >> elementTemp;
		push(&a, elementTemp);
	}

	//Elemente a doua list
	for (unsigned ee = 0; ee < elementeADouaLista; ++ee)
	{
		cin >> elementTemp;
		push(&b, elementTemp);
	}

	sortedIntersect();
	cout << "Elementele comune din cele doua liste : ";
	printList();
	cout << endl;
}

void InterclasareListe::sortedIntersect()
{	
	tail = &dummy;
	dummy.next = nullptr;

	
	while (a != nullptr && b != nullptr)
	{
		if (a->val == b->val)
		{
			push((&tail->next), a->val);
			tail = tail->next;
			a = a->next;
			b = b->next;
		}
		else if (a->val < b->val)
			a = a->next;
		else
			b = b->next;
	}
	interclasare = dummy.next;
}

void InterclasareListe::push(Node** head_ref, int new_data)
{
	//Alocare memorie
	Node* new_node = new Node;

	//Atribuire valoare
	new_node->val = new_data;

	//Linkare lista
	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void InterclasareListe::printList()
{
	while (interclasare != nullptr)
	{
		cout << interclasare->val << " ";
		interclasare = interclasare->next;
	}
}


InterclasareListe::~InterclasareListe()
{
}
