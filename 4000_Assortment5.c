#include<stdio.h>

main() 
{
   int a[100][100];
   int transpose[100][100];
   int r, c,i,j;
   
   printf("Enter rows: ");
   scanf("%d", &r);
   printf("Enter columns: ");
   scanf("%d", &c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           printf("a[%d][%d] = ",i,j);
           scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i] = a[i][j];
        }
	}  

    printf("\nTranspose of the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

