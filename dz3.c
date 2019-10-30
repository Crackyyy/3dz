#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Russian");

    int a,N,n;

    printf("¬ведите число вершин графа: ");
    scanf("%d",&n);
    printf("¬ведите число рЄбер графа: ");
    scanf("%d",&N);
    a = 0.5*(n-1)*(n-2);
    if (N>a) {
        printf ("√раф можно построить");
    }
    if (N<=a) {
        printf ("√раф нельз€ построить");
    }
    return 0;
}