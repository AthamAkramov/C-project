#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Problem15
void greet(){
    cout << "Hello from greet() " <<endl;
}
void bye() {
    cout << "Goodbye from bye()" << endl;
}

//Problem16

int add(int a ,int b){
    return a+b;}
int multiply(int a,int b) {
    return a*b;}



//Problem17

int add(int a, int b) {
    return a + b;
;}
int multiply(int a, int b){
    return a*b
;}
void calculate(int (*operation)(int, int), int x, int y) {
    int result = operation(x, y);
    std::cout << "Result: " << result << std::endl;
}

//Problem18

int add(int a, int b) {
    return a+b;
}
int multiply(int a, int b) {
    return a*b;
}

int main(){


    //Problem1

    // int arr[5] = {10,20,30,40,50};
    // int *parr=arr;

    // for (int i=0; i<5; i++){
    //     cout << *(parr+i)<< " ";
    // }


    //Problem2

    // int arr[6] = {2,4,6,8,10,12};
    // int *parr=arr;

    // for (int i=0; i<6; i++){
    //     cout << *(parr+i) << " "<< "and " << (*(parr+i))*3 << " "<< endl;
    // }


    //Problem3

    // int arr[4]={5,10,15,20};
    // int *parr=arr;

    //     cout << *(parr+2)<<endl;
    //     cout <<arr[2];


    //Problem4

    // int arr[5]={1,2,3,4,5};
    // int *parr=arr;

    // for (int i=4; i>=0; i--){
    //     cout << *(parr+i)<< " ";
    // }


     //Problem5

    //  int arr[3]={1,2,3};
    //  int* parr=arr;
    //  parr=parr+1;

    // cout << *parr;


    //Problem6

    // int arr[4]={10,20,30,40};
    // int *parr=arr;

    // for (int i=0;i<4; i++){
    //     cout << "Value: " << *(parr+i) << " and " << "Address: " << arr+i<<endl;
    // }


    //Problem7

    // int arr[7]={11,4,7,18,5,2,9};
    // int *parr=arr;

    // for (int i=0; i<7; i++){
    //     if (i%2!=0) cout << *(parr+i) << " ";

    // }



     //Problem8

    //  int matrix[2][3]={{1,2,3}, {4,5,6}};
    //  int (*patrix)[3]=matrix;

    //  for (int i=0;i<2; i++){
    //      for (int j=0; j<3; j++){

    //          cout << *(*(patrix+i)+j) << " ";
    //      }
    //  }


    //Problem9

    // int a=7, b=14, c=21;
    // int* ptrs[3]={&a,&b,&c};

    // for (int i=0; i<3; i++){

    //   cout << *(ptrs[i])<< " ";
    // }

    //Problem10

    // int arr[5]={9,3,7,1,6};
    // int *parr=arr;

    //     cout << *(parr+3) << " ";
    //     cout << *(parr+1) << " ";
    //     cout << *(parr+4) << " ";
    //     cout << *(parr+2) << " ";
    //     cout << *(parr+0) << " ";


//     int arr[5] = {9, 3, 7, 1, 6};
//     int *p = arr;


//     for (int i = 0; i < 5; i++) {
//     for (int *current = p; current < p + 4; current++) {
//     if (*current > *(current + 1)) {

//     int temp = *current;
//     *current = *(current + 1);
//     *(current + 1) = temp;
//  }
// }
// }
//     cout << "Sorted array: ";
//     for (int *ptr = p; ptr < p + 5; ptr++) {
//     cout << *ptr << " ";
//     }


    //Problem11

    // const char*suit[4]={"Hearts", "Diamonds" , "CLubs" , "Spades"};

    // for (int i=0; i<4; i++){
    //     cout << (suit[i]) << " ";
    // }

    //Problem12

    // const char *days[3]= {"Mon", "Tue", "Wed"};
    // for (int i=0; i<3; i++){
    //     cout << *((days[i])+1)<< " ";
    // }


    //Problem13



//     const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//     const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
//                           "Eight", "Nine", "Ten", "Jack", "Queen", "King"};


//     int deck[4][13] = {0};

//     deck[0][0] = 1;
//     deck[3][1] = 1;
//     deck[1][11] = 1;

//     for (int suit = 0; suit < 4; suit++) {
//         for (int face = 0; face < 13; face++) {
//             if (deck[suit][face] == 1) {
//                 std::cout << faces[face] << " of " << suits[suit] << std::endl;
//             }
//         }
//     }


//     //Problem14

// int main() {
//     const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//     const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
//                           "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

//     int deck[52];

//     for (int i = 0; i < 52; i++) {
//         deck[i] = i + 1;
//     }
//     std::srand(std::time(0));
//     for (int i = 0; i < 52; i++) {
//         int j = std::rand() % 52;
//         std::swap(deck[i], deck[j]);
//     }
//     for (int i = 0; i < 52; i++) {
//         int card = deck[i] - 1;
//         int suit = card / 13;
//         int face = card % 13;

//         std::cout << faces[face] << " of " << suits[suit];
//         if (i != 51) std::cout << ", ";
//     }


    //Problem15

//  void (*fptr)();

//  fptr=&greet;
//  fptr();

//  fptr=&bye;
//  fptr();


   //Problem16

//   int a,b;

//   cout << "Enter numbers: ";
//   cin >> a>>b;

//   int(*fptr)(int,int);

//   fptr=&add;
//   cout << "Adding: " << fptr(a,b)<<endl;

//   fptr=&multiply;
//   cout << "Multiplication: " << fptr(a,b);


  //Problem17


    // calculate(add, 5, 3);
    // calculate(multiply, 5, 4);



    //Problem18


//     int (*ops[])(int, int) = {add, multiply};

//     int x = 5, y = 3;
//     int choice;

//     cout << "Select operation:\n";
//     cout << "1. Add\n";
//     cout << "2. Multiply\n";
//     cout << "Enter choice (1 or 2): ";
//     cin >> choice;


//     if (choice < 1 || choice > 2) {
//     cout << "Invalid choice!\n";
// return 1;
//     }

//     int result = ops[choice - 1](x, y);
//     cout << "Result: " << result << endl;


        return 0;

    }

