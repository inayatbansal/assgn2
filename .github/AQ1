#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << binarySearch(arr, n, 30);
    return 0;
}
