
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool canPackWithMLimit(int M, const vector<int>& products, int k) {
    int currentBoxWeight = 0;
    int boxesUsed = 1;

    for (int weight : products) {
        if (currentBoxWeight + weight <= M) {
            currentBoxWeight += weight;
        } else {
            boxesUsed++;
            currentBoxWeight = weight;
            if (boxesUsed > k) {
                return false;
            }
        }
    }
    return true;
}

int findMinimumM(int n, int k, const vector<int>& products) {
    int left = *max_element(products.begin(), products.end());
    int right = accumulate(products.begin(), products.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canPackWithMLimit(mid, products, k)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> products(n);

    for (int i = 0; i < n; i++) {
        cin >> products[i];
    }

    int result = findMinimumM(n, k, products);
    cout << result << endl;

    return 0;
}
