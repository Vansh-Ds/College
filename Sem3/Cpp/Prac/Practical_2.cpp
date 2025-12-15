#include <iostream>
using namespace std;

int Sum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

double Average(int *arr,int n){
    int sum = Sum(arr,n);
    double avg = sum/n;
    return avg;
}

double long main(){
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << Sum(arr,n) << endl;
    cout << "Average is : " << Average(arr,n);
    return 0;
}