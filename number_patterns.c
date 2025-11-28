// #include <stdio.h>

// int main() {
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf(" %d",j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// //  1
// //  1 2
// //  1 2 3
// //  1 2 3 4
// //  1 2 3 4 5

#include <stdio.h>

int main()
{   int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }printf("\n");
    }
   
    return 0;
}

// 1
// 0 0
// 1 1 1 
// 0 0 0 0
// 1 1 1 1 1
































// #include <stdio.h>

// int main()
// {   int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         for(k=i-1;k>=1;k--){
//             printf("%d",k);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// // // 1
// // // 1 2 1
// // // 1 2 3 2 1
// // // 1 2 3 4 3 2 1
// // // 1 2 3 4 5 4 3 2 1
// // #include <stdio.h>

// int main()
// {   int i,j;
//     int num;
//     for(i=1;i<=5;i++){
//         num =1;
//         for(j=5;j>=i;j--){
//             printf(" %d",num);
//             num += 2;
//         }

//      printf("\n");
//     }
//     return 0;
// }
// // 1 3 5 7 9
// // 1 3 5 7
// // 1 3 5
// // 1 3
// // 1

//  50
//  45 40
//  35 30 25
// //  20 15 10 5


// #include <stdio.h>

// int main()
// {   int i,j;
//     int num = 50;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf(" %d",num);
//             num -= 5;
//         }
//             printf("\n");
//     }


//     return 0;
// }