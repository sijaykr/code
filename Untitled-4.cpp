#include<bits/stdc++.h>
using namespace std;

int countnum(int arr[], int n, int key) {
    int first = -1, last = -1, start = 0, end = n - 1, mid;
    
    // Find first occurrence
    while (start <= end) {
        mid = start + (end - start) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            first = mid;
            end = mid - 1; // Move end to mid - 1 to find the first occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Find last occurrence
    start = 0; // Reset start
    end = n - 1; // Reset end
    while (start <= end) {
        mid = start + (end - start) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            last = mid;
            start = mid + 1; // Move start to mid + 1 to find the last occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // If key is not found
    if (first == -1 || last == -1) {
        return 0;
    }

    return (last - first) + 1;
}

int main() {
    int key, n, arr[1000];
    cout << "Please enter the number of elements: ";
    cin >> n;
    cout << "Please enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Please enter the key: ";
    cin >> key;
    int occurrences = countnum(arr, n, key);
    if (occurrences > 0) {
        cout << "The occurrence count of the key is: " << occurrences << endl;
    } else {
        cout << "The key is not present in the array." << endl;
    }

    return 0;
}
