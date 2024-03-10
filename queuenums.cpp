#include <iostream>
#include <queue>
#include <cstdlib> // لاستخدام دالة rand
using namespace std;
int main()
{
    queue<int> q;

    // إضافة 5 أعداد عشوائية إلى قائمة الانتظار
    for (int i = 0; i < 5; ++i)
    {
        int random_number = rand() % 100; // توليد عدد عشوائي بين 0 و 99
        q.push(random_number);
    }

    // طباعة العناصر في قائمة الانتظار
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
