#include <iostream>
using namespace std;

// int main() {

//Problem1

    // int n, num, sum = 0;
    //
    // cout << "How many numbers do you want to add? ";
    // cin >> n;
    //
    // cout << "Enter " << n << " integers:" << endl;
    //
    // for (int i = 0; i < n; i++) {
    //     cin >> num;
    //     sum += num;
    // }
    //
    // cout << "Sum = " << sum << endl;




//Problem2

// double calculateAverage(int arr[], int n) {
//     double sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum / n;
// }
//
// int main() {
//     int n;
//
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//
//     cout << "Enter " << n << " numbers:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     double avg = calculateAverage(arr, n);
//     cout << "Average = " << avg << endl;
//
//     return 0;
// }


//Problem3



// int findMin(int arr[], int size) {
//     int min = arr[0];
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }
//
// int main() {
//     int n;
//
//     cout << "Enter the size of the array: ";
//     cin >> n;
//
//     int arr[n];
//
//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     int minElement = findMin(arr, n);
//     cout << "Minimum element = " << minElement << endl;
//
//     return 0;
// }


//Problem4


// int indexOfLargestElement(double array[], int size) {
//     if (size <= 0) {
//         return -1;
//     }
//
//     int maxIndex = 0;
//     for (int i = 1; i < size; i++) {
//
//         if (array[i] >= array[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
//
// int main() {
//     const int SIZE = 15;
//     double numbers[SIZE];
//
//     cout << "Enter 15 numbers: ";
//     for (int i = 0; i < SIZE; i++) {
//         cin >> numbers[i];
//     }
//
//     int largestIndex = indexOfLargestElement(numbers, SIZE);
//
//     if (largestIndex != -1) {
//         cout << "The index of the largest element is: " << largestIndex << endl;
//         cout << "The largest element is: " << numbers[largestIndex] << endl;
//     } else {
//         cout << "Invalid array size!" << endl;
//     }
//
//     return 0;
// }




//Problem5



// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int size;
//
//     cout << "Enter the size of the arrays: ";
//     cin >> size;
//
//     int list1[size], list2[size];
//
//     cout << "Enter elements of list1: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list1[i];
//     }
//
//     cout << "Enter elements of list2: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list2[i];
//     }
//
//     if (strictlyEqual(list1, list2, size)) {
//         cout << "The two arrays are strictly identical" << endl;
//     } else {
//         cout << "The two arrays are not strictly identical" << endl;
//     }
//
//     return 0;
// }





//Problem6


// int main() {
//     const int LETTERS = 26;
//     int frequencies[LETTERS] = {0};
//     char input;
//
//     cout << "Enter a sequence of characters (enter '0' to stop):" << endl;
//
//     while (true) {
//         cin >> input;
//
//
//         if (input == '0') {
//             break;
//         }
//
//
//         if (input >= 'a' && input <= 'z') {
//             frequencies[input - 'a']++;
//         }
//     }
//
//     cout << "\nLetter frequencies:" << endl;
//     for (int i = 0; i < LETTERS; i++) {
//         if (frequencies[i] > 0) {
//             cout << char('a' + i) << ": " << frequencies[i] << endl;
//         }
//     }
//
//     return 0;
// }




//Problem7


// #include <algorithm>
//
// int main() {
//     int size;
//
//
//     cout << "Enter the number of elements: ";
//     cin >> size;
//
//
//     int arr[size];
//
//
//     cout << "Enter " << size << " integers:" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//
//
//     sort(arr, arr + size);
//
//
//     cout << "Sorted array:" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }




//Problem8


// #include <cstdlib>
// #include <ctime>
//
// int main() {
//     int counts[6] = {0};
//
//     srand(time(0));
//
//     for (int i = 0; i < 10000; i++) {
//         int roll = rand() % 6 + 1;
//         counts[roll-1]++;
//     }
//
//
//     cout << "Die roll counts:\n";
//     for (int i = 0; i < 6; i++) {
//         cout << i+1 << ": " << counts[i] << "\n";
//     }
//
//     return 0;
// }



//Problem9


// void reverseArray(int arr[], int size) {
//     for (int i = 0; i < size/2; i++) {
//         swap(arr[i], arr[size-1-i]);
//     }
// }
//
// int main() {
//     int nums[] = {1, 2, 3, 4, 5};
//     int size = 5;
//
//     reverseArray(nums, size);
//
//     cout << "Reversed: ";
//     for (int i = 0; i < size; i++) {
//         cout << nums[i] << " ";
//     }
//     return 0;
// }



//Problem10


// int main() {
//     int n;
//     cin >> n;
//
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//
//     bool isSorted = true;
//     for (int i = 1; i < n; i++) {
//         if (a[i] < a[i-1]) {
//             isSorted = false;
//             break;
//         }
//     }
//
//     cout << (isSorted ? "YES" : "NO");
//     return 0;
// }