#include <stdio.h>

#define MAXN 1005

int N, K, A[MAXN][MAXN], S[MAXN][MAXN];

int main() {
    FILE *fin = fopen("CAU3.INP", "r");
    FILE *fout = fopen("CAU3.OUT", "w");

    fscanf(fin, "%d %d", &N, &K);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            fscanf(fin, "%d", &A[i][j]);
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j]; //prefixSum
        }
    }

    int maxSum = 0;
    for (int i = 1; i <= N - K + 1; i++) {
        for (int j = 1; j <= N - K + 1; j++) {
            int sum = S[i + K - 1][j + K - 1] - S[i - 1][j + K - 1] - S[i + K - 1][j - 1] + S[i - 1][j - 1];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    fprintf(fout, "%d", maxSum);
    fclose(fin);
    fclose(fout);
    return 0;
}