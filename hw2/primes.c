#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int primechecker(int num){
    // primeflag = 1 means num is prime
    int maxcheck;
    int primeflag;
    double i;
    double numcheck;
    double numcheck2;
    double nummer = num;
     
    if(nummer >= 3 && num%2 == 1){
        maxcheck = floor(sqrt(nummer));
        primeflag = 1;
        for(i=3; i<=maxcheck; i = i + 2){
            numcheck = nummer/i;
            numcheck2 = round(numcheck);
            if(numcheck == numcheck2){
               primeflag = 0;
               i = maxcheck;
            }
            else{
                primeflag = 1;
            };
        }
    }
    else{
        primeflag = 0;
    };

    return primeflag;
}

int main(){   
    int numm;
    int flag;
    int hits = 0;
    int maxhits;

    printf("enter a num:");
    scanf("%d", &maxhits);
    
    for (numm = 1; hits < maxhits; numm++)
    {
        flag = primechecker(numm);

        if (flag == 1 || numm <= 2)
        {
            hits++;
            printf("%d \n",numm);
        };
    };
    return 0;
};

