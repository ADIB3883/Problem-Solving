#include <iostream>
#include <vector>
using namespace std;
const int N = 1e9 + 7;
long long merge(vector<int>& A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    vector<int> L(n1 + 1), R(n2 + 1); // Temporary arrays
    long long invCount = 0;

    // Copy left part
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];

    // Copy right part
    for (int j = 0; j < n2; j++)
        R[j] = A[q + 1 + j];

    // Sentinels (infinity markers)
    L[n1] = R[n2] = N;

    int i = 0, j = 0;

    // Merge and count inversions
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];  
            i++;
        } else {
            A[k] = R[j];
            j++;
            invCount += (n1 - i); // Count inversions
        }
    }
    return invCount;
}

// Recursive function to count inversions using Merge Sort
long long mergeSort(vector<int>& A, int p, int r) {
    if (p >= r) return 0;

    int q = p + (r - p) / 2;
    long long invCount = 0;

    invCount += mergeSort(A, p, q);     // Left half
    invCount += mergeSort(A, q + 1, r); // Right half
    invCount += merge(A, p, q, r);      // Merge & count

    return invCount;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    long long result = mergeSort(A, 0, N - 1);
    cout << result << endl;

    return 0;
}
