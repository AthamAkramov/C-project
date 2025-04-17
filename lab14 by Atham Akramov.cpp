#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;






//Problem13

// struct Date {
//     int day,month,year;
// };
//  Date today;

 //Problem14

//  struct StudentInfo {
//      int id,age;
//      char gender;
//      float CGA;
//  };
//  StudentInfo student11;

//Problem15

// struct StudentGrade {
//   int  Lab[5]={2,5,7,8,9};
//     int Homework[3]{3,4,5};
//     int Exam[2]{4,5};
//     int total = 0;
//     float average;

// };

// StudentGrade Atham;


//Problem16

// struct StudentInfo {
//     int id,age;
//     char gender;
// };

// StudentInfo students[3]={
//     {240333, 18, 'M'},
//     {240999, 15, 'M'},
//     {240555, 13, 'F'}
// };


//Problem17

// struct StudentInfo{
//     int id,age;
//     char gender;
// };

// StudentInfo Student1;
// StudentInfo Student2;


//Prroblem18

// struct StudentInfo{
//     int age, id;
// };

// StudentInfo student[5]={
//     {233,18},
//     {234,19},
//     {211,20},
//     {299,21},
//     {211,20}
// };


//Problem19;

// struct Date {
//     int day,month,year;
// };

// struct BankAccount {
//     string name;
//     int AccountNo;
//     int balance;
//     Date Birthday;

// };
// BankAccount user1;


//Problem20

// struct Point{
//     int x,y;
// };
// Point pointer;

// struct Line{
//     int p1,p2;
// };
// Line liner;


//Problem21

// struct Triangle{
//     int x,y;
// };

// Triangle point1 = {0,0};
// Triangle point2 = {2,0};
// Triangle point3 = {0,4};

// double distance(Triangle a, Triangle b) {
//     return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
// };



//Problem24

// struct Contact {
//     string name;
//     string phone;
//     string email;
// };

// Contact user1={"Atham", "+998911234567", "adi@mail.com"};
// Contact user2={"Ali", "+998901234567", "ali@mail.com"};





int main(){


//Problem1

ofstream fout("output.txt");
fout << "Hello, File!";
fout.close();
















    //Problem13

    // cout << "Enter the day: "<<endl;
    // cin >> today.day;
    // cout << "Enter the month: "<<endl;
    // cin >> today.month;
    // cout <<"Enter the year: ";
    // cin >> today.year;

    // cout << today.day << "-" << today.month << "-" << today.year;


    //Problem14

    // cout << "Enter the student`s Id, age, gender(M/F) and CGA in order: ";
    // cin >> student11.id >> student11.age >> student11.gender >> student11.CGA;

    // cout << "Id: " << student11.id << ", " <<  "Age: " << student11.age << ", "<< "Gender: " << student11.gender << ", " << "CGA: "<< student11.CGA;


    //Problem15

    // Atham.total=0;


    // for (int i =0; i<5; i++){
    // Atham.total+=Atham.Lab[i];
    // }

    //  for (int i =0; i<3; i++){
    // Atham.total+=Atham.Homework[i];
    // }

    //  for (int i =0; i<2; i++){
    // Atham.total+=Atham.Exam[i];
    // }

    // Atham.average=Atham.total/10.0;

    // cout << "Total: " << Atham.total << " Average: " << Atham.average;


    // cout << "Students: " << endl;
    // for (int i=0; i<3; i++){
    //     cout << "ID: " << students[i].id <<endl <<
    //     "Age: " << students[i].age << endl<<
    //     "Gender: " << students[i].gender<<endl;

    // }

    //Problem17

    // Student1.id=240399; Student1.age=18; Student1.gender='M';
    // Student2.id=240399; Student2.age=18; Student2.gender='M';

    // cout << "Student 1: " <<endl;
    // cout << "Id:" << Student1.id<< " " << "Age: " << Student1.age << " " << "Gender: " << Student1.gender<<endl;

    // cout << "Student 2: " <<endl;
    // cout << "Id:" << Student2.id<< " " << "Age: " << Student2.age << " " << "Gender: " << Student2.gender<<endl;



    //Problem18

//  cout << "Student 3: ";
//  cout << student[2].age << " " << student[2].id<<endl;
//  cout << "Student 5: ";
//  cout << student[4].age << " " << student[4].id <<endl;



  //Problem19

//  user1.name="Alex"; user1.AccountNo=102; user1.balance=100;
//  user1.Birthday.day=15; user1.Birthday.month=02; user1.Birthday.year=2000;

//   cout<< "Name: " << user1.name<<endl;
//   cout << "AccountNo: " <<user1.AccountNo<<endl;
//   cout << "Balance: " << " $ " << user1.balance <<endl;
//   cout << "Birthday: " << user1.Birthday.day << "-"<<user1.Birthday.month<<"-"<<user1.Birthday.year;



    //Problem20

//   pointer.x=0;
//   pointer.y=0;

//   liner.p1=3.0;
//   liner.p2=4.0;

//   double distance = sqrt(
//         pow(liner.p1 - pointer.x, 2) +
//         pow(liner.p2 - pointer.y, 2) );

//   cout << "Distance: " << distance;


//Problem21


// double side1 = distance (point1, point2);
// double side2 = distance (point2, point3);
// double side3 = distance (point3, point1);

// double perimeter = side1+side2+side3;

// cout << "Perimeter: " << perimeter;



//Problem24

// cout << user2.name << " " << user2.phone << " " << user2.email;




}