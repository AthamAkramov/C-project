#include <iostream>

using namespace std;

    int main() {
        //problem1.a

        // int num;
        // int total_num = 0;
        //
        // cout << "Enter num: ";
        // cin >> num;
        //
        //
        // for (int i = 1; i <= num; i++) { total_num += i; }
        //
        // cout << total_num << endl;


        //problem1.b

        // int n;
        //
        // cout << "Enter a number: ";
        // cin >> n;
        //
        // int total_sum = 0;
        // int i =1;
        //
        // while (i <= n) { total_sum += i; i++;}
        //
        // cout << total_sum << endl;


        //problem2.a


        // int n;
        //     cin>>n;
        //
        //     int count = 0;
        //     int num =2;
        //
        //     while (count < n) {
        //         bool isPrime = true;
        //
        //         for ( int i = 2; i<=num/2; i++ ) {
        //             if (num % i == 0) {
        //                 isPrime = false; break; }
        //         }
        //
        //             if (isPrime) {
        //                 cout << num << " ";
        //                 count++;
        //             }
        //
        //             num++;
        //         }




        //problem3

     //    int num;
     //
     //    cin >> num;
     //
     //    cout << "Collatz sequence starting with " << num << " ";
     //
     //    while (num !=1) {
     //        cout << num << " ";
     //        if (num %2 == 0) {
     //            num=num/2;
     //        } else {num = 3 * num +1;}
     //    }
     //
     //
     // cout << 1 << endl;

        //problem4

        // int num;
        //
        // cout << "Enter a number: ";
        // cin >> num;
        //
        // if (num <=0) {cout << num << " is less than zero" << endl; return 1; }
        //
        // int count = 0;
        //
        // while (num != 0) {
        //     num = num / 10;
        //     count++;
        // }
        //
        // cout << count << endl;


        //problem5


            // int number;
            // cout << "Enter a positive integer: ";
            // cin >> number;
            //
            // while (number > 0) {
            //     int digit = number % 10;
            //     cout << digit;
            //     number = number / 10;
            // }
            //

        //problem6
    //
    //     int a,b;
    //
    // cout << "Enter a number:";
    //     cin >> a>>b;
    //
    //     while (b!=0) {
    //         int temp =b;
    //         b = a%b;
    //         a = temp;
    //
    //     }
    //     cout << a << endl;


        //problem7

        // int sum =0;
        // int count =0;
        // int number;
        //
        // while (sum <=100) {
        //     cout << "Enter a number : ";
        //     cin >> number;
        //     sum += number;
        //     count++;
        //
        // }
        //
        //
        // cout << "Sum exceeded 100! Total sum: " << sum << endl;
        // cout << "Total numbers entered: " << count << endl;


    //problem8

        // double balance = 500.0;
        // double withdrawalAmount;
        //
        //
        // while (true) {
        //     cout << "Your balance is $" << balance << endl;
        //     cout << "Enter withdrawal amount (or 0 to cancel): ";
        //     cin >> withdrawalAmount;
        //
        //     if (withdrawalAmount == 0) {
        //         cout << "Transaction canceled. " << endl;
        //         break;
        //     }
        //
        //     if (withdrawalAmount > balance) {
        //         cout << "Insufficient balance." << endl;
        //     } else {
        //         balance -= withdrawalAmount;
        //         cout << "Balance is $" << balance << endl;
        //
        //     }
        //
        //     if (balance == 0) {
        //         cout << "Transaction completed. " << endl;
        //         break;
        //     }
        // }
        //
        //

    //problem9

    // char input;
    //
    //     while (true) {
    //         cout << "Please enter a character: ";
    //         cin>>input;
    //
    //         if (input == 'Y' || input == 'N') {
    //             cout<< "Accepted character!"; break;
    //         }
    //         else {
    //             cout<< "Invalid character!" << endl;
    //         }
    //     }


        //problem10
        //
        // int choice;
        // double balance = 1000.0;
        //
        // while (true) {
        //     cout << "ATM Menu:" << endl;
        //     cout << "1. Check balance" << endl;
        //     cout << "2. Exit" << endl;
        //
        //     cout << "Enter your choice: ";
        //     cin >> choice;
        //
        //     switch (choice) {
        //         case 1:
        //             cout << "Your balance is: " << balance << endl;
        //             break;
        //
        //         case 2:
        //             cout << "Exiting..." << endl;
        //             return 0;
        //
        //         default:
        //             cout << "Invalid choice." << endl;
        //         break;
        //     }
        //     cout << "....................." << endl;
        // }
        //
        //
        //
        //

      //problem11

            // int choice;
            // double a, b;
            //
            // while (true) {
            //
            //     cout << "1. Addition" << endl;
            //     cout << "2. Subtraction" << endl;
            //     cout << "3. Multiplication" << endl;
            //     cout << "4. Division" << endl;
            //     cout << "5. Exit" << endl;
            //
            //
            //     cout << "Enter your choice: ";
            //     cin >> choice;
            //
            //     if (choice == 5) {
            //         cout << "Exiting the program. Goodbye!" << endl;
            //         return 0;
            //     }
            //
            //
            //     cout << "Enter the first number: ";
            //     cin >> a;
            //     cout << "Enter the second number: ";
            //     cin >> b;
            //
            //
            //     switch (choice) {
            //         case 1:
            //             cout << a << " + " << b << " = " << a + b << endl;
            //         break;
            //
            //         case 2:
            //             cout << a << " - " << b << " = " << a - b << endl;
            //         break;
            //
            //         case 3:
            //             cout << a << " * " << b << " = " << a * b << endl;
            //         break;
            //
            //         case 4:
            //             if (b != 0) {
            //                 cout << a << " / " << b << " = " << a / b << endl;
            //             } else {
            //                 cout << "Error: Division by zero is not allowed." << endl;
            //             }
            //         break;
            //
            //         default:
            //             cout << "Invalid choice. Please select a valid option (1-5)." << endl;
            //         break;
            //     }
            //
            //     cout << "----------------------------------------" << endl;
            // }


        //problem12

        // int truepassword = 6543;
        // int password;
        //
        // while (true) {
        //
        //     cout << "Enter password: ";
        //     cin >> password;
        //
        //     if (password == truepassword) {
        //         cout << "Access granted" << endl; break;
        //     } else {
        //         cout << "Incorrect" << endl;
        //     }
        // }


    int truenumber = 69;
        int number;

        while (true) {
            cout << "Guess the number : ";
            cin >> number;

            if (number == truenumber) { cout << "Correct!" << endl; break;
            } else if (number > truenumber) {
                cout << "Too much" << endl;
            } else if (number < truenumber) {
            cout << "Too small" << endl;}
        }





            return 0;
        }



