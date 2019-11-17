#include <iostream>
using namespace std;
int main() {
    int money;
    int sum2 = 0;
    cin >> money;
    for (;money % 10 != 0 ; money = money / 10) {
        
        int sum = money % 10;
        sum2 = sum2 + sum;
        
    
    }
    cout << sum2;
}//269 43 姚紹謙
