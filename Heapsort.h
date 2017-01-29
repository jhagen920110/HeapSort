#pragma once
#include "Node.h"

class Heapsort
{
public:
	int size;
	Heapsort();
	bool empty();
	void insert(Node *root, Node *node);
	Node retrieveLargest();
	void removeLargest();
	void HeapSort();
};
