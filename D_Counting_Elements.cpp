#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // auto it = find(v.begin(), v.end(), v[i] + 1);
        // // cout << *it << endl;
        // // cout << v[i] << " ";

        // if (v[i] + 1 == *it)
        // {
        //     // cout << v[i] << " ";
        //     // cnt++;
        // } 0 1 2 3 3 5
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + 1 == v[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}