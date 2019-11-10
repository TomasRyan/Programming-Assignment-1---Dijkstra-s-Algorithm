///////////////////////////////////////////////////////////
//	Tomás Ryan	
//	k00243524
//	Dijkstra's Algorithm
///////////////////////////////////////////////////////////
//	The node object
//	contains each value needed to perform Dijkstra’s Algorithm
//	aswell as retaining the results.
///////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <list>;
const int length = 11;
using namespace std;
class Node {
private:
	int m_node_id;
	int m_distance = INT_MAX; // for highest number
	bool m_known = false;
	list<int> m_connections;
	int m_previous = 0;
public:
	Node(int id, list<int> con);
	int getNodeID();
	int getDistance();
	void setDistance(int d);
	bool isFound();
	void found();
	void printNode();
	int getDistanceToPoint(int i);
	void setConnection(int index, int newValue);
	void SetPrevious(int index);
	bool operator==(const Node a) const
	{
		if (this->m_node_id == a.m_node_id) {
			return true;
		}
		else {
			return false;
		}
	}
};