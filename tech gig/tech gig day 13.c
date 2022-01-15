/* Read input from STDIN. Print your output to STDOUT*/
#include <stdio.h>
int main(){
   int m, n, i, j, matrix[100][100], transpose[100][100];
   scanf("%d %d", &m, &n);
    for (i= 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0;i < m;i++){
        for (j = 0; j < n; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    for (i = 0; i< n; i++) {
        for (j = 0; j < m; j++){
            if(j == m - 1)
				printf("%d",transpose[i][j]);
			else
				printf("%d ",transpose[i][j]);
        }
		printf("\n");
   }
	return 0;
}