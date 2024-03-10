#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// تمثيل الرسم البياني باستخدام قوائم الجيران وقوائم الحواف
class Graph {
private:
    int V; // عدد العقد في الرسم البياني
    vector<vector<pair<int, int>>> adj; // قوائم الجيران وقوائم الحواف لتمثيل الرسم البياني

public:
    Graph(int V) : V(V) {
        adj.resize(V);
    }

    // إضافة حافة إلى الرسم البياني
    void addEdge(int u, int v, int weight) {
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight)); // يمكن إزالة هذا السطر إذا كان الرسم البياني غير موجه
    }

    // طباعة الرسم البياني
    void printGraph() {
        for (int i = 0; i < V; ++i) {
            cout << "قائمة الجيران للعقد " << i << " :";
            for (auto neighbor : adj[i])
                cout << " -> " << neighbor.first << " (" << neighbor.second << ")";
            cout << "\n";
        }
    }
};

int main() {
    Graph g(5); // إنشاء رسم بياني مع 5 عقد

    // إضافة حواف إلى الرسم البياني
    g.addEdge(0, 1, 10);
    g.addEdge(0, 4, 20);
    g.addEdge(1, 2, 30);
    g.addEdge(1, 3, 40);
    g.addEdge(1, 4, 50);
    g.addEdge(2, 3, 60);
    g.addEdge(3, 4, 70);

    // طباعة الرسم البياني
    g.printGraph();

    return 0;
}
