#include <iostream>
using namespace std;

void ReverseArray(int arr[], int size) { 
    int start = 0, end = size - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int mysize = 5;
    int mysize2 = 6;

    // Reverse both arrays
    ReverseArray(arr, mysize);
    ReverseArray(arr2, mysize2);

    // Print the first reversed array
    cout << "Reversed arr: ";
    for (int i = 0; i < mysize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print the second reversed array
    cout << "Reversed arr2: ";
    for (int i = 0; i < mysize2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
