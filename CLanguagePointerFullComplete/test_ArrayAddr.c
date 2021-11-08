#include <stdio.h>

void main(void)
{
    int data[5];
    /* dataと&dataのアドレスは同じだが、&dataでは配列全体へのポインタを指す */
    printf("data %d\n", data);
    printf("&data %d\n", &data);
    printf("data+1 %d\n", data + 1);
    printf("&data+1 %d\n", &data + 1);

    /* 配列の途中に要素では純粋にその要素のサイズを指す */
    /* data[2] -> *(data +2) であるので↑のdata+1と同じ計算となる*/
    printf("&data[2] %d\n", &data[2]);
    printf("&data[2]+1 %d\n", &data[2] + 1);
}
