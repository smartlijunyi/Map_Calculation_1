#include "stdio.h"
#include "stdlib.h"
#include "math.h"
//Define the data structure;
#define MaxV 10000
typedef struct{
	int id;
	double xy[2];
}VertexType;
typedef struct{
	int edges[MAXV][MAXV];
	int n,e;
	VertexType vexs[MAXV];
}MGraph;

