#include <iostream>
using namespace std;
int main(){
    int a, max = 0, b = 0, c;
    cin >> a;
    c = a;
    if (a<0){
        a = -a;
    }
    while(a != 0){
        if ((a%10) > max){
            max = (a%10);
        }
        a /= 10;
    }
    while (c){
        if ((c%2 == 0) and (c%10 != 0)){
            b++;
        }
        c /= 10;
    }
    cout << max + b << endl;
    cout << max*b << endl;
}
