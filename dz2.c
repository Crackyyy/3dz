#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"Russian");
    FILE *file;
    file= fopen("grafic.dot", "w");
    if (file == NULL){
        printf("����� �� ����������!");
        exit(0);
    }
    fprintf (file,"digraph test{\n");
    
    int N,a,i,j,z,k;
    printf("������� ������ �� �������? ");
    scanf ("%d", &z);
    for (k=0;k<z;k++){
        fprintf(file,"NesvVersh%d\n",k);
    }
    printf("������� ���������� ������ �����: ");
    scanf("%d",&N);
    printf("������� ������� ���������:\n");
    int A[N][N];
      for (i=0;i<N;i++){
          for(j=0;j<=i;j++){
              scanf("%d",&A[N][N]);
              getchar();
              if(A[N][N]>0){
                  fprintf(file,"%d -> %d\n",i,j);
              }
          }
      }
    
    fprintf(file,"}");
    fclose(file);
system("PAUSE");
    return 0;
}