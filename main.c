#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define lines 2
#define colums 5
#define tables 3
void sortArray (int a[][lines][colums]);
void printArray(int array[][lines][colums]);
void randArray (int array[][lines][colums]);
void inputData();
int main()
{
    inputData();
    return 0;
}

void sortArray (int a[][lines][colums]){
    int i, j,k;
    int tmp;
    for (i = 0; i < tables; i++) {
        for (j = 0; j < lines; j++){
            for (k = 1; k < colums; k++){
                if (a[i][j][k] < a[i][j][k-1]) {
                    tmp = a[i][j][k];
                    a[i][j][k]=a[i][j][k-1];
                    a[i][j][k-1]=tmp;
                }
            }
        }
    }
}

void printArray(int array[][lines][colums]){
    int i,j,k;
    for(i=0;i<colums-1;i++){
        sortArray(array);
    }
    for(i=0;i<tables;i++){
        for(j=0;j<lines;j++){
            for(k=0;k<colums;k++){
                printf("%3d",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void inputData(){
    int i=0,j,k;
    int array [tables][lines][colums];
    randArray(array);
    printf("Araray befor:\n");
    for(i=0;i<tables;i++){
        for(j=0;j<lines;j++){
            for(k=0;k<colums;k++){
                printf("%3d",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Araray after:\n");
    printArray(array);
}

void randArray (int array[][lines][colums]){
    srand((unsigned int) time (NULL));
    int i=0,j,k;
    for (i = 0; i < tables; i++) {
        for (j = 0; j < lines; j++){
            for (k = 0; k < colums; k++){
                array[i][j][k] = rand()% 10;
            }
        }
    }

}
