#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int d[100][100];

    for (a = 0; a <= 99; a++) {
        for (b = 0; b <= 99; b++) {
            d[a][b] = a * b;
        }
    }
    //printf("  ");
    for (a = 1; a <= 99; a++) {
        printf("%6d", a);
    }
    printf("\n");
    for (b = 1; b <= 99; b++) {
        printf("\n");
        printf("%d", b);

        for (a = 1; a <= 99; a++) {

            printf("%6d", d[a][b]);
        }
    }
    return 0;
    // exe単体起動した時のポーズ処理
#ifdef NDEBUG
    system("pause");
#endif
}