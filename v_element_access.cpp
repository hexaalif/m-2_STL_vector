#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 3, 4, 5, 6};
    vector<int>::iterator it;
    // cout << v.back();
    // cout << v.size() - 1;
    // cout << v[0];
    // cout << v.front();

    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}