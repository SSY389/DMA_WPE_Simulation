#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("将盘子 1 从 %c 移动到 %c\n", from, to);
        return;
    }
    hanoi(n-1, from, aux, to);
    printf("将盘子 %d 从 %c 移动到 %c\n", n, from, to);
    hanoi(n-1, aux, to, from);
}

int main() {
    int n;
    printf("请输入汉诺塔的盘子数量: ");
    while(scanf("%d", &n) != 1 || n < 1) {
        printf("输入错误，请输入正整数: ");
        while(getchar() != '\n'); // 清除输入缓冲区
    }
    
    printf("\n移动步骤:\n");
    hanoi(n, 'A', 'C', 'B');  // A是起始柱，C是目标柱，B是辅助柱
    return 0;
}
