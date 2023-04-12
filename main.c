//
// Created by dreamback on 2023/4/11.
//

#include <stdio.h>

// 条件编译
void PrintfMessage(char *message){
#ifdef DEBUG
    puts(message);
#endif

}

//
int main() {

    PrintfMessage("main start");
    printf("hello\n");
    PrintfMessage("main end");


    return 0;
}