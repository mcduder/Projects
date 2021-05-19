#include <iostream>

using namespace std;

void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main() {
    int arr[6];

    cout << "Enter 6 positive integers" << endl;
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, 5);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort(int arr[], int left, int right) {
    if(right > left) {
        // finds the middle of the array
        int m = left + (right-left) / 2;
        mergeSort(arr, left, m);
        mergeSort(arr, m+1, right);
        merge(arr, left, m, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int leftCount = mid - left + 1;
    int rightCount = right - mid;

    int leftTemp[leftCount];
    int rightTemp[rightCount];

    for(int i = 0; i < leftCount; i++) {
        leftTemp[i] = arr[left + i];
    }

    for(int j = 0; j < rightCount; j++) {
        rightTemp[j] = arr[mid+1+j];
    }

    int i = 0;
    int j = 0;
    int k = left;
    
    while (i < leftCount && j < rightCount) {
        if(leftTemp[i] <= rightTemp[j]) {
            arr[k] = leftTemp[i];
            i++;
        } else {
            arr[k] = rightTemp[j];
            j++;
        }
        k++;
    }

    while(i < leftCount) {
        arr[k] = leftTemp[i];
        i++;
        k++;
    }

    while(j < rightCount) {
        arr[k] = rightTemp[j];
        j++;
        k++;
    }
}