#include <iostream>
using namespace std;

int Sum(int num){
    int sum = 0;
    while(num>0){
        sum += num % 10;
        num = num/10;
    }
    return sum;
}


int Reverse(int num){
    int rev = 0;
    while(num>0){
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    return rev;
}


long Factorial(int num){
    long fact = 1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}


void Fibonacci(int num){
    long a=0,b=1;
    for(int i = 1;i<=num;i++){
        cout << a << " ";
        long c = a+b;
        a = b;
        b = c;
        if(a>=num)
            break;
    }
    cout << endl;
}


void Prime(int num){
    for(int i = 2;i<=num;i++){
        bool isPrime = true;
        for(int j = 2; j*j=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout << i << " ";
    }
    cout << endl;
}


int main(){
    cout << Sum(55) << endl;
    cout << Reverse(123) << endl;
    cout << Factorial(5) << endl;
    Fibonacci(10);
    // cout << endl;
    Prime(15);
    return 0;
}