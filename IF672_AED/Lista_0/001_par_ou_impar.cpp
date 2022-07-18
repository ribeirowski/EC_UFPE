#include <iostream>

using namespace std;

int par_ou_impar(int x){
    if(x % 2 == 0){
        cout << "Par";
    } else cout << "Impar";
}

int main() {
    int num;
    cin >> num;
    par_ou_impar(num);
    return 0;
}