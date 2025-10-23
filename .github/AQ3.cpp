#include <iostream>
using namespace std;

int missingNumberLinear(int arr[], int n) {
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i=0;i<n-1;i++) sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1,2,3,5,6};
    cout<<missingNumberLinear(arr,6);
    return 0;
}

//part b

int missingNumberBinary(int arr[], int n) {
    int l=0,r=n-1;
    while(l<=r) {
        int mid=(l+r)/2;
        if(arr[mid]!=mid+1 && arr[mid-1]==mid) return mid+1;
        else if(arr[mid]==mid+1) l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,6,7};
    cout<<missingNumberBinary(arr,6);
    return 0;
}
