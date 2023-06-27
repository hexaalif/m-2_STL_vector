#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // int a1[n];
    // int a2[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a1[i];
    //     cin >> a2[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a1[i] << " ";
    //     cout << a2[i] << " ";
    // }
    // for (int i = 0; i < n; i++)
    // {
    // }
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
}