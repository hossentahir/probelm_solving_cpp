#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    cout << (n & ((1 << 30) - (1 << k)));
    return 0;
}
