#include <stdio.h>

int main()
{   int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
