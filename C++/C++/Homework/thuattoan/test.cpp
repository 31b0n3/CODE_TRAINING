#include <bits/stdc++.h>

using namespace std;
string chuyendoihenhiphan(int a){
    string KQ;
    while (a>0){
        KQ = to_string(a%2) + KQ;
        a=a/2;
    }
    return KQ;
}

int tinhchanlee(string s) {
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            n++;
        }
    }
    return n;
}

void tinhn(int a) {
  
    int tinhchanle = tinhchanlee(chuyendoihenhiphan(a));
    if (tinhchanle % 2 == 0) {
        cout << "chan" << endl;
    } else {
        cout << "le" << endl;
    }
}

int main() {
    int T, a;
    cin >> T;
    while (T > 0) {
        cin >> a;
        tinhn(a);
        T--;
    }
    return 0;
}