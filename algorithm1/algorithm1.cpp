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
	char endCheck[] = { "}" };
	char gapCheck[] = { "," };
	char spaceCheck[] = { " " };
	if (!is) {
		cout << "Mistakes were made, closing program" << endl;
		exit(1);
	}
	if (is.is_open()) {
		// first line
		getline(is, inputType);
		//cout << inputType << endl;
		if (inputType == "S") { // todo
			// secound line
			getline(is, inputType);
			stringstream thing(inputType);
			thing >> start;
			int counter = 0;
			for (int a = 0; a < start; a++) {
				containter.clear();

				for (int b = 0; b < start; b++) {
					containter.push_back(0);
				}
				Node* n = new Node(a, containter);
				vpN.push_back(n);
			}
			while (getline(is, inputType) && counter < start) {
				inputType.erase(std::remove(inputType.begin(), inputType.end(), '{'), inputType.end());
				inputType.erase(std::remove(inputType.begin(), inputType.end(), '}'), inputType.end());
				//inputType.erase(std::remove(inputType.begin(), inputType.end(), ','), inputType.end());
				containter.clear();
				int i = 0;
				int first = 0;
				int destination = 0;
				int weight = 0;
				int step = 0;
				for (auto x : inputType) {
					cout << x << endl;
					if (isdigit(x)) {
						i *= 10;
						i += (int)x - 48;
					}
					else if (x == gapCheck[0] || x == endCheck[0]) {
						if (step == 0) {
							first = i;
						}
						else if (step == 1) {
							destination = i;
						}
						step++;
						i = 0;
					}
				}
				if (step == 2) {
					weight = i;
					int c = 0;
					for (Node* n : vpN) {
						if (c == destination) {
							n->setConnection(first, weight);
						}
						c++;
					}
					c = 0;
					for (Node* n : vpN) {
						if (c == first) {
							n->setConnection(destination, weight);
							i = 0;
							first = 0;
							destination = 0;
							weight = 0;
							step = 0;
						}
						c++;
					}
				}
				counter++;
			}
		}
		else if (inputType == "A") {
			getline(is, inputType);
			stringstream thing(inputType);
			thing >> start;
			int counter = 0;
			while (getline(is, inputType) && counter < start) {
				cout << inputType << endl;
				inputType.erase(std::remove(inputType.begin(), inputType.end(), '{'), inputType.end());
				//inputType.erase(std::remove(inputType.begin(), inputType.end(), '}'), inputType.end());
				inputType.erase(std::remove(inputType.begin(), inputType.end(), ' '), inputType.end());
				//inputType.erase(std::remove(inputType.begin(), inputType.end(), ','), inputType.end());
				containter.clear();
				int i = 0;
				for (auto x : inputType) {
					//cout << x << endl;
					//cout << (int)x << endl;
					if (isdigit(x)) {
						if (x != endCheck[0] && x != gapCheck[0]) {
							i *= 10;
							i += (int)x - 48;
						}
					}
					else if (x == gapCheck[0]) {
						containter.push_back(i);
						//cout << i << endl;
						i = 0;
					}
					else if (x == spaceCheck[0]) {
						containter.push_back(i);
						//cout << i << endl;
						i = 0;
					}
				}
				Node* n = new Node(counter, containter);
				vpN.push_back(n);
				counter++;
			}
		}
		else {
			cout << "Mistakes were made, closing program" << endl;
			exit(1);
		}
		/*for (Node* n : vpN) {
			(*n).printNode();
		}*/
		is.close();
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
