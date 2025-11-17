#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of vectors: ";
    cin >> n;

    vector<int> A(n), B(n);
    cout << "Enter elements of first vector:\n";
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    cout << "Enter elements of second vector:\n";
    for (int i = 0; i < n; ++i)
        cin >> B[i];

    int dotProduct = 0;
    for (int i = 0; i < n; ++i)
        dotProduct += A[i] * B[i];

    cout << "Dot Product of two vectors is = " << dotProduct << endl;

    return 0;
}
// changes made by nice dhillon
// there is an error
