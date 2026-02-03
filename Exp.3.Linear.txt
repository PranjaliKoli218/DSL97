#include <iostream>
using namespace std;

int main() {
    int n, target;
 
    cout << "How many numbers? ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number to find: ";
    cin >> target;

    int i = 0;
    int found = -1;

    while (i < n) {
        if (arr[i] == target) {
            found = i;
            break;
        }
        i++;
    }

    if (found != -1) cout << "Found at index: " << found << endl;
    else cout << "Not found" << endl;

    return 0;
}
