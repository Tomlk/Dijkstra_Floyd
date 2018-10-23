#pragma once
//#define INV 300
class Graph
{
public:
	static const int INV = 300;
	Graph(int v);
	int VertexN();
	void AddEdge(int v1, int v2, int weight);
	void Xigou();
	~Graph();
private:
	int v;
	int e;
public:
	int **edges;

};

