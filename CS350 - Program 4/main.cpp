//  Nevin Kuruvilla
//  Dr. Vermilyer

//  CS350 - Program 4
//  4/16/2023


#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

// Vertex class representing a vertex in the graph
class Vertex {
public:
    char label;
    int cost;
    Vertex(char lbl, int cst) : label(lbl), cost(cst) {}
};

// WeightedGraph class representing a weighted directed graph
class WeightedGraph {
public:
    unordered_map<char, vector<pair<char, int>>> adjacencyList;

    void addEdge(char src, char dest, int weight) {
        adjacencyList[src].push_back(make_pair(dest, weight));
    }

    void dfs(char start) {
        unordered_map<char, bool> visited;
        dfsUtil(start, visited);
    }

    void bfs(char start) {
        unordered_map<char, bool> visited;
        queue<char> q;
        unordered_map<char, int> cost;
        for (const auto& vertex : adjacencyList) {
            char v = vertex.first;
            cost[v] = INT_MAX;
        }

        visited[start] = true;
        cost[start] = 0;
        q.push(start);

        while (!q.empty()) {
            char current = q.front();
            q.pop();

            for (const auto& neighbor : adjacencyList[current]) {
                char next = neighbor.first;
                int weight = neighbor.second;
                int total_cost = cost[current] + weight;
                if (total_cost < cost[next]) {
                    visited[next] = true;
                    cost[next] = total_cost;
                    q.push(next);
                }
            }
        }
    }

private:
    void dfsUtil(char current, unordered_map<char, bool>& visited) {
        visited[current] = true;
        cout << current << " -> ";
        for (const auto& neighbor : adjacencyList[current]) {
            char next = neighbor.first;
            if (!visited[next]) {
                dfsUtil(next, visited);
            }
        }
    }
};

int main() {
    WeightedGraph graph;

    // Add edges with weights
    graph.addEdge('A', 'B', 10);
    graph.addEdge('A', 'C', 12);
    graph.addEdge('A', 'D', 60);
    graph.addEdge('B', 'A', 10);
    graph.addEdge('B', 'C', 20);
    graph.addEdge('B', 'D', INT_MAX);    //Used as a placeholder for infinity, assuming there is no cost                                      associated with "backing up" in the graph.
    graph.addEdge('C', 'B', 20);
    graph.addEdge('C', 'D', 32);
    graph.addEdge('D', 'E', INT_MAX);
    graph.addEdge('E', 'A', 7);

    cout << "DFS traversal from node E: ";
    graph.dfs('E');
    cout << endl;

    cout << "BFS traversal from node E: ";
    graph.bfs('E');
    cout << endl;

    return 0;
}
