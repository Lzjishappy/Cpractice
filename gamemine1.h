#define ROW 3
#define COL 3
#define ROWS ROW+2
#define COLS COL+2
#define NUM 3
void menu();
void exit1();
void test();
void game();
void InitArr(char arr[ROWS][COLS],int rows, int cols,char set);
void board(char arr[ROWS][COLS], int rows, int cols);
void SetMine(char arr[ROWS][COLS], int row, int col,int number);
void play(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);