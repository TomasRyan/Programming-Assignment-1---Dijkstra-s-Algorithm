#include "Dijkstra's Algorithm.h"

Dijkstra::Dijkstra(list<Node*> vpN, int startPoint) {

	int count = vpN.size();
	int distance = 0;
	list<Node*>::iterator it = vpN.begin();
	(*it + startPoint)->setDistance(0);
	(*it + startPoint)->found = true;
	(*it)->printNode();
	(*it)->setDistance(distance);
	it.operator++;
}

int Dijkstra::getLowest(Node* node, list<Node*> vpN) {
	int min = INT_MAX, min_index;
	int nodeID = node->getNodeID();
	list<Node*>::iterator iter = vpN.begin();
	while(iter != vpN.end()) {
		if (node != *iter && (*iter)->isFound() == false && (*iter)->getDistanceToNode(node->getNodeID()) < min) {
			node->setDistance((*iter)->getDistanceToNode(node->getNodeID()));
			nodeID = node->getNodeID();
		}
		iter++;
	}
	return nodeID;
}