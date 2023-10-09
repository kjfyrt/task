#include <iostream>
using namespace std;
int main(){
    int a, b = 0, c = 1;
    cin >> a;
    while (a > 0){
        b = b + (a%10)*c;
        c *= 5;
        a /= 10;
    }
    cout << b << endl;


}
