#include <stdio.h>

// 定义学生结构体
struct Student {
    char name[20];
    int id;
    float score;
};

int main() {
    // 结构体变量赋值
    struct Student s1 = {"ZhangSan", 2026001, 92.5f};

    printf("姓名：%s\n", s1.name);
    printf("学号：%d\n", s1.id);
    printf("分数：%.1f\n", s1.score);
    return 0;
}
