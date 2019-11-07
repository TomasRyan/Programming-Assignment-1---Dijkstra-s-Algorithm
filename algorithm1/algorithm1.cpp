// algorithm1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "edge.H";
#include "Node.h"
#include <list>
#include "Dijkstra's Algorithm.h"
int main()
{
	Node* nodeA = new Node(1);
	Node* nodeB = new Node(2);
	Node* nodeC = new Node(3);
	Node* nodeD = new Node(4);
	Node* nodeE = new Node(5);
	Node* nodeF = new Node(6);
	Node* nodeG = new Node(7);
	Node* nodeH = new Node(8);
	Node* nodeI = new Node(9);
	Node* nodeJ = new Node(10);
	Edge* edgeA = new Edge(nodeA, nodeB, 2);
	Edge* edgeB = new Edge(nodeA, nodeD, 7);
	Edge* edgeC = new Edge(nodeB, nodeC, 5);
	Edge* edgeD = new Edge(nodeC, nodeE, 3);
	Edge* edgeE = new Edge(nodeC, nodeF, 7);
	Edge* edgeF = new Edge(nodeI, nodeJ, 2);
	Edge* edgeG = new Edge(nodeE, nodeH, 7);
	Edge* edgeH = new Edge(nodeH, nodeJ, 2);

	//edgeA.printEdge();
	nodeA->printNode();
	list<Node*> vpN;
	vpN.push_back(nodeA);
	vpN.push_back(nodeB);
	vpN.push_back(nodeC);

	list<Edge*> vpE;
	vpE.push_back(edgeA);
	vpE.push_back(edgeB);
	vpE.push_back(edgeC);
	vpE.push_back(edgeD);
	vpE.push_back(edgeE);
	vpE.push_back(edgeF);
	vpE.push_back(edgeG);
	vpE.push_back(edgeH);
	Dijkstra d(vpN, vpE);
}
