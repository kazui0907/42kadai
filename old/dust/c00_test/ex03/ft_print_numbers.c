#include <unistd.h>

void ft_print_numbers(void) {
    char letter = '1';
    while (letter <= '9') {
        write(1, &letter, 1);
        letter++;
    }
}

int main(){
    ft_print_numbers();
}