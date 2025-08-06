#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int even[n], odd[n];
    int e = 0, o = 0;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i % 2 == 0)
            even[e++] = arr[i]; // even index
        else
            odd[o++] = arr[i];  // odd index
    }

    // Sort even[] in ascending order (simple bubble sort)
    for (int i = 0; i < e - 1; i++) {
        for (int j = i + 1; j < e; j++) {
            if (even[i] > even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    // Sort odd[] in descending order (simple bubble sort)
    for (int i = 0; i < o - 1; i++) {
        for (int j = i + 1; j < o; j++) {
            if (odd[i] < odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    // Print even index elements first
    for (int i = 0; i < e; i++) {
        cout << even[i] << " ";
    }

    // Then print odd index elements
    for (int i = 0; i < o; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}
