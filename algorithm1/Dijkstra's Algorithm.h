///////////////////////////////////////////////////////////
//	Tomás Ryan	
//	k00243524
//	Dijkstra's Algorithm
///////////////////////////////////////////////////////////
//	The Dijkstra's Algorithm
//	accepts in a list of nodes and iterates though it finding the
//	lowest weight for each path and assigning it
///////////////////////////////////////////////////////////
#pragma once
#include "Node.h"
#include "edge.h"
#include <list>;
class Dijkstra {
private:

public:
	Dijkstra(list<Node*> vpN, int startPoint);
	int getLowest(list<Node*> vspN, int counter);
};