#include "ft_abs.h" // ABSマクロを定義したヘッダーファイルをインクルード
#include <stdio.h>

int main(void)
{
    // int numbers[] = {-5, 10, -15, 20, -25}; // 絶対値を計算する整数のリスト
    // int size = sizeof(numbers) / sizeof(numbers[0]); // 配列の要素数を計算

    // for (int i = 0; i < size; i++) {
    //     printf("The absolute value of %d is %d\n", numbers[i], ABS(numbers[i]));
    // }

    int nbr;
    nbr = -10;

    printf("%d\n",ABS(nbr));
    return 0;
}