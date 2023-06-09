#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    // cout << v.max_size();
    // cout << v.capacity() << endl;
    v.push_back(1);
    // cout << v.capacity() << endl;
    v.push_back(3);
    v.push_back(5);
    // cout << v.capacity()<<endl;
    // v.clear();
    v.resize(5, 6);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout << v[1] << endl;

    return 0;
}