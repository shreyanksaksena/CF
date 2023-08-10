#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll L, R, sum, n1 = 0, n2 = 0, L1;
        cin >> L >> R;
        if (L > R)
        {
            swap(L, R);
        }
        L1 = L - 1;
        n1 = R *1ll*(R + 1) / 2;
        n2 = L1 *1ll*(L1 + 1) / 2;
        sum = n1 - n2;
        cout << sum << endl;
    }
}