#include "Graph.h"


Graph::Graph(int v)
{
	this->v = v;
	this->e = 0;
	edges = new int*[v];
	for (int i = 0; i < v; i++)
		edges[i] = new int[v];

	for (int i = 0; i < v; i++)
		for (int j = 0; j < v; j++)
			edges[i][j] = INV;
	for (int i = 0; i < v; i++)
		edges[i][i] = 0;

	


}
void Graph::Xigou()
{
	for (int i = 0; i < v; i++)
		delete[] edges[i];
	delete[] edges;

}
int Graph::VertexN()
{
	return v;

}
void Graph::AddEdge(int v1, int v2, int weight)
{
	
	edges[v1][v2] = weight;
	e++;
}

Graph::~Graph()
{
}
