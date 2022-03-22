#include <stdio.h>
#include <math.h>

int main(){
    int deci;
    int checker;
    int position;
    int binaryarray[8] = {0,0,0,0,0,0,0,0};

    printf("gimme the num (0-255):");
    scanf("%d", &deci);

    while(deci>0){
        checker = 1;
        position = 0;
            while(deci>=checker*2){
                checker = checker*2;
                position++;
            };
        binaryarray[position] = 1;
        deci = deci-checker;
    };
    
    for(int j=0; j<8; j++){
        printf("%d",binaryarray[7-j]);
    };
}