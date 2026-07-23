#include <stdio.h>

// 循环基础练习题：计算1~100累加和
int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
    }
    printf("1到100的总和是：%d\n", sum);
    return 0;
}
