#include <iostream>

using namespace std;

int main()
{
    long long n;
    int x = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            x += 1;
        }
        n /= 10;
    }
    if (x == 4 || x == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}