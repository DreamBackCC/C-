
//
// Created by dreamback on 2023/4/12.
//

#include <stdio.h>

// 宏的参数和返回值没有类型的概念
// 宏函数
#define Max(a, b) (a) > (b) ? (a) : (b)

// 宏函数多行定义, 需要使用'\'来隔开, 写的时候换行, 但是替换之后就不换行了
#define IS_CHAR(c) \
((c) >= '0' && (c) <= '9') || \
((c) >= 'a' && (c) <= 'f') || \
((c) >= 'A' && (c) <= 'F')
int main() {

    // 宏函数就是只是做一个单纯的替换操作, 在嵌套使用的时候, 不会先进行计算, 除非加上()
    int max = Max(1, Max(2,3));

    printf("%d\n", max);

    // 而且宏函数在使用自增操作时, max++ > 3 ? max++ : 3, 只要前面判断为true, 那么max++就会多执行一次, 数据就会出错
    Max(max++, 3);

    printf("is char : %d", IS_CHAR('!'));

    return 0;
}
