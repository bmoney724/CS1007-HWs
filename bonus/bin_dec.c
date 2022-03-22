#include <stdio.h>
#include <math.h>

int twoexponent(int exp){
    int num;

    if(exp == 0){
        num = 1;
    }
    else{
        num = 2;
        for(int i=1; i<exp; i++){
            num = num*2;
        }
    }
    return num;
}

int main(){
    int binaryarray[8];
    int total;
    printf("gimme the bin(with spaces between each digit): ");
        
    scanf("%d %d %d %d %d %d %d %d", &binaryarray[7], &binaryarray[6], &binaryarray[5], &binaryarray[4], &binaryarray[3], &binaryarray[2], &binaryarray[1], &binaryarray[0]);
    
    total = 0;
    for(int j=0; j<8; j++){
        total = total + binaryarray[j]*(twoexponent(j));
    };

    printf("%d", total);
}