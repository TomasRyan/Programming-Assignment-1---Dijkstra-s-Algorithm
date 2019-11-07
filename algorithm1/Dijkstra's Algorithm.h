#pragma once
#include "Node.h"
#include "edge.h"
#include <list>;
class Dijkstra {
private:
	list<Node*> vpNodes;

public:
	Dijkstra(list<Node*> vpN, list<Edge*> vpE);
};