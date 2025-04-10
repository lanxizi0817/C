#define _CRT_SECURE_NO_WARNINGS 1
//输出有多少个单词
// 输入英文文章，不超过50行，一行不超过80个字符
#include <stdio.h>
#include <ctype.h>

int main() {
    int c;              // 用来读取每个字符
    int in_word = 0;    // 标志：当前是否在单词内
    int count = 0;      // 单词计数

    printf("请输入英文文章（Ctrl+Z 然后回车结束输入）：\n");

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            // 遇到字母，说明在单词中
            if (!in_word) {
                in_word = 1;
                count++;
            }
        }
        else {
            // 遇到非字母，视为单词分隔
            in_word = 0;
        }
    }

    printf("有 %d 个单词\n", count);
    return 0;
}