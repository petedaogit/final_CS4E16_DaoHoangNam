#include <iostream>
#include <stack>
#include <string>

using namespace std;

string encodeString(long long n)
{
    string s = "";
    while (n > 0)
    {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}
int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    s += '@';
    string result;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() || st.top() == s[i])
        {
            st.push(s[i]);
        }
        else
        {
            int cnt = 0;
            result = result + st.top();
            while (!st.empty())
            {
                cnt++;
                st.pop();
            }
            result += encodeString(cnt);
            st.push(s[i]);
        }
    }
    cout << "ket qua la: " << result << endl;
    return 0;
}