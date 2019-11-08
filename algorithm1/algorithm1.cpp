// algorithm1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "edge.H";
#include "Node.h"
#include <list>
#include "Dijkstra's Algorithm.h"

int main()
{
	/*Node* nodeA = new Node(1);
	Node* nodeB = new Node(2);
	Node* nodeC = new Node(3);
	Node* nodeD = new Node(4);
	Node* nodeE = new Node(5);
	Node* nodeF = new Node(6);
	Node* nodeG = new Node(7);
	Node* nodeH = new Node(8);
	Node* nodeI = new Node(9);
	Node* nodeJ = new Node(10);
	Node* nodeK = new Node(11);*/
	/*Edge* edgeA = new Edge(nodeA, nodeB, 2);
	Edge* edgeB = new Edge(nodeA, nodeD, 7);
	Edge* edgeC = new Edge(nodeB, nodeC, 5);
	Edge* edgeD = new Edge(nodeC, nodeE, 3);
	Edge* edgeE = new Edge(nodeC, nodeF, 7);
	Edge* edgeF = new Edge(nodeI, nodeJ, 2);
	Edge* edgeG = new Edge(nodeE, nodeH, 7);
	Edge* edgeH = new Edge(nodeH, nodeJ, 2);*/

	//edgeA.printEdge();
	//nodeA->printNode();
	//list<Node*> vpN;
	//vpN.push_back(nodeA);
	//vpN.push_back(nodeB);
	//vpN.push_back(nodeC);
	int start = 0;
	int graph[length][length]{
	{0,4,0,0,0,0,0,0,0,3,0} , //a
	{4,0,1,0,0,0,0,0,0,0,0} , //b
	{0,1,0,2,0,0,0,0,0,0,0} , //c
	{0,0,2,0,0,3,0,0,0,0,0} , //d
	{0,0,0,0,0,4,0,0,0,0,0} , //e
	{0,0,0,3,4,0,0,6,0,0,0} , //f
	{0,0,0,0,0,0,0,0,8,0,0} , //g
	{0,0,0,0,0,6,0,0,0,0,0} , //h
	{0,0,0,0,0,0,8,0,0,3,0} , //i
	{3,0,0,0,0,0,0,0,3,0,2} , //j
	{0,0,0,0,0,0,0,0,0,2,0} };//k
	list<Node*> vpN;
	for (int i = 0; i < length; i++) {
		Node* n = new Node(i, graph[i]);
		vpN.push_back(n);
	}
	
	Dijkstra d(vpN, start);
	for (Node* n : vpN) {
		(*n).printNode();
	}
	system("Pause");
}
