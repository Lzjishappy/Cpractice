#define ROW 3//扫雷
#define COL 3
void menu();
void exit1();
void test();
void game();
int InitArr(char arr[ROW + 2][COL + 2], char arr2[ROW][COL], int row, int col,int cout);
void board(char arr[ROW+2][COL+2], char arr2[ROW][COL], int row, int col);
int play(char arr[ROW+2][COL+2], char arr2[ROW][COL], int row, int col,int num1);