#include <iostream>
#include <string>
using namespace std;
int main () {

//Problem1

// int mynumber = 10;
// int *pmynumber = &mynumber;

// cout <<mynumber<< endl;
// cout <<pmynumber << endl;
// cout <<*pmynumber;

//Problem2

// int hisnumber =11;
// int *phisnumber = &hisnumber;

// cout << "Original value: " << hisnumber<<endl;

// *phisnumber = 33;

// cout << "After value: " << hisnumber;



//Problem 3

// void swap(int *a, int *b) {
//     int tempo=*a;
//     *a=*b;
//     *b=tempo;
// }

// int main() {

//     int x,y;
//     cout << "Enter two values to swap: ";
//     cin >> x >> y;

//   swap(&x, &y);
//   cout << "After swapping: " << x << " and " <<  y ;


//Problem4

// int main () {

// int array[] = {1,3,5,6,7};
// int *parray = array;

// for (int i = 0; i<5; i++){
//     cout << *parray << " ";
//     parray++;
// }


   //Problem5

// int size;

// cout << "Enter the size of the array: ";
// cin >> size;

// int array[size];

// cout << "Enter " << size << "numbers: ";
// for (int i=0; i<size; i++) {
//     cin >> array[i];
// }

//  int *start = array;
//  int *end = array + size;
//  int *middle = start + (end - start)/2;

//  cout << "Middle point is: " << *middle;


  //Problem6

//   void squarefunction(int *num) {
//       *num = *num * (*num);
//   }
//   int main(){
//       int number;

//       cout << "Enter a number: ";
//       cin >> number;

//       squarefunction(&number);
//       cout << number;


   //Problem7

//   int size;

//   cout << "Enter a size for an array: ";
//   cin >>size;

//   int array[size];

//   cout << "Enter its values: ";
//   for (int i = 0; i<size; i++) {
//       cin >> array[i];
//   }

//   int *parray=array;



// cout << sizeof(array) << endl;
// cout << sizeof(parray);


//Problem8

// int value = 9;

// void *pvalue = &value;

// int retrieved_value = *(int*)pvalue;

// cout<< "Retrieved value: " << retrieved_value <<endl;

// return retrieved_value;


//Problem9

// int findMax(int *array, int size) {

//     int *parray = array;
//     int max = *parray;

//     for (int i = 0; i<size; i++) {
//         if (*parray > max) {
//             max = *parray;
//         }
//         parray++;
//     }
//     return max;
// }

// int main(){

// int size;
// cout << "Enter a size of the array: ";
// cin>>size;

// int array[size];

// cout << "Enter the values: ";
// for (int i = 0; i<size; i++){
//     cin>>array[i];
// }
// cout <<endl;

// int max_value = findMax(array, size);
// cout << max_value;


//Problem10

// int a, b;

// cout << "Enter integer values: ";
// cin >> a >> b;

// int *pa=&a;
// int *pb=&b;

// cout <<a << " and " <<b <<endl;
// cout <<pa<< " and " <<pb;


//Problem11

// int size;
// cout << "Enter a size for the array: ";
// cin >> size;

// int set[size];

// cout << "Enter values: ";
// for (int i=0; i<size; i++){
//     cin>>set[i];
// }
// int *pset=set;
// int max = *pset;

// for (int i=0; i<size; i++) {
//     if (*pset > max)
//     max =*pset;
//     pset++;
//     }

//     cout << max;


//Problem12

// #define val 33.3
// #define number 50

// int a;

// int& fun() {
//     return a;
// }

// int foo() {
//     return a;
// }

// int main() {
//     int n1 = 9, n2 = 11, *ptr_1 = nullptr, *ptr_2 = nullptr, k = 0;
//     double t;

//     fun() = number;
//     n1 = 12;
//     t = val;
//     k = 8;

//     cout << fun() << " " << n1 << " " << t << " " << k << endl;


//Problem13

// int array[10]={1,4,5,6,66,55,555,443,22,112};
// int *parray=array;

// for(int i = 0; i<10; i++){

//     cout << "Address: " << (parray+i) << " | Value: " << *(parray+i) <<endl;

// }


//Problem14

// int secret_number = 77;
// int *psecret_number = &secret_number;

// cout << *psecret_number;


//Problem15

// int treasures[5]={10,20,30,40,50};
// int *ptreasures = treasures;
// cout << *(ptreasures+4);


//Problem16

// int score =75;
// int *pscore = &score;

// cout << "Original score: " << score <<endl;

// *pscore = score+10;

// cout << "Updated score: " << score;

// }


//Problem17


// void reverseArray(int *arr, int size) {
//     int *start = arr;
//     int *end = arr + size - 1;

//     while (start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     reverseArray(arr, size);

//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;



    //Problem18

    //top1

    // int rankings[]={78,95,85,62,88};
    // int *prankings=rankings;
    // int max=*prankings;

    // for (int i=0; i<5; i++){
    //     if (*prankings > max)
    //     max=*prankings;
    //     prankings++;
    // }
    // cout << max;


    //Problem19


// int* countDigits(const int& number) {
// static int counts[10] = {0};

//     int n = number;

//     if (n == 0) {
//         counts[0] = 1;
//         return counts;
//     }
//     while (n != 0) {
//         int digit = n % 10;
//         counts[digit]++;
//         n /= 10;
//     }

//     return counts;
// }

// int main() {
//     int num = 1223334444;
//     int* digitCounts = countDigits(num);

//     cout << "Digit occurrences in " << num << ":\n";
//     for (int i = 0; i < 10; i++) {
//         cout << i << ": " << digitCounts[i] << "\n";
// }


    //Problem20 //bonus

    //couldnt solve so i did not want to put chat gpt answers


    //Problem21

//   void countChar(const char* str, int& vowelCount, int& consonantCount) {
//     vowelCount = 0;
//     consonantCount = 0;


//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             ++vowelCount;
//         }

//         else if (c >= 'a' && c <= 'z') {
//             ++consonantCount; }
//   }
//   }


// int main() {
//     const char* text = "Hello World! 123";
//     int vowels, consonants;

//     countChar(text, vowels, consonants);

//     std::cout << "Vowels: " << vowels << "\n"
//               << "Consonants: " << consonants << std::endl;

//     return 0;





}