#pragma once
#include <stdio.h>
#include <string>
#include <list>
#include <fileapi.h>
#include "Grafo.h"

Graph createGraph() {
	FILE *f;
	f = fopen("graph.txt", "r");
	Graph g;
	if (f == NULL) {
		system("CLS");
		printf("Error: Something went wrong while opening the file!\n");
		system("PAUSE");
		system("EXIT");
	}
	else {
		g.vertexCounter = 0;
		while (!feof(f)) {
			g.vertexCounter++;
			g.tree = (Link*)malloc(sizeof(Link)*g.vertexCounter);
			Link arch;
			fscanf(f, "%i %i", &arch.source, &arch.destination);
			g.tree[g.vertexCounter - 1] = arch;
		}
		for (int i = 0; i < g.vertexCounter; i++) {
			printf("%i", g.tree[i].source);
			printf(" %i\n", g.tree[i].destination);
		}
	}
	return g;
}

