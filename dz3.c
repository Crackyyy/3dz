#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Russian");

    int a,N,n;

    printf("������� ����� ������ �����: ");
    scanf("%d",&n);
    printf("������� ����� ���� �����: ");
    scanf("%d",&N);
    a = 0.5*(n-1)*(n-2);
    if (N>a) {
        printf ("���� ����� ���������");
    }
    if (N<=a) {
        printf ("���� ������ ���������");
    }
    return 0;
}