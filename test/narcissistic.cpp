#include <iostream>
using namespace std;

int main() {
    for (int num = 100; num < 1000; ++num) {
        int a = num / 100;       // 百位
        int b = num / 10 % 10;   // 十位
        int c = num % 10;        // 个位
        
        if (a*a*a + b*b*b + c*c*c == num) {
            cout << "水仙花数: " << num << endl;
        }
    }
    return 0;
}
