#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> home(n), away(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> home[i] >> away[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            if (home[i] == away[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}