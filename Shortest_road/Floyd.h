#pragma once
#include "Graph.h"
#include "iostream"
using namespace std;
class Floyd
{
public:
	Floyd(Graph g);
	void shortestPrint(int s, int d);
	~Floyd();
private:
	int **path;
	int **A;
	int n;
};

