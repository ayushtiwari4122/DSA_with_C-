#include <iostream>
using namespace std;

// // sum of 2 num-
// double sum (double a , double b){
//     double s = a + b;
//     return s;
// }

// // min of 2 num-
// double min(double a, double b){
//     if( a < b){
//         return a;
//     }else {
//         return b;
//     }
// }

// int main() {
//     cout << min(15,20) << endl;

//     cout<< "min =" << min(14.52,145.524) << endl;
    
// }

// functiions to continue

// 05/10
// Calculate sum of digits of a num
// int sumOfDigits (int num){
//     int digitSum = 0;

//     while (num > 0) {
//         int lastDigit = num%10;
//         num = num/10;

//         digitSum+= lastDigit;
//     }
//     return digitSum;
// }

// int main(){
//     cout << "sum =" << sumOfDigits(2356) << endl;

//     return 0;
// }



// Calculate nCr binomial coefficient for n & r
int factorial(int n){
    int fact = 1;
    
    while (n > 0){
        fact*=n;
        n--;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n= 8 , r = 2;
    cout << "Factorial of nCr = " << nCr(n ,r) << endl;

    return 0;
}