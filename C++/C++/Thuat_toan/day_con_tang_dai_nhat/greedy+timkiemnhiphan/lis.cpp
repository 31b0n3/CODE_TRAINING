#include<bits/stdc++.h>
#define maxn 100005
using namespace std;

int n, a[maxn], b[maxn], ma;
main()
{
cin >> n;
    for (int i=1; i <= n; i++)
{
int tmp;
cin>>tmp;
int j = lower_bound(b+1, b+ma+1, tmp) -b - 1;//lower_bound: tra ve con tro toi phan tu lon hon hoac bang tmp
b[j+1] = tmp;
ma = max(ma, j+1);
}
cout << ma;

}