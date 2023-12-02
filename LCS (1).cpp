#include <iostream>
#include <cstring>
const int MAX = 1000;
using namespace std;

int lcs(const char* X, const char* Y, int m, int n, int memo[MAX][MAX]) {
    if (memo[m][n] != -1) {
        return memo[m][n];
    }

    if (m == 0 || n == 0) {
        memo[m][n] = 0;
    } else if (X[m - 1] == Y[n - 1]) {
        memo[m][n] = 1 + lcs(X, Y, m - 1, n - 1, memo);
    } else {
        memo[m][n] = max(lcs(X, Y, m - 1, n, memo), lcs(X, Y, m, n - 1, memo));
    }

    return memo[m][n];
}

int longestCommonSubsequence(const char* X, const char* Y) {
    int m = strlen(X);
    int n = strlen(Y);

    int memo[MAX][MAX];
    memset(memo, -1, sizeof(memo));

    return lcs(X, Y, m, n, memo);
}

int main() {
    const char* X = "ABCBDAB";
    const char* Y = "BDCAB";

    int result = longestCommonSubsequence(X, Y);

    cout << "Length of Longest Common Subsequence: " << result << endl;

}
