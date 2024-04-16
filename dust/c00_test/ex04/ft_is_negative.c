#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n){
    if (n < 0){
        write(1, "N", 1);
    }else{
        write(1, "P", 1);
    }
}

int main() {
    int n;

    printf("数値を入力してください: ");
    scanf("%d", &n);
    ft_is_negative(n);

    return 0;
}