// 2) Write afunctionthat calculates the sum of the following series where x and n is provided as user input:
// 1 - x/1! + (x^2)/2! - .....(x^n)/n!

// let's generalize the question into a formula
// ((-1)^n) * (x^n)/n!

# include <stdio.h>

// a^x function
float xpower(int a, int x){
    int i;
    float result=1;

    for(i=1; i<=x; i++){
        result = result * a;
    }

    return result;
}

// n! function
float factorial(int n){
    int i;
    float result=1;

    if(n==0){
        return result;
    }

    for(i=1; i<=n; i++){
        result = result * i;
    }

    return result;
}

// func for the series
float func(int x, int n){
    int i;
    float result=0;
    float sign, xp, fact, temp, temp2;

    for(i=0; i<=n; i++){
        sign = xpower(-1,i);
        xp = xpower(x,i);
        fact = factorial(i);
        temp = sign * xp;
        temp2 = temp/fact;

        result = result + temp2;

        // printf("%d: sign: %f\n xp: %f\n fact: %f\n sign*xp: %f\n sign*xp/fact: %f\n", i, sign, xp, fact, temp, temp2);
        printf("+ ((-1)^%d * %d^%d)/%d! ", i, x, i, i);
    }

    return result;
}

int main()
{
    // two integer variable x, n
    int x, n;

    // read x and n
    scanf("%d %d", &x, &n);

    // call func with two arguments as x, n and print the result
    printf("= %f", func(x,n));

    return 0;
}