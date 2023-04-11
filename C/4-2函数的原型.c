//
// Created by dreamback on 2023/4/11.
//

#include <stdio.h>

// c语言和c++/java不同的是, 参数如果不写的话, c++/java表示这个函数没有参数, 而c则表示不确定有多少个参数, c当中表示没有参数需要写void, 函数名(void)

// 函数的原型, 写返回值 函数名(参数)
// 函数声明的时候, 参数的名字可以不写
void IsEmpty(void);

int Sum(int, int);

// 总结
// (1)函数名
// (2)函数的返回值类型, 如果没写, 默认为int
// (3)函数参数列表, 参数类型, 和参数的顺序, 参数形参名不重要

int main(void) {
    IsEmpty();

    return 0;
}

void IsEmpty(void) {
    puts("hello");

}
