
//
// Created by dreamback on 2023/4/12.
//

#include <stdio.h>

// 汉诺塔问题，是心理学实验研究常用的任务之一。
// 该问题的主要材料包括三根高度相同的柱子和一些大小及颜色不同的圆盘，三根柱子分别为起始柱A、辅助柱B及目标柱C
// 需要将A柱上的东西给移到C柱上, 可以借助B柱

void Move(int number, char src, char temp, char desc) {
//    printf("%d->%c->%c->%c\n", number, src, temp, desc);
    if (number == 0) {
        return;
    } else if (number == 1) {
        printf("%c -> %c\n", src, desc);
    } else {
        Move(number - 1, src, desc, temp);
        Move(1, src, temp, desc);
        Move(number - 1, temp, src, desc);
    }


}


int main() {

    Move(3, 'A', 'B', 'C');

    return 0;
}
