#include <iostream>
using namespace std;

int Sum(int num){
    int sum;
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

long Fact(int num){
    long fact = 1;
    for(int i = 1;i<=num;i++){
        fact *= i;
    }
    return fact;
}

void Fibonacci(int num){
    long a = 0,b=1;
    for(int i = 1;i<=num;i++){
        cout << a << " ";
        long c = a+b;
        a = b;
        b = c;
    }
    cout << endl;
}

void Prime(int num){
    for (int i = 2; i <= num; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
}


int main(){
    int n,num;
    cout << "##########" << endl << "#  MENU  #" << endl << "##########" << endl;
    cout << "Choose the operation to perform : " << endl << " 1 for Sum of digits" << endl << " 2 for Reversing the integer" << endl << " 3 for Factorial" << endl << " 4 for Fibonacci Series" << endl << " 5 for Prime numbers upto n" << endl << " 6 for exit" << endl;
    cout << "Enter your Choice : ";
    cin >> n;

    if (n==6){
        cout << "Exiting Program ...." << endl;
    }

    cout << "Enter your interger : ";
    cin >> num; 

    if(n==1){
        cout << "Sum of all digits" << endl;
        cout << Sum(num) << endl;
    }
    else if (n==2){
        cout << "Reversing Integer" << endl;
        cout << Reverse(num) << endl;
    }
    else if (n==3){
        cout << "Finding Factorial" << endl;
        cout << Fact(num) << endl;
    }
    else if (n==4){
        cout << "Fibonacci Series" << endl;
        Fibonacci(num);
    }
    else if (n==5){
        cout << "Prime numbers up to " << n << ": ";
        Prime(num);
    }
    else{
        cout << "Invalid Input";
    }
    return 0;
}