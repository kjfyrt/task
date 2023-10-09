#include <iostream>
using namespace std;
int main(){
    int a, b = 0, c = 1;
    cin >> a;
    while (a > 0){
        b = b + (a%9)*c;
        c *= 10;
        a /= 9;
    }
    cout << b << endl;


}
