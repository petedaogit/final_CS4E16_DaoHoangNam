#include <iostream>

using namespace std;

int main()
{
    int t;
    do
    {
        cout << "Nhap so luong testkey: ";

        if (t <= 0 || t > 100)
        {
            cout << "nhap lai so luong testkey trong khoang 1-100: ";
        }
        cin >> t;
    } while (t <= 0 || t > 100);
    int n[t];

    cout << "Nhap cac so nguyen n: " << endl;
    for (int i = 0; i < t; i++)
    {
        do
        {
            cin >> n[i];
            if (n[i] <= 0 || n[i] > 1000000000)
            {
                cout << "Nhap lai testkey (1-10^9): ";
            }
            else if (n[i] >= 1 || n[i] < 1000000000)
            {
                break;
            }
        } while (n[i] <= 0 || n[i] > 1000000000);
    }

    cout << "ket qua: " << endl;
    for (int i = 0; i < t; i++)
    {
        int S = 0;
        for (int j = 1; j <= n[i]; j++)
        {
            if (n[i] % j == 0)
            {
                S += j;
            }
        }
        cout << S << endl;
    }
}