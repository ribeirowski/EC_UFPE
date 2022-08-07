#include <iostream>

using namespace std;

int positivo(int x, int y){
    int z = 0;
    for(int i = 0; i<x; i++){
        z += y; 
    }
    return z;
}

int negativo(int x, int y){
    int z = 0;
    for(int i = 0; i>x; i--){
        z -= y; 
    }
    return z;
}

int main() {
    int num1, num2, res;
    cin >> num1;
    cin >> num2;
    if((num1 > 0 && num2 > 0) || (num1 > 0 && num2 < 0)){
        res = positivo(num1, num2);
    }
    if((num1 < 0 && num2 < 0) || (num1 < 0 && num2 > 0)){
        res = negativo(num1, num2);
    }
    cout << res;
    return 0;
}