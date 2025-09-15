#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 10, 20};
    int index = -1;
    int value = 5;  
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  

        if (arr[mid] == value) {
            index = mid;
            break;
        } else if (arr[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index == -1) {
        cout << "not found" << endl;
    } else {
        cout << "value found at index " << index << endl;
    }

    return 0;
}
