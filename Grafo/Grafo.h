#pragma once


typedef struct {
	int vertexCounter;
	int archCounter;
	Link *tree;
	AdjacencyMatrix adjacencyMatrix;
	IncidencyMatrix incidencyMatrix;
}Graph;

typedef struct {
	int source;
	int destination;
}Link;

typedef struct {
	int **matrix;
}AdjacencyMatrix;

typedef struct {
	int **matrix;
}IncidencyMatrix;


Graph createGraph();