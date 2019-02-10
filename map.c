#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#define MaxVertexNum 10000
typedef struct Vertex{
	int x;
	int y;
	int id;
}Vertex;
typedef struct ANode{
	int adjvex;
	struct ANode *nextarc;
}ArcNode;
typedef struct Vnode{
	Vertex data;
	ArcNode *firstarc;
}Vnode;
typedef struct{
	VNode adjlist[MaxVertexNum];
	int n;
	int e;
}ALGraph;
