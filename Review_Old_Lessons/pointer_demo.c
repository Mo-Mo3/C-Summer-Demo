#include <stdio.h>

int main() {
    int num = 100;
    int *p = &num;   // 定义指针，存放变量地址

    printf("变量原值：%d\n", num);
    printf("指针指向的值：%d\n", *p);
    printf("变量的内存地址：%p\n", &num);
    printf("指针存储的地址：%p\n", p);

    *p = 200;  // 通过指针修改原变量值
    printf("修改后变量值：%d\n", num);
    return 0;
}
