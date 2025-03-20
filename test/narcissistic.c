#include <stdio.h>

int main() {
    int start = 100;
    int end = 999;
    int num;
    
    printf("水仙花数（三位数）：\n");
    
    for(num = start; num <= end; num++) {
        int original = num;
        int sum = 0;
        int temp = num;
        
        // 直接计算各位立方和
        while(temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;  // 直接计算立方避免浮点精度问题
            temp /= 10;
        }
        
        // 判断是否为水仙花数
        if(sum == original) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}
