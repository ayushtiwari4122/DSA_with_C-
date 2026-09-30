#include <iostream>
using namespace std;
int main() {
    // // SUm of number from 1 to n:
    // int a = 1;
    int n;
    cout << "ENter n :" <<endl;
    cin >> n;
    // int oddSum = 0;
    // int evenSum = 0;
    // for (a ; a <= n ; a+=1){
    //     sum = sum + a;
    // }
    // cout << sum;
    // return 0;
    // while (a <= n){
    //     sum += a;
    //     a += 1;
    // }
    // cout<< "Sum of " << n <<" is :"<< sum;
    // for (a ; (a<=n); a++) {
    //     if (a%2 !=0) {
    //         oddSum += a;
    //     }
    // }
    // cout << "Sum of odd no. :" << oddSum <<endl;

    // for (a=1 ; (a<=n) ; a++){
    //     if (a % 2 == 0) {
    //         evenSum += a;
    //     }
    // }
    // cout << "Sum of even no. :" << evenSum;

    // while (a <= n) {
    //     if (a%2 ==0){
    //         oddSum +=a;
    //         a++;
    //     }else {
    //         evenSum +=a;
    //         a++;
    //     }
    // }
    // cout << "Sum of even no. is :" << evenSum << endl <<"Sum of odd no. is :" << oddSum;


    // NO. IS PRIME OR NOT:::

    // 1- Normal Approach---
    //  bool isPrime = true;
    // for( int i = 2 ; i < n; i++ ){
    //     if (n%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true){
    //     cout << "NO. Is Prime...";
    // }else{
    //     cout << "NO. Is Not Prime";
    // }


    // BEST APPROCH FOR PRIME AND NOT_PRIME:::
    // bool isPrime = true;
    // for (int i = 2; i*i <= n; i++){
    //     if ( n % i == 0 ){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true){
    //     cout << "NO. is prime... ";
    // }else{
    //      cout <<"NO. is not prime...";
    // }

    // SUM OF ALL NUMBERS FROM 1 to N WHICH ARE DIVISIBLE BY 3 ::
    // int sum = 0;
    // for(int i = 1; i <= n ; i++){
    //     if ( i%3 == 0 ){
    //         sum += i;
    //     }
        
    // }
    // cout << "Sum of "<< n << " no. is: " << sum ;


    // Print Factorial of a number N ::
    // bool fact = 1;
    // for (bool i = 1; i <= n; i++){
    //      fact *= i;
    // }
    // cout << "Factorial of "<< n << " is :" << fact ;

    // for(int i = 1; i <= n; i ++){
    //     for (int j = 1; j <= n; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
}