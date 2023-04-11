
//
// Created by dreamback on 2023/4/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x = 1;
    printf("%d\n", sizeof(x));
    printf("hello\n");
    srand(time(NULL));
    int num = rand();
    printf("%d\n", num);



    return 0;
}
