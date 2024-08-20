#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countGiftBoxes(const vector<int>& A, int N, int d) {
    int count = 0;

    // Sắp xếp dãy số theo thứ tự tăng dần
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());

    // Duyệt từng cặp a[i], a[j]
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            int minValue = sortedA[i];
            int maxValue = sortedA[j];

            // Tìm khoảng giá trị a[k] sao cho maxValue - minValue <= d
            if (maxValue - minValue > d) break;

            int l = j + 1;
            int r = N - 1;

            // Tìm kiếm nhị phân để tìm chỉ số k lớn nhất thỏa mãn điều kiện
            while (l <= r) {
                int mid = (l + r) / 2;

                if (sortedA[mid] - minValue <= d) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            // Đếm số bộ ba thỏa mãn điều kiện từ a[i] đến a[r]
            count += r - j;
        }
    }

    return count;
}

int main() {
    int N, d;
    cin >> N >> d;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = countGiftBoxes(A, N, d);
    cout << result << endl;

    return 0;
}
