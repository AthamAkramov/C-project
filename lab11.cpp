#include <iostream>
using namespace std;

void find_maximum(int matrix[][100], int a, int b) {
    for (int i = 0; i < a; i++) {
        int max = 0;
        for (int j = 0; j < b; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        cout <<"Maximum of row "<<i<<" is " <<max << endl;
    }
}


    // problem1
    // int n, m;
    // int sum = 0;
    // cout << "Input N and M numbers: ";
    // cin >> n >> m;
    // int new_arr[n][m];
    // for (int i=0; i < n; i++) {
    //     for (int j=0; j< m; j++) {
    //         new_arr[i][j] = i + j;
    //         sum += new_arr[i][j];
    //         cout << new_arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "Sum is: "<<sum << endl;

    // problem2
    // int n,m;
    // cout << "Enter N and M: ";
    // cin >> n >> m;
    // int new_arr2[100][100];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j< m; j++) {
    //         new_arr2[i][j] = i * j;
    //     }
    // }
    // find_maximum(new_arr2, n, m);

    // problem3

    
//     int N, M, sum=0;
    
    
//     cout << "Enter the row(N) and Columns(M): ";
//     cin >> N >> M;
    
//     int arr[N][M];
    
//     cout << "Enter the elements of the array: ";
//     for (int i=0; i<N; i++) {
//         for (int j=0; j<M; j++) { 
//             cin >>arr[i][j];
        
//     }
    
//     }
    
//     for (int j = 0; j<M; j++) {
//         int colsum = 0;
//         for (int i = 0; i < N; i++) {
//             colsum+=arr[i][j];
//         }
        
//         cout << "Sum of column " << j+1 << " is " << colsum << endl;
        
        
//     }
    
//problem4

//int N;
    
//     cout << "Enter the rows(N) and columns(M): ";
//     cin >> N;
    
//     int matrix[100][100];
//     int sum =0;
    
//     cout << "Enter the values: ";
//     for (int i = 0; i<N; i++) {
//         for (int j=0; j<N;j++) {
            
//             cin >> matrix[i][j];
//             if (i==j) sum+=matrix[i][j];
//         }
//     }
    
//     cout << "Sum is: " << sum;
// 

//problem5

// int N, M;
    
    // cout << "Enter N and M";
    // cin >> N >> M;
    
    // int matrix[100][100];
    // int transpose [100][100];
    
    // cout << "Enter values: ";
     
    //  for (int i =0; i<N; i++) {
    //      for (int j=0; j<M; j++) {
             
    //          cin >> matrix[i][j]; }
             
    //  }
     
    //  for (int i = 0; i<N; i++) {
    //      for (int j =0; j<M; j++) {
    //         transpose[j][i] = matrix [i][j];
    //      }
    //  }
             
    //          cout << "Transponded matrix is: "; 
    //          for (int i = 0; i <M; i++) {
    //              for (int j =0; j <N; j++) {
    //                  cout << transpose[i][j] << " ";
    //              }
    //              cout << endl;
    //          }
             


   //problem6

// int row1, col1; 
    
    // cout << "Enter a matrix (N and M): ";
    // cin >> row1 >> col1;
    
    // int matrix1[100][100];
    // cout << "Enter the values: ";
    //     for (int i = 0; i <row1; i++) {
    //         for (int j=0; j<col1; j++) {
    //             cin >> matrix1[i][j];
                
    //         }
    //     }
        
    //     int row2, col2;
        
    // cout << "Enter a matrix (A and B): ";
    // cin >> row2 >> col2;
        
    // int matrix2[100][100];
    // cout << "Enter the values: ";
    //     for (int i = 0; i < row2; i++) {
    //         for (int j = 0; j < col2; j++) {
    //             cin >> matrix2[i][j];
       
    //         }
    //     }
        
    // if (col1 != row2) {
    //     cout << "Not possible!";
    // }
    
    // int result[100][100] = {0};
    
    // for (int i=0; i < row1; i++) {
    //     for (int j=0; j < col2; j++) {
    //         for (int k = 0; k <col1; k++) {
    //             result[i][j] +=matrix1[i][k] * matrix2[k][j];
    //         }
    //     }
    // }
    
    // cout << "Resultant matrix is: ";
    // for (int i = 0; i < row1; i++) {
    //     for (int j = 0; j < col2; j++) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }


//problem7

 // int N;
    
    // cout << "Enter N";
    // cin >> N;
    
    // int matrix[100][100];
    // int rotated[100][100];
    
    // cout << "Enter values: ";
    // for (int i=0; i <N; i++) {
    //     for (int j=0; j<N; j++) {
    //         cin >> matrix[i][j]; }
    // }
    
    // for (int i = 0; i <N; i++) {
    //     for (int j=0; j<N; j++) {
    //         rotated[i][j] = matrix[N-1-j][i];
    //     }
    // }
    
    // cout << "Rotated matrix: "; 
    // for (int i = 0; i <N; i++) {
    //     for (int j = 0; j <N; j++) {
    //         cout << rotated[i][j] << " ";
    //     }
        
    //     cout << endl;
    // }



//problem1.1


//     string s;
//     cout << "Enter a lowercase string: ";
//     cin >> s;
    
//     int vowels = 0, consonants = 0; 
    
//     for (char c : s) {
//         if (c=='a' || c == 'e' || c=='i' || c=='o' || c=='u') 
//         vowels++;
//         else consonants++;
              
//     }
    
//     cout << "Vowels:" << vowels << endl;
//     cout << "Consonants: " << consonants << endl;


//problem2.1

 // string s;
    // cout << "Enter a string: ";
    // getline(cin, s);
    
    // cout << "Reversed string: ";
    // for (int i = s.length() - 1; i>=0; i--) {
    //     cout << s[i];
    // }


//problem3.1

// bool isPalindrome(string s) {
//     int left =0;
//     int right = s.length() - 1;
    
//     while (left < right) {
//         if (s[left] !=s[right]) {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// int main () {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);
    
//     cout << "The string is " << (isPalindrome(s) ? "" : "NOT") << " a palindrome.";


 
    //Problem4.1
    
//     string s;
//     cout << "Enter a string: ";
//     getline(cin,s);
    
    
//     int freq[256] = {0};
    
//     for (char c : s) {
//         freq[c]++;
//     }
   
//   char maxChar;
//   int maxCount = 0;
   
//   for (int i=0; i<256; i++) {
//       if (freq[i] > maxCount) {
//           maxCount = freq[i];
//           maxChar = (char)i;
//       }
//   }
   
//   cout << "Most character used is: " <<maxChar << endl;



//Problem5.1

// string s;
// cout << "Enter a string: ";
// getline(cin,s);

// bool seen[256] = {false};
// string result;

// for (char c : s) {
//     if (!seen[c]) {
//         result+=c;
//         seen[c] = true;
//     }
// }

// cout << "After removing duplication: " << result;


//Problem6.1

// string sentence;
// cout << "Enter a sentence: ";
// getline(cin, sentence);

// stringstream ss(sentence);
// string word, longestWord;

// while (ss >> word) {
//     if (word.length() > longestWord.length() ) {
//         longestWord = word;
//     }
// }

// cout << "Longest word: " << longestWord;


//}
