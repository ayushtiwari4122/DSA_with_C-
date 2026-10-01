#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    // Square No. Pattern--
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n ; j++){
    //         cout << (j+1 );
    //     }
    //     cout << endl;
    // }

    // SQUARE PATTERN CHARACTERS--
    // for(int i =0 ; i < n; i++){
    //     char ch = 'A';
    //     for(int j=0; j < n ; j++){
    //         cout << ch;
    //         ch +=1;
    //     }
    //     cout << endl;
    // }


    // SQUARE PATTERN Continuous Numbers--
    // int temp = 1;
    // for(int i=0; i < n; i ++){
    //     for(int j = 0; j < n; j++){
    //         cout << temp << " ";
    //         temp++;
    //     }
    //     cout << endl;
    // }


    // // SQUAE PATTERN Continuos Characters--
    // char ch = 'a';
    // for(int i = 0; i < n; i++){
    //     for(int j =0; j < n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }


    // Right-Triangle Patterns--
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < (i+1); j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Traingle Patter with different num but same in single line--
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << i+1 << " " ;
    //     }
    //     cout << endl;
    // }

    // Triangle Pattern with same char in diff line--
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    //     ch++;
    // }


    // FLOYD's Triangle Pattern--
    // int num = 1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << num <<" ";
    //         num +=1;
    //     }
    //     cout << endl;
        
    // }

    // FLOYD's Triangle Char--
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for (int j =0 ; j < i+1; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // BACKWARD LOOP/REVERSE TRIANGLE=-=
    // for( int i = 0; i < n; i++){
    //     for(int j = i+1; j > 0; j--){
    //         cout << j << " ";

    //     }
    //     cout << endl;
    // }
    
    
    // Inverted Triangle Patter--
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j <(n-i); j++){
    //         cout << (n-i);

    //     }
    //     cout << endl;
    // } 
    
    // Iverted Triangle Pattern Characters--
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for(int j =0; j < i; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j <(n-i); j++){
    //         cout << ch;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // PYRAMID PATTERN--
    // for(int i = 0; i < n; i++){
    //     // Spaces-
    //     for(int j = 0; j < (n-i-1);j++){
    //         cout << " ";
    //     }
    //     // Number left side-
    //     for(int j = 1; j <= i+1; j++){
    //         cout << j;
    //     }
    //     // number right side-
    //     for(int j = i ; j > 0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    
}