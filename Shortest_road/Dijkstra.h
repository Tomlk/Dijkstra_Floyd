#pragma once
#include "iostream"
#include "Graph.h"
#include "stack"
using namespace std;
class Dijkstra
{
public:

	Dijkstra(Graph g,int s);
	void find(Graph g,int s);
	//void Xigou();
	void printShortestRoad(int s,int d);
	~Dijkstra();
private:
	int *set;
	int *path;
	int *dist;
	int min;
	int u;
	stack<int> MyStack;
};

