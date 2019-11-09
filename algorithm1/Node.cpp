#include "Node.h"
Node::Node(int id, list<int> con) {
	this->m_node_id = id;
	this->connections = con;
}

int Node::getNodeID() {
	return this->m_node_id;
}

int Node::getDistance() {
	return this->m_distance;
}

int Node::getDistanceToPoint(int i) {
	std::list<int>::iterator it = connections.begin();
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
	cout << this->m_node_id << ", " << this->m_distance << endl;
	std::list<int>::iterator it = this->connections.begin();
	int x = 0;
	while (it != this->connections.end()) {
		cout << *it << ", ";
		it++;
	}
	cout << endl;
}
