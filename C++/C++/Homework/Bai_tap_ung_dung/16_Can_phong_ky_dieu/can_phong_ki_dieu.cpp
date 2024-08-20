
#include <bits/stdc++.h>

using namespace std;

#define int long long

int a, b, n, s = 1e10, a1, b1;
int main() {
  //freopen(".inp", "r", stdin);
  //freopen(".out", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cin >> n >> a >> b ;
  if (a * b >= 6 * n)
  {
    cout << a * b << "\n" << a << ' ' << b << '\n';
    return 0;
  }
  n *= 6;
  bool check = 0;
  if (a > b) swap(a, b), check = 1;
  for (int i = a; i <= sqrt(n); ++i)
  {
    int j = n / i + (n % i > 0);
    if (j < b) j = b;
    if (s > i * j) 
    {
      s = i * j,
      a1 = i,
      b1 = j;
    }
  }
  if (check) swap(a1, b1);
  cout << s << '\n' << a1 << " " << b1; 
  return 0;
}
