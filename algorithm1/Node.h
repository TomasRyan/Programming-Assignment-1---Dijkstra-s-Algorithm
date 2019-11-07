#pragma once
#include <iostream>
#include <list>;
using namespace std;
class Node {
private:
	int m_node_id;
	int m_distance = 99999999999999; // for highest number
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