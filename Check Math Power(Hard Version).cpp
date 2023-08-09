#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b; cin >> a >> b;
    cout << 2 * ((a * b) % 1000000000000000) - a + 4 * b + 4 * (a - b) << endl;
    return 0;
}
