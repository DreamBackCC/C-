
//
// Created by dreamback on 2023/4/12.
//

#include <stdio.h>
#include <stdarg.h>

// 函数的变长参数和java的不定参数类似
// 第一个参数表示后面有个参数arg_count
void HandleVarargs(int arg_count, ...) {
    va_list args; // 声明一个变量, 用于获取参数

    // 开始遍历
    va_start(args, arg_count); // 引入<stdarg.h>
    // 取出对应的参数
    for (int j = 0; j < arg_count; ++j) {
        // va_arg(va_list, type)
        int arg = va_arg(args, int);
        printf("%d:%d\n", j, arg);
    }

    // 结束遍历
    va_end(args);

}

int main() {
    HandleVarargs(5,2,3,4,5,6);

    return 0;
}
