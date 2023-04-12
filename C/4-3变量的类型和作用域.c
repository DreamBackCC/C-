//
// Created by dreamback on 2023/4/11.
//

#include <stdio.h>

// 文件作用域, 全局变量
int global_var = 1;

void LocalStaticVar(void) {
    // 静态变量
    // (1)作用域全局, 内存不会因为函数和块的退出而销毁
    // (2)有默认初始值
    // 这个也是文件作用域, 因为用static修饰, 不会随着函数执行完成而消失
    static int static_var; // 有初始值,
    // 自动变量
    // (1)函数, 块作用域, 会随着函数和块的退出而销毁
    // (2)没有默认初始值
    int non_static_var; // 没有初始值, gcc编译器会给个初始值, 使用自动变量一定要进行初始化

}
void PassByMemory(int parameter) {
    printf("%d\n", parameter);
}
// 通过寄存器去传递参数的话不需要通过内存, 也就是不需要在内存当中开辟内存空间, 所以寄存器要比内存要快
// 一般情况下不需要自己去声明, 编译器会根据实际情况来进行最优选择
void PassByRegister(register int parameter) {
    printf("%d\n", parameter);
}

// 函数原型作用域
// 除了这一行可以访问size, 其他地方不行
// double Sort(int size, int array[size]);

int main() {

    // 自动变量
    // auto是变量的类型
    // int是变量的数据类型
    // 尽量不要写auto因为在c++11当中auto变成了关键字
    auto int value = 0;
    { // 这个就是块作用域, 变量出了这个范围就不能使用了

    }



    return 0;
}
