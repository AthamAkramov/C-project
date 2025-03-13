// #include <iostream>
// using namespace std;
//
// //problem1
//
// int product(int num1, int num2) {
//     if (num2 == 0)
//         return 0;
//     return num1 + product(num1, num2 - 1);
// }
//
// int main() {
//     int num1, num2;
//
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//
//     cout  << product(num1, num2);
//
//     return 0;
// }
//
//
// //problem2
//
// int factorial(int n) {
//     if (n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }
//
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     cout << factorial(num) << endl;
//
//     return 0;
// }
//
//
//
//
// //problem3
//
// int fibonacci (int n) {
//
//     if (n==0) return 0;
//     else if (n==1) return 1;
//     else return fibonacci(n-1) + fibonacci (n-2);
// }
//
// int main () {
//
// int num;
//
// cout <<"Enter a number:  ";
// cin >> num;
//
// cout <<fibonacci(num);
// return 0;
// }
//
//
// //problem4
//
//
// int sum (int n) {
//     if (n==0) return 0;
//     else return n + sum(n-1);
// }
//
// int main () {
//
// int num;
//
// cout << " Enter a number: ";
// cin >> num;
//
// cout<< sum(num);
// return 0;
// }
//
// //problem5
//
//
// void print (int n) {
//     if (n==0) return;
//     cout << n << " ";
//     print (n-1);
// }
//
// int main () {
//
//     int n;
//
// cout << "Enter";
// cin >> n;
//
// print(n);
// return 0;
// }
//
//
// //problem6
//
//
// int count (int num) {
//     if (num==0) return 0;
//     return 1 + count(num/10);
// }
//
// int main () {
//
//     int num;
//     cout << "Enter a num: ";
//     cin >> num;
//
//
//     cout << count(num);
//     return 0;
// }
//
// //problem7
//
//
// int sum (int num) {
//     if (num == 0) return 0;
//     return (num%10) + sum(num/10);
// }
//
// int main() {
//
//     int num;
//     cout << "Enter: ";
//     cin>> num;
//
//     cout << sum(num);
//     return 0;
//
// }
//
// //problem8
//
// int power (int x, int y) {
//     if (y==0) return 1;
//     return x * power (x,y-1);
// }
//
//
// int main () {
//
//     int x, y;
//     cout << "Enter numbers: ";
//     cin >> x >> y;
//
//     cout << power (x,y);
//     return 0;
// }
//
//
//
// //problem9
//
//
// int reverse(int num, int reversed = 0) {
//     if (num ==0) return reversed;
//
//     reversed=reversed*10+(num%10);
//     return reverse(num/10,reversed);
//
// }
//
// int main () {
//
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     cout << reverse(num);
//     return 0;
// }
//
// //problem10
//
//
// int reverseNumber (int num, int rev = 0) {
//     if (num==0) return rev;
//
//     return reverseNumber(num/10, rev*10+num%10);
// }
//
// bool isPalindrome(int num) {
//     return num == reverseNumber(num);
// }
//
// int main () {
//
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     if (isPalindrome(num)) cout << "It`s palindrome!";
//     else cout << "Not a palindrome.";
//
//     return 0;
//
// }
//
//
// //problem11
//
//
// bool isPrime(int n, int i = 2) {
//     if (n <= 1) return false;
//     if (i * i > n) return true;
//     if (n % i == 0) return false;
//
//     return isPrime(n, i + 1);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     if (isPrime(num)) cout << num << " is a prime number!";
//     else cout << num << " is not a prime number.";
//
//     return 0;
// }