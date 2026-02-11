#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int a[10][10], b[10][10], result[10][10], k, i, j, n, c;

    printf("\n Enter the size of the matrix:");
    scanf("%d", &n);

    printf("\n Enter first matrix:");
    for(i = 1; i <= n; i++){
	for(j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter second matrix:");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n matrix 1:");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("\n %d\t", a[i][j]);
        }
    }

    printf("\n matrix 2:");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("\n %d\t", b[i][j]);
        }
    }

    printf("\n 1. Add \n 2. Subtract \n 3. Multiplication \n 4. Division");
    printf("\n Enter your choice:");
    scanf("%d", &c);

    switch(c){
        case 1:
            printf("\n 1.Sum");
            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    printf("\n %d\t", a[i][j] + b[i][j]);
                }
            }
            break;

        case 2:
            printf("\n 2. Substract");
            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    printf("\n %d\t", a[i][j] - b[i][j]);
                }
            }
            break;

        case 3:
            printf("\n 3. Multiplication");
            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    result[i][j] = 0;
                    for(k = 1; k <= n; k++){
			result[i][j] = a[i][k]*b[k][j];
                    }
                }
            }

            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    printf("\n %d", result[i][j]);
                }
            }
            break;

        case 4:
            printf("\n 4. Division");
            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    printf("\n %d\t", a[i][j] / b[i][j]);
                }
            }
            break;
    }

    return 0;
}
