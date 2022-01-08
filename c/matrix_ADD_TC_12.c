#include<stdio.h>
int main(){
	int a[100][100], b[100][100], c[100][100];
	int row1, row2, col1, col2, i, j;
	printf("Enter the mat1 row element of matrix");
	scanf("%d", &row1);
	scanf("%d",&col2);
	for(i=0; i < row1; i++){
		for(j=0; j < col1; j++){
		    printf("Enter the mat 1 a[%d][%d] element of matrix", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &row2, &col2);
	for(i=0; i < row2; i++){
		for(j=0;j < col2; j++){
		printf("Enter the mat2 b[%d][%d] element of matrix", i, j);

			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i < row1; i++){
		for(j=0;j < col1; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0; i < row1; i++){
		for(j=0;j < col1; j++){
			printf("%d", c[i][j]);
		}
		printf("\n");
	}	
}
