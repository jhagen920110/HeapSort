#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Node.h"
Node::Node(int d)
{
	data = d;
	Parent = '\0'; //null pointer
	Left = '\0';
	Right = '\0';
}
