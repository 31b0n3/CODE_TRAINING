#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int countTriplets(vector<int>& arr, int d) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        int j = i + 2; // Bắt đầu từ i+2 để tạo thành bộ ba
        while (j < n && arr[j] - arr[i] <= d) {
            j++;
        }
        // Số bộ ba hợp lệ: chọn 2 trong số (j - i - 1) phần tử còn lại sau a[i]
        int num_elements = j - i - 1;
        if (num_elements >= 2) {
            count += num_elements * (num_elements - 1) / 2;
        }
    }

    return count;
}

int main() {
    int N, d;
    ifstream fin("HOPQUA.INP");
    ofstream fout("HOPQUA.OUT");
    fin >> N >> d;
    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        fin >> arr[i];
    }

    int result = countTriplets(arr, d);
    fout << result << endl;

    return 0;
}
