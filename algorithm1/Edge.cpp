#include "edge.h"

Edge::Edge(Node* a, Node* b, int w) {
	m_NodeA = a;
	m_NodeB = b;
	m_weight = w;
}

bool Edge::checkForNode(Node* n) {
	if (n == m_NodeA || n == m_NodeB) {
		return true;
	}
	else {
		return false;
	}
}

int Edge::getWeight() {
	return this->m_weight;
}

void Edge::printEdge() {
	cout << this->m_NodeA->getNodeID() << ", " << this->m_NodeB->getNodeID() << endl;
	cout << "Weight: " << this->getWeight() << endl;
}