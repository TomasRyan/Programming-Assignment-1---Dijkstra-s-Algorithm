#include "Node.h"
Node::Node(int id) {
	this->m_node_id = id;
}

int Node::getNodeID() {
	return this->m_node_id;
}

int Node::getDistance() {
	return this->m_distance;
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
	cout << this->m_node_id << ", " << this->m_distance << ", " << m_known << endl;
}
