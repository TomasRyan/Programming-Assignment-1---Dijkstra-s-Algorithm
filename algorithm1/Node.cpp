///////////////////////////////////////////////////////////
//	Tomás Ryan	
//	k00243524
//	Dijkstra's Algorithm
///////////////////////////////////////////////////////////
//	The node object
//	contains each value needed to perform Dijkstra’s Algorithm
//	aswell as retaining the results.
///////////////////////////////////////////////////////////
#include "Node.h"
Node::Node(int id, list<int> con) {
	this->m_node_id = id;
	this->m_connections = con;
}

int Node::getNodeID() {
	return this->m_node_id;
}

int Node::getDistance() {
	return this->m_distance;
}

int Node::getDistanceToPoint(int i) {
	std::list<int>::iterator it = m_connections.begin();
	int x = 0;
	while ( x < i) {
		x++;
		it++;
	}
	return *it;
}

void Node::setDistance(int d) {
	this->m_distance = d;
}

bool Node::isFound() {
	return this->m_known;
}

void Node::found() {
	this->m_known = true;
}

void Node::printNode() {
	cout << "Node ID: " << this->m_node_id << endl;
	cout << "Distance from origin: " << this->m_distance << endl;
	std::list<int>::iterator it = m_connections.begin();
	int x = 0;
	cout << "(";
	cout << *it;
	it++;
	while (it != this->m_connections.end()) {
		cout << ", " << *it;
		x++;
		it++;
	}
	cout << ")" << endl;
	cout << "Previous Node: " << this->m_previous << endl;
}

void Node::setConnection(int index, int newValue) {
	list<int>::iterator iter = this->m_connections.begin();
	int x = 0;
	while (x < index) {
		iter++;
		x++;
	}
	*iter = newValue;
}

void Node::SetPrevious(int index) {
	this->m_previous = index;
}
