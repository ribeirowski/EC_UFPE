#include <iostream>

using namespace std;

int fibonacci(int x){
    int sum, sec = 1, trd = 1;
    for(int i = 3; i<x; i++){
        sum = sec + trd;
        sec = trd;
        trd = sum;
    }
    return trd;
}

int main() {
    int n;
    cin >> n;
    if(n == 1){
        cout << "0";
    } else cout << fibonacci(n);
    return 0;
}