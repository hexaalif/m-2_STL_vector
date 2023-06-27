#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 2, 5, 4, 6, 7, 2, 4, 2, 5, 7, 8, 2};

    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 8);

    auto it = find(v.begin(), v.end(), 100);
    cout << *it << endl;
    if (it == v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }
    // cout << *it;
    return 0;
}