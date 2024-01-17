#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    queue<int> q;
    int n;
    cout << "Nhap vao so nguyen to: ";
    cin >> n;
    for (int i = 2; i <= n, i < 10; i++)
    {
        if (isPrime(i))
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        for (int i = 1; i <= 9; i++)
        {
            int j = q.front() * 10 + i;
            if (j <= n && isPrime(j))
            {
                q.push(q.front() * 10 + i);
            }
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}