#include "Floyd.h"



Floyd::Floyd(Graph g)
{
	n = g.VertexN();
	A = new int*[g.VertexN()];
	for (int i = 0; i < g.VertexN(); i++)
		A[i] = new int[g.VertexN()];

	path = new int*[g.VertexN()];
	for (int i = 0; i < g.VertexN(); i++)
		path[i] = new int[g.VertexN()];
	for(int i=0;i<g.VertexN();i++)
		for (int j = 0; j < g.VertexN(); j++)
		{
			A[i][j] = g.edges[i][j];
			path[i][j] = -1;
		}
	//Èý²ãÑ­»·
	for (int k = 0; k < g.VertexN(); ++k)
	{
		for (int i = 0; i < g.VertexN(); i++)
			for (int j = 0; j < g.VertexN(); j++)
			{
				if (A[i][j] > A[i][k] + A[k][j])
				{
					A[i][j] = A[i][k] + A[k][j];
					path[i][j] = k;
				}
			}
		
	}


}

void Floyd::shortestPrint(int s, int d)
{
	if (path[s][d] == -1)
		cout << s << "->"<<d<<" ";
	else
	{
		int mid = path[s][d];
		shortestPrint(s, mid);
		shortestPrint(mid, d);
	}
	//cout << d;
}

Floyd::~Floyd()
{

	for (int i = 0; i < this->n; i++)
		delete[] A[i];
	delete[] A;
	for (int i = 0; i < this->n; i++)
		delete[] path[i];
	delete[] path;
}
