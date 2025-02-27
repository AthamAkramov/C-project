#include <iostream>
using namespace std;


//problem1

double calculateTotal (int pizzaQTY, int burgerQTY, int saladQTY) {
    double pizzaPrice=10, burgerPrice=8, saladPrice=5;
    return (pizzaQTY*pizzaPrice) + (burgerQTY*burgerPrice) + (saladQTY*saladPrice);
}
int main () {
int choice, quantity;
int pizzaQTY=0, burgerQTY=0, saladQTY=0;
double totalPrice = 0;

do {
    cout << "Menu:\n";
    cout << "1. Pizza: $10\n";
    cout << "2. Burger: $8\n";
    cout << "3. Salad: $5\n";
    cout << "4. Checkout & Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Enter the quantity of Pizza: ";
        cin >> quantity;
        pizzaQTY+=quantity;
        break;

        case 2: cout << "Enter the quantity of Burger: " ;
        cin >> quantity;
        burgerQTY+=quantity;
        break;

        case 3: cout << "Enter the quantity of Salad: ";
        cin >> quantity;
        saladQTY+=quantity;
        break;

        case 4: totalPrice= calculateTotal(pizzaQTY, burgerQTY, saladQTY);
        cout << " Total Price is: " << totalPrice << "$" << endl;
        break;

        default: cout << "Invalid choice";
    }

    } while (choice != 4);



//problem2
//
// double calculateFee (int hours) {
//     if (hours <=2) {
//         return 0;
//     }
//     else if (hours <=5) {
//       return  (hours -2) * 2;
//     }
//     else
//       return (3*2) + ((hours - 5) * 5);
// }
//
// int main() {
//     int hours;
//
//     while (true) {
//         cout << "Please enter the hours: ";
//         cin >> hours;
//
//         if (hours <0) {
//             cout << "Invalid hours" << endl; continue;
//         }
//
//         double fee = calculateFee (hours);
//         cout << "Your fee: " << fee << endl;
//     }
// }


//problem3

// double balance = 500.0;
//
// void deposit (double amount) {
//     balance += amount;
//     cout << balance << endl;
// }
//
// void withdraw (double amount) {
//     if (amount > balance) cout << "Failed" << endl;
//     else { balance -= amount;
//         cout << balance << endl;
//     }
// }
//
// void checkBalance () {
//     cout << balance << endl;
// }
//
// int main() {
//
//     int choice;
//     double amount;
//
//     do {
//         cout << "Menu: " << endl;
//         cout << "1. Deposit" << endl;
//         cout << "2. Withdraw" << endl;
//         cout << "3. Check Balance" << endl;
//         cout << "4. Exit" << endl;
//
//         cout << "Enter your choice: ";
//         cin >>choice;
//
//         switch (choice) {
//             case 1:
//
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//             deposit(amount);
//             break;
//                 case 2:
//                     cout << "Enter amount to withdraw: ";
//             cin >> amount;
//             withdraw(amount);
//             break;
//
//             case 3: checkBalance(); break;
//
//             case 4: cout << "Bye!" << endl; break;
//
//             default : cout << "Invalid Input" << endl;
//
//         }
//     } while(choice != 4); return 0;
// }


//problem4

// double calculateCost (int movieAquantity, int movieBquantity, int movieCquantity) {
//     int movieAprice=8, movieBprice=10, movieCprice=12;
//
//     return (movieAquantity * movieAprice) + (movieBquantity * movieBprice) + (movieCquantity * movieCprice);
//
//
// }
//
// int main() {
//     int choice;
//     int quantity;
//
//     int movieAquantity=0, movieBquantity=0, movieCquantity=0;
//     double cost=0;
//
// do {
//     cout << "1. Movie A: $8" << endl;
//     cout << "2. Movie B: $10" << endl;
//     cout << "3. Movie C: $12" << endl;
//     cout << "4. Total price " << endl;
//
//     cout << "Your choice: ";
//     cin >> choice;
//
//     switch (choice) {
//         case 1: cout << "Enter quantity of a Movie A: ";
//         cin >> quantity;
//         movieAquantity += quantity;
//         break;
//
//         case 2: cout << "Enter quantity of a Movie B: ";
//         cin >> quantity;
//         movieBquantity += quantity;
//         break;
//
//         case 3: cout << "Enter quantity of a Movie C: ";
//         cin >> quantity;
//         movieCquantity += quantity;
//         break;
//
//         case 4: cost = calculateCost(movieAquantity, movieBquantity, movieCquantity);
//         cout << "The total price of a movie is " << cost << endl; break;
//
//
//         default: cout << "Enter a valid choice." << endl;
//         break;
//     }
// } while (choice != 4);
//
//
// }


//problem5

//
// int calculateFare(int TrainXqty, int TrainYqty, int TrainZqty) {
//     int TrainXprice=15; int TrainYprice=20; int TrainZprice=25;
//     return (TrainXqty*TrainXprice) + (TrainYqty*TrainYprice) + (TrainZqty*TrainZprice);
// }
//
//
// int main() {
//     int TrainXqty=0, TrainYqty=0, TrainZqty=0;
//     int choice;
//     int quantity;
//     int fare=0;
//
//     do {
//         cout << "Prices: " << endl;
//         cout << "1. Train X: $15" << endl;
//         cout << "2. Train Y: $20" << endl;
//         cout << "3. Train Z: $25" << endl;
//         cout << "4. Total Fare" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         switch (choice) {
//             case 1:
//                 cout << "Enter the quantity of tickets of Train A: ";
//                 cin >> quantity;
//                 TrainXqty+=quantity;
//                 break;
//
//             case 2:
//                  cout << "Enter the quantity of tickets of Train B: ";
//                  cin >> quantity;
//             TrainYqty+=quantity;
//             break;
//
//             case 3:
//                  cout << "Enter the quantity of tickets of Train C: ";
//             cin >> quantity;
//             TrainZqty+=quantity;
//             break;
//
//             case 4:
//
//             fare = calculateFare(TrainXqty,TrainYqty,TrainZqty );
//             cout << "Total Fare: " << fare << "$" << endl;
//             break;
//
//             default: cout << "Enter a valid choice." << endl;
//             break;
//                         }
//
//     } while (choice != 4);
// }







//problem6

// void checkPassword(string password) {
//     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
//     string specialChars = "!@#$%^&*()_+-=[]{}|;:'\",.<>?/";
//
//     if (password.length() < 8) {
//         cout << "Weak Password: Must be at least 8 characters long.\n";
//         return;
//     }
//
//
//     for (char ch : password) {
//         if (isupper(ch)) hasUpper = true;
//         if (islower(ch)) hasLower = true;
//         if (isdigit(ch)) hasDigit = true;
//         if (specialChars.find(ch) != string::npos) hasSpecial = true;
//     }
//
//
//     if (hasUpper && hasLower && hasDigit && hasSpecial) {
//         cout << "Strong Password!\n";
//     } else {
//         cout << "Weak Password: Missing criteria:\n";
//         if (!hasUpper) cout << "- At least one uppercase letter\n";
//         if (!hasLower) cout << "- At least one lowercase letter\n";
//         if (!hasDigit) cout << "- At least one digit\n";
//         if (!hasSpecial) cout << "- At least one special symbol (!@#$%)\n";
//     }
// }
//
// int main() {
//     string password;
//
//     cout << "Enter your password: ";
//     cin >> password;
//
//     checkPassword(password);

return 0;
}