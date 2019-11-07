#ifndef Edge_HEADER
#define Edge_HEADER
#include <iostream>
#include <utility> 
#include "Node.H";
using namespace std;
#pragma
class Edge {
private:
	Node* m_NodeA;
	Node* m_NodeB;
	int m_weight;
public:
	// create a edge pair with the weight
	Edge(Node* a, Node* b, int w);
	// inpute node, checks if the node is held within the pair
	bool checkForNode(Node* n);
	// check for the weight of the node
	int getWeight();
	//print edge
	void printEdge();
};
#endif