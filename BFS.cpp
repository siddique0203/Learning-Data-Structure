#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) {
         V = V;
        adj.resize(V);
    }


    void addEdge(int v, int n) {
        adj[v].push_back(n);
    }

    void BFS(int s) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
            s = q.front();
            cout <<"Visited:"<< s << "  ";
            q.pop();

            for (int i = 0; i < adj[s].size(); ++i) {
                int currentVertex = adj[s][i];
                if (!visited[currentVertex]) {
                    visited[currentVertex] = true;
                    q.push(currentVertex);
                }
            }
        }
    }
};

int main() {

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(1);

}
