#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int diff = min(a, b);
    int same = (max(a, b) - diff) / 2;
    cout << diff << " " << same << endl;
    return 0;
}