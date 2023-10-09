#include <iostream>
using namespace std;
int main(){
    int a, max = 0, max2 = 0;
    cin >> a;
    if (a < 0){
        a = -a;
    }
    if (a < 10){
        cout << 0;
    }
    while(a){
        if (a%10 >= max){
            max2 = max;
            max = a%10;
        }
        if ((a%10 >= max2) and (max > a%10)){
            max2 = a%10;
        }
        a /= 10;
    }
    cout << max*max2 << endl;
}
