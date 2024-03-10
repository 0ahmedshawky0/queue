#include <iostream>
#include <vector>

using namespace std;

// تمثيل الرسوم البيانية باستخدام القوائم المجاورة
class Graph
{
private:
    int V;                   // عدد العقد في الرسم البياني
    vector<vector<int>> adj; // القوائم المجاورة لتمثيل الرسم البياني

public:
    Graph(int V) : V(V)
    {
        adj.resize(V);
    }

    // إضافة حافة إلى الرسم البياني
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u); // يمكن إزالة هذا السطر إذا كان الرسم البياني غير موجه
    }

    // طباعة الرسم البياني
    void printGraph()
    {
        for (int i = 0; i < V; ++i)
        {
            cout << "قائمة الجيران للعقد " << i << " :";
            for (auto v : adj[i])
                cout << " -> " << v;
            cout << "\n";
        }
    }
};

int main()
{
    Graph g(5); // إنشاء رسم بياني مع 5 عقد

    // إضافة حواف إلى الرسم البياني
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // طباعة الرسم البياني
    g.printGraph();

    return 0;
}
