#include <unistd.h>
#include <stdio.h>

static int solution_count = 0; // 解のカウント用の静的変数

void print_grid(int grid[4][4]) {
    char buffer[50]; // 数値とテキストを一時的に格納するバッファ
    int length; // snprintfから返される文字列の長さ

    // 解の番号をインクリメントし、表示
    solution_count++;
    length = snprintf(buffer, sizeof(buffer), "<%d個目>\n", solution_count);
    write(1, buffer, length);

    char t; // 数値を格納するための一時的な変数
    char space = ' '; // 数値の後のスペース
    char newline = '\n'; // 改行

    int i = 0;
    while (i < 4) {
        int j = 0;
        while (j < 4) {
            t = grid[i][j] + '0'; // 数値を文字に変換
            write(1, &t, 1); // 変換された文字を出力
            write(1, &space, 1); // 数値の後にスペースを挿入
            j++;
        }
        write(1, &newline, 1); // 各行の最後に改行を挿入
        i++;
    }
    write(1, &newline, 1); // グリッドの後に余分な改行を挿入
}

// 数字がその位置に配置可能かどうかをチェックする関数
int is_safe(int grid[4][4], int row, int col, int num) {
    int x = 0;
    while (x < 4) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return 0; // falseを表す
        }
        x++;
    }
    return 1; // trueを表す
}

int solve_sudoku(int grid[4][4], int row, int col) {
    if (row == 4) {
        print_grid(grid);
        return 0;
    }

    int nextRow = col == 3 ? row + 1 : row;
    int nextCol = col == 3 ? 0 : col + 1;

    if (grid[row][col] != 0) {
        return solve_sudoku(grid, nextRow, nextCol);
    }

    int num = 1;
    while (num <= 4) {
        if (is_safe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solve_sudoku(grid, nextRow, nextCol)) {
                return 1;
            }
            grid[row][col] = 0;
        }
        num++;
    }
    return 0;
}

int main() {
    int grid[4][4] = {{0}};
    solve_sudoku(grid, 0, 0);
    return 0;
}


// int ft_saiki(int *argv[])
// {
//     int i;
//     int j;
//     i = 0;
//     j = 0;
//     int array[4][4] = {{0,1,2,3},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
//     char t;



//     while(i < 4)
//     {
//         while (j < 4)
//         {
//             t = array[i][j]+'0';
//             write(1,&t,1);
//             j++;
//         }
//         write(1,"\n",1);
//         j = 0;
//         i++;
//     }

//     return (0);
// }

// int main(int argc, char *argv[])
// {
//     ft_saiki(argv);
// }