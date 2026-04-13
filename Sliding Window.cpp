#include<iostream>
using namespace std;

int main (){

    int arr [] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int w = 3;

    int sum = 0;

    for(int i = 0; i < w; i++){
        sum += arr[i];
    }

    int maxSum = sum;

    for(int i = w; i < n; i++){
        sum = sum + arr[i] - arr[i - w];

        if(sum > maxSum){
            maxSum = sum;
        }
    }

    cout << "Maximum Sum = " << maxSum;

}