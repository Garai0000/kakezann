#include<stdio.h>

int main(void)
{
    int a;
    int b;
    int d[10][10];

    for (a = 0; a <= 9; a++) {
        for (b = 0; b <= 9; b++) {
            d[a][b] = a * b;
        }
    }
    printf("  ");
    for (a = 1; a <= 9; a++) {
        printf("%3d", a);
    }
    printf("\n");
    for (b = 1; b <= 9; b++) {
        printf("\n");
        printf("%d", b);

        for (a = 1; a <= 9; a++) {

            printf("%3d", d[a][b]);
        }
    }
    return 0;
    // exe単体起動した時のポーズ処理
#ifdef NDEBUG
    system("pause");
#endif
}