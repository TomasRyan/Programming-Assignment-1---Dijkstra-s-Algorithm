#include "Node.h"
Node::Node(int id, int l[length]) {
	this->m_node_id = id;
	for (int x = 0; x < length; x++) {
		this->connections[x] = l[x];
	}
}

int Node::getNodeID() {
	return this->m_node_id;
}

int Node::getDistance() {
	return this->m_distance;
}

int Node::getDistanceToPoint(int i) {
	return this->connections[i];
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
	/*cout << "{" <<this->connections[0] << " , ";
	for (int i = 1; i < length-1; i++) {
		cout << this->connections[i] << " , ";
	}
	cout << this->connections[length - 1] << "}" << endl;*/
}
