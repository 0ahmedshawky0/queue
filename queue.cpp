#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    // إضافة عناصر إلى قائمة الانتظار
    q.push(10);
    q.push(20);
    q.push(30);

    // طباعة العناصر في قائمة الانتظار
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
