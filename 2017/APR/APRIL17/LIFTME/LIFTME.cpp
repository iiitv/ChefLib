#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t = 1;
  cin >> t;
  while (t--)
  {
    vector<pair<long long int, long long int>> vect;
    long long int sum = 0;
    long long int n, q, a, b = 0;
    cin >> n >> q;
    for (long long int i = 0; i < q; i++)
    {
      cin >> a;
      cin >> b;
      vect.push_back(make_pair(a, b));
    }
    sum += vect[0].first - 0;
    for (long long int i = 0; i < q; i++)
      sum += abs(vect[i].first - vect[i].second);
    for (long long int i = 0; i < q - 1; i++)
      sum += abs(vect[i].second - vect[i + 1].first);
    cout << sum << endl;
  }
  return 0;
}