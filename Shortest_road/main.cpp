#include "iostream"
#include "Graph.h"
#include "Dijkstra.h"
#include "Floyd.h"
using namespace std;
void djsktra()
{
	Graph* g = new Graph(7);
	g->AddEdge(0, 1, 4);
	g->AddEdge(0, 2, 6);
	g->AddEdge(0, 3, 6);
	g->AddEdge(1, 2, 1);
	g->AddEdge(1, 4, 7);
	g->AddEdge(2, 5, 4);
	g->AddEdge(2, 4, 6);
	g->AddEdge(3, 2, 2);
	g->AddEdge(3, 5, 5);
	g->AddEdge(4, 6, 6);
	g->AddEdge(5, 4, 1);
	g->AddEdge(5, 6, 8);
	Dijkstra* dj = new Dijkstra(*g, 0);
	dj->printShortestRoad(0, 6);
	//dj->Xigou();
	g->Xigou();
}
void floyd()
{
	Graph* g = new Graph(4);
	g->AddEdge(0, 1, 5);
	g->AddEdge(0, 3, 7);
	g->AddEdge(1, 2, 4);
	g->AddEdge(1, 3, 2);
	g->AddEdge(2, 0, 3);
	g->AddEdge(2, 1, 3);
	g->AddEdge(2, 3, 2);
	g->AddEdge(3, 2, 1);
	
	Floyd* f = new Floyd(*g);
	f->shortestPrint(0, 2);

}
void main()
{
	floyd();

}