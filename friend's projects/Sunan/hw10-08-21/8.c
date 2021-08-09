// 8) Do the problems in lecture 7 slide 22. Note: the number of lines is odd

# include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    printf("# Case 1\n");
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("# Case 2\n");
    for(i=1; i<=n; i++){
        for(j=n-i; j>0; j--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        for(j=n-i; j>1; j--){
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    printf("# Case 3\n");
    for(i=n; i>0; i--){
        for(j=n-i; j>0; j--){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        for(j=n-i; j>1; j--){
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    printf("# Case 4\n");
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        for(j=2*(n-i); j>0; j--){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<n; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        for(j=2*(n-i); j>2; j--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("# Case 5\n");
    for(i=n; i>0; i--){
        for(j=1; j<=i; j++){
            if(j==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        for(j=2*(n-i); j>1; j--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            if(j==1 && i!=n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1; i<n; i++){
        for(j=i; j>0; j--){
            printf(" ");
        }
        for(j=i; j<=i; j++){
            if(j==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        for(j=2*(n-i-1); j>1; j--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            if(j==1 && i!=n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    printf("# Case 6\n");
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1; i>0; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
