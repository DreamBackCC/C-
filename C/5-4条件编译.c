
//
// Created by dreamback on 2023/4/12.
//

/**
 * 1.#ifdef : 如果定义了
 * 2.#ifndef : 如果没定义
 * 3.#if : 如果
 *
 *
 * #endif // 以上三个都需要和#endif配对
 *
 * #if define(MAX) = #ifdef MAX
 *
 */

#include <stdio.h>



void PrintfMessage(char *message){
#ifdef DEBUG
    puts(message);
#endif

}

int main() {

    PrintfMessage("main start");
    printf("hello\n");
    PrintfMessage("main end");


    return 0;
}
