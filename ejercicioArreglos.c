#include <stdio.h>

int arreglosIguales(int a[5], int b[5]);

int main()
{
    int a[5], b[5], c[10];
    scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    scanf("%d,%d,%d,%d,%d", &b[0], &b[1], &b[2], &b[3], &b[4]);
    if (arreglosIguales(a, b) == 1)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d,", a[j]);
            c[j] = a[j];
        }
        for (int k = 0; k < 4; k++)
        {
            printf("%d,", b[k]);
            c[k + 5] = b[k];
        }
        c[9] = b[4];
        printf("%d\n", c[9]);
    }
    else
        printf("Son iguales\n");
    return 0;
}

int arreglosIguales(int a[5], int b[5])
{
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
        {
            n = 1;
            break;
        }
    }
    return n;
}