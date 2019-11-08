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
	int connections[length];
public:
	Node(int id, int c[length]);
	int getNodeID();
	int getDistance();
	void setDistance(int d);
	bool isFound();
	void found();
	void printNode();
	int getDistanceToPoint(int i);
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