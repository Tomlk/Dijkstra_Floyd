#include "Dijkstra.h"



Dijkstra::Dijkstra(Graph g, int s)
{
	set = new int[g.VertexN()];
	for (int i = 0; i < g.VertexN(); i++)
		set[i] = 0;
	path = new int[g.VertexN()];
	for (int i = 0; i < g.VertexN(); i++)
		path[i] = -1;

	dist = new int[g.VertexN()];
	for (int  i = 0; i < g.VertexN(); i++)
	{
		dist[i] = g.edges[s][i];
		if (g.edges[s][i] < g.INV)
			path[i] = s;

	}
	path[s] = -1;
	set[s] = 1;
	find(g, s);
	
}
void Dijkstra::find(Graph g, int s)
{
	for (int i = 0; i < g.VertexN() - 1; i++)
	{
		min = g.INV;
		for (int j = 0; j < g.VertexN(); j++)
		{
			if (set[j] == 0 && dist[j] < min)
			{
				u = j;
				min = dist[j];
			}
		}
		set[u] = 1;
		//以u为中间结点考察
		for (int j = 0; j < g.VertexN(); j++)
		{
			if (set[j] == 0 && dist[u] + g.edges[u][j] < dist[j])
			{
				dist[j] = dist[u] + g.edges[u][j];
				path[j] = u;
			}
		}
	}


}
void Dijkstra::printShortestRoad(int s,int d)
{
	if (path[d] == -1)
	{
		cout << "无法到达." << endl;
	}
	while (path[d]!=-1)
	{
		MyStack.push(d);
		d = path[d];
	}
	cout << s;
	while (!MyStack.empty())
	{

		cout <<"->" << MyStack.top();
		MyStack.pop();
	}
}

//void Dijkstra::Xigou()
//{
//
//}

Dijkstra::~Dijkstra()
{
	delete[] dist;
	delete[] path;
	delete[] set;
}
