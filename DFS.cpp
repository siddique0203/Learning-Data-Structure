#include <iostream>
#include <vector>
#include <stack>
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


    void DFS(int s) {
        vector<bool> visited(V, false);
        stack<int> stk;

        visited[s] = true;
        stk.push(s);

        while (!stk.empty()) {
            s = stk.top();
            cout << "Visited:"<< s << "  ";
            stk.pop();

            for (int i = 0; i < adj[s].size(); ++i) {
                int currentVertex = adj[s][i];
                if (!visited[currentVertex]) {
                    visited[currentVertex] = true;
                    stk.push(currentVertex);
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

    g.DFS(2);

}
