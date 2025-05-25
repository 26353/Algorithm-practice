#include <iostream>
using namespace std;
int reverse(int x)
{
    long long b = 1;
    long long c = 0;
    for (int i = x; i != 0; i /= 10)
        b *= 10;
    while (x != 0)
    {
        b /= 10;
        c += x % 10 * b;
        x = x / 10;
    }
    if (c > 2147483647 || c < -2147483648)
        return 0;
    else
        return c;
}
int main()
{
    int a;
    cin >> a;
    cout << reverse(a);
}