#pragma once
#include <iostream>
using namespace std;
class Node {
private:
	int m_node_id;
	int m_distance = 0;
	bool m_known = false;
public:
	Node(int id);
	int getNodeID();
	int getDistance();
	void setDistance(int d);
	bool isFound();
	void found();
	void printNode();
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