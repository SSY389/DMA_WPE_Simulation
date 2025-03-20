#include <stdio.h>
#include <math.h>

int main() {
    // 精确适配80列终端的参数
    double x, y;
    double a = 1.0;
    
    // 精确计算80列参数（79个字符+换行符）
    const double x_start = -1.425;
    const double x_end = 1.425;
    const double x_step = (x_end - x_start) / 79;  // 精确计算步长
    
    for (y = 1.3; y >= -1.1; y -= 0.06) {
        for (x = x_start; x <= x_end + x_step*0.5; x += x_step) {  // 确保覆盖右边界
            // 爱心方程：(x² + y² - a)³ - x²*y³ < 0
            double equation = pow(x*x + y*y - a, 3) - x*x*pow(y, 3);
            putchar(equation <= 0 ? '*' : ' ');
        }
        putchar('\n');
    }

    // 添加文字装饰
    printf("\n   Love from C!\n");
    return 0;
}
