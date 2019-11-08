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