#include "Dijkstra's Algorithm.h"

Dijkstra::Dijkstra(list<Node*> vpN, list<Edge*> vpE) {
	int count = vpN.size();
	int distance = 0;
	list<Node*>::iterator it = vpN.begin();
	(*it)->printNode();

}