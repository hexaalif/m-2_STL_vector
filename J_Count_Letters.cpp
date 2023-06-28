#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    // cin >> s;
    // int cnt[26] = {0};
    // while ((cin >> c))
    // {
    //     int val = c - 'a';
    //     cnt[val]++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (cnt[i] != 0)
    //     {
    //         // int val = c;
    //         char ch = i + 97;
    //         cout << ch << " : " << cnt[i] << endl;
    //     }
    // }
    vector<int> cnt(26, 0);
    while (cin >> c)
    {
        int val = c - 'a';
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            char ch = i + 97;
            cout << ch << " : " << cnt[i] << endl;
        }
    }
    return 0;
}