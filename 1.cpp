#include <iostream>
using namespace std;
int main(){
    int a, b = 0;
    cin >> a;
    if (a<0){
        a = -a;
    }
    if (a > 0){
        while (a != 0){
            if ((a%2) == 1){
                b = b + (a%10);
            }
            a = a / 10;
        }
    }
    cout << b;
}
