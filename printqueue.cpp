#include <iostream>
#include <queue>

int main()
{
    std::queue<std::string> q;

    // إضافة عناصر إلى قائمة الانتظار
    q.push("mohamed");
    q.push("ahmed");
    q.push("farah");

    // طباعة العناصر في قائمة الانتظار
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
