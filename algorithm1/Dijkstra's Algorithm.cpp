#include "Dijkstra's Algorithm.h"
#include <limits.h> 
Dijkstra::Dijkstra(list<Node*> vpN, int startPoint) {

	int count = vpN.size();
	int distance = 0;
	list<Node*>::iterator it = vpN.begin();
	int counter = 0;
	while (counter < startPoint) {
		it++;
		counter++;
	}
	(*it)->setDistance(0);
	counter = 0;
	///////
	for (Node* n: vpN) {
		int closestIndex = getLowest(vpN, counter);
		it = vpN.begin();
		//counter = 0;
		int y = 0;
		while (y < closestIndex) {
			it++;
			y++;
		}
		(*it)->found();
		//it = vpN.begin();
		distance = n->getDistance();
		list<Node*>::iterator iIter = vpN.begin();
		for (int i = 0; i < length; i++) {
			if ((*iIter)->isFound() != true
					&& (*it)->getDistance() != INT_MAX
					&& (*it)->getDistanceToPoint(i) != 0
					&& (*iIter)->getDistance() != 0
					&& (*it)->getDistance() + (*iIter)->getDistanceToPoint(closestIndex) < (*iIter)->getDistance()) {
				//
				(*iIter)->setDistance((*it)->getDistance() + (*it)->getDistanceToPoint(i));
				cout << "iteration: " << counter << endl;
				cout << n->getDistance() << endl;
			}
			iIter++;
		}
		counter++;
	}
	/*(*it)->setDistance(0);
	(*it)->found();
	(*it)->printNode();
	(*it)->setDistance(distance);*/
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