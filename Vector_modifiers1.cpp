#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> x = {10, 20, 30};
    // vector<int> v = {1, 2, 3};
    // v = x;
    x.push_back(40);
    x.pop_back();
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}