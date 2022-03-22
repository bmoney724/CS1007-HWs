#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int power(int x, int n){
    int ix = x;
    while(n!=0){
        ix *= x;
        --n;
    };
    return ix;
};

int powerx(int x, int n){
    int result;

    if(n%2 == 1){
        result = (power(x,n-1));
    }
    else{
        n = (double) n/2;
        result = power(x,n)*x;
    }

    return result;
};

int main(){
    int num;
    int number;
    int answer;

    printf("gimme the number:");
    scanf("%d", &number);
    printf("gimme the power:");
    scanf("%d", &num);
    
    answer = powerx(number, num);

    printf("%d", answer);

    return 0;
};