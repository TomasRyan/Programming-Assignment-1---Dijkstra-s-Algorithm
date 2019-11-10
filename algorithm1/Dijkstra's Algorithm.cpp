///////////////////////////////////////////////////////////
//	Tomás Ryan	
//	k00243524
//	Dijkstra's Algorithm
///////////////////////////////////////////////////////////
//	The Dijkstra's Algorithm
//	accepts in a list of nodes and iterates though it finding the
//	lowest weight for each path and assigning it
///////////////////////////////////////////////////////////
#include "Dijkstra's Algorithm.h"
#include <limits.h> 
Dijkstra::Dijkstra(list<Node*> vpN, int startPoint) {

	int count = vpN.size();
	list<Node*>::iterator itX = vpN.begin();
	list<Node*>::iterator itY = vpN.begin();
	int counter = 0;
	while (counter < startPoint) {
		itX++;
		counter++;
	}
	(*itX)->setDistance(0);
	counter = 0;
	///////
	for (Node* n: vpN) {
		int closestIndex = getLowest(vpN, counter);
		itX = vpN.begin();
		int y = 0;
		while (y < closestIndex) {
			itX++;
			y++;
		}
		(*itX)->found();
		itY = vpN.begin();
		for (int i = 0; i < length; i++) {
			if ((*itY)->isFound() != true
					&& (*itX)->getDistance() != INT_MAX
					&& (*itX)->getDistanceToPoint(i) != 0
					&& (*itY)->getDistance() != 0
					&& (*itX)->getDistance() + (*itY)->getDistanceToPoint(closestIndex) < (*itY)->getDistance()) {
				//
				cout << "////////////////////////" << endl;
				(*itY)->setDistance((*itX)->getDistance() + (*itX)->getDistanceToPoint(i));
				(*itY)->SetPrevious((*itX)->getNodeID());
				(*itY)->printNode();
				cout << "////////////////////////" << endl;
			}
			itY++;
		}
		counter++;
	}
}

int Dijkstra::getLowest(list<Node*> vpN, int counter) {
	int min = INT_MAX;
	int min_index = 0;
	list<Node*>::iterator iter = vpN.begin();
	int count = 0;
	while(iter != vpN.end()) {
		if ((*iter)->isFound() == false && (*iter)->getDistance() < min) {
			min = (*iter)->getDistance();
			min_index = count;
		}
		iter++;
		count++;
	}
	return min_index;
}