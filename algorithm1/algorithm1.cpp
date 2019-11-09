// algorithm1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Node.h"
#include <list>
#include "Dijkstra's Algorithm.h"
#include <string>
#include <fstream>
#include <sstream>

#include <algorithm>
int main()
{
	ifstream is;
	string fileName = "graph.txt";
	is.open(fileName);
	string inputType;
	int start;
	list<Node*> vpN;
	list<int> containter;
	if (!is) {
		cout << "Mistakes were made, closing program" << endl;
		exit(1);
	}
	if (is.is_open()) {
		//cout << "we do it" << endl;
		getline(is, inputType);
		//cout << inputType << endl;
		if (inputType == "S") {
			
		}
		else if (inputType == "A") {

		}
		else {
			cout << "Mistakes were made, closing program" << endl;
			exit(1);
		}
		getline(is, inputType);
		stringstream thing(inputType);
		thing >> start;
		//cout << start << endl;
		int counter = 0;
		while (getline(is, inputType) && counter < start) {
			cout << inputType << endl;
			inputType.erase(std::remove(inputType.begin(), inputType.end(), '{'), inputType.end());
			inputType.erase(std::remove(inputType.begin(), inputType.end(), '}'), inputType.end());
			inputType.erase(std::remove(inputType.begin(), inputType.end(), ','), inputType.end());
			containter.clear();
			for (auto x : inputType) {
				cout << x << endl;
				cout << (int)x << endl;
				containter.push_back((int)x-48);
			}
			Node* n = new Node(counter, containter);
			//n->printNode();
			vpN.push_back(n);
			counter++;
			
		}
		is.close();
		cout << "OGUOUG" << endl;
		//int temp[] = ;
	}
	//int start = 0;
	//int graph[length][length]{
	//{0,4,0,0,0,0,0,0,0,3,0} , //a
	//{4,0,1,0,0,0,0,0,0,0,0} , //b
	//{0,1,0,2,0,0,0,0,0,0,0} , //c
	//{0,0,2,0,0,3,0,0,0,0,0} , //d
	//{0,0,0,0,0,4,0,0,0,0,0} , //e
	//{0,0,0,3,4,0,0,6,0,0,0} , //f
	//{0,0,0,0,0,0,0,0,8,0,0} , //g
	//{0,0,0,0,0,6,0,0,0,0,0} , //h
	//{0,0,0,0,0,0,8,0,0,3,0} , //i
	//{3,0,0,0,0,0,0,0,3,0,2} , //j
	//{0,0,0,0,0,0,0,0,0,2,0} };//k
	//list<Node*> vpN;
	//list<int> t;
	//for (int i = 0; i < length; i++) {
	//	t = graph[i].;
	//	Node* n = new Node(i, t);
	//	list<Node*> vpN.push_back(n);
	//}
	
	Dijkstra d(vpN, 0);
	for (Node* n : vpN) {
		(*n).printNode();
	}
	system("Pause");
}
