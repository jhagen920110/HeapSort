#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Node.h"
#include "Heapsort.h"

Heapsort::Heapsort()
{
	size = 0;
}

bool Heapsort::empty()
{
	if (size == 0)
		return true;
	else return false;
}

void Heapsort::insert(Node *root, Node *node)
{
	if (root->Left != '\0')
		root = root->Left;
}

Node Heapsort::retrieveLargest()
{

}

void Heapsort::removeLargest()
{

}

void Heapsort::HeapSort()
{

}
