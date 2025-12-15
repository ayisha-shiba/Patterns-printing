// //     *
// //    * *
// //   * * *
// //  * * * *
// // * * * * *
// // #include <stdio.h>
// // int main(){
// //     int i,j;
// //     int n=6;
// //     for(i=1;i<=5;i++){
// //         for(j=1;j<=n;j++){
// //             if(((i+j)-1)>=n){
// //                 printf(" *");
// //             }else{
// //                 printf(" ");
// //             }
        
// //     }
    
// //     printf("\n");
// //     }
// //     return(0);
// // }
// // *                 * 
// // * *             * * 
// // * * *         * * * 
// // * * * *     * * * * 
// // * * * * * * * * * * 
// #include <stdio.h>

// int main() {
//     int n = 5;

//     for(int i = 1; i <= n; i++) {


//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }


//         for(int s = 1; s <= (n - i) * 4; s++) {
//             printf(" ");
//         }

    
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }

// //         printf("\n");
// //     }

// //     return 0;
// // }
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

// #include <stdio.h>

// int main()
// {   int i,j; 
//     int col = 12;
//     for(i=1; i<=4 ; i++){
//         for(j = 1 ; j<=i*3 ; j++){
//             printf(" *");
//         }
//     printf("\n");
// }
//     return 0;
// }





// * * *
// * * * * * *
// * * * * * * * * *
// * * * * * * * * * * * *

#include <stdio.h>

int main()
{   int i,j;
    for(i = 1; i<= 4; i++){
        for(j=1 ; j<=15 -(i*3); j++ ){
                printf("*");
        }
        printf("\n");
        
    }


    return 0;
}
// * * * * * * * * * * * *
// * * * * * * * * *
// * * * * * *
// * * *

 

#include <stdio.h>

int main()
{   int i,j;
    for(i = 1; i<= 5; i++){
        for(j=1 ; j<=i; j++ ){
                printf(" *");
        }
        printf("\n");
        
    }
    for(i = 2; i<= 5; i++){
        for(j=5 ; j>=i; j-- ){
                printf(" *");
        }
        printf("\n");
        
    }


    return 0;
}

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
// 5 5 
// 6 4 
