#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "How many numbers? ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers (small to large): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Search for which number? ";
    cin >> target;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = mid;
            break; 
        }

        if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        cout << "Found at index " << found << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
