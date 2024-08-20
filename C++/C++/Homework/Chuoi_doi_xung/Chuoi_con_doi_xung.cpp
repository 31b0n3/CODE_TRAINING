#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestPalindrome(string x) {
    int n = x.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int maxLength = 1, start = 0;

    for (int i = 0; i < n; i++) {
        dp[i][i]=true;
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (x[i] == x[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (x[i] == x[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                if (len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }
    return x.substr(start, maxLength);
}

int main() {
    string x;
    int N ;
    cin>>N;
    cin>>x;
    cout << longestPalindrome(x) << endl;
    
    return 0;
}



