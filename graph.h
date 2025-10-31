//This is a header file
#ifndef GRAPH_H
#define GRAPH_H

#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

class Graph{
    private:
    int V;// number of vertices
    vector<vector<pair<int,int>>> adjacency;//defining the adjacency list of the form(neighbour, weight)
    
    public:
    Graph(int V);
    void insertEdge(int u, int v, int w=1);// default weight =1
    void bfs(int start);
    void dfs(int start);
    void Dijkstra(int start);
    
    private:
    void DFSUtil(int v, vector<bool> &visited);
};

#endif