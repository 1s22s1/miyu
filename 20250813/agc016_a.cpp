#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string s;
    cin >> s;

    ll answer = 100;

    for (char c = 'a'; c <= 'z'; c++)
    {
        ll i = 0;
        ll count = 0;
        while (i < s.size())
        {
            while (i < s.size() && s.at(i) == c)
            {
                i++;
            }

            ll j = i;
            while (j < s.size() && s.at(j) != c)
            {
                j++;
            }

            count = max(count, j - i);
            i = j;
        }

        answer = min(answer, count);
    }

    cout << answer << endl;

    return 0;
}
