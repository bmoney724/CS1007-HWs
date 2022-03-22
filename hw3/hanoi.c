#include <stdio.h>
#include <math.h>

void hanoi4(int rings, int starter, int ender, int helpa, int helpb){
    
    if (rings == 0){
    return;    
    }
    
    if (rings == 1) {
    printf("\n Move disk %d from rod %d to rod %d", rings, starter, ender);
    return;
    }

    hanoi4(rings-2, starter, helpa, helpb, ender);
    printf("\n Move disk %d from rod %d to rod %d ", rings-1, starter, helpb);
    printf("\n Move disk %d from rod %d to rod %d ", rings, starter, ender);
    printf("\n Move disk %d from rod %d to rod %d ", rings-1, helpb, ender);
    hanoi4(rings-2, helpa, ender, starter, helpb);
}

void hanoi5(int r, int starter, int ender, int helpa, int helpb, int helpc){
    {
    if(r == 0)
        return;
    if(r == 1) {
        printf("\n Move top disk from rod %d to rod %d ",starter,ender);
        return;
    }
    if(r == 2) {
        printf("\n Move top disk from rod %d to rod %d ",starter,helpa);
        printf("\n Move top disk from rod %d to rod %d ",starter,ender);
        printf("\n Move top disk from rod %d to rod %d ",helpa,ender);
        return;
    }

    hanoi5(r - 3, starter, helpa, helpb, helpc, ender);
    printf("\n Move top disk from rod %d to rod %d ",starter, helpc);
    printf("\n Move top disk from rod %d to rod %d ",starter, helpb);
    printf("\n Move top disk from rod %d to rod %d ",starter, ender);
    printf("\n Move top disk from rod %d to rod %d ",helpb, ender);
    printf("\n Move top disk from rod %d to rod %d ",helpc, ender);
    hanoi5(r - 3, helpa, ender, starter, helpb, helpc);
}
}


int main(){
    
    int rings;
    int pegs;
    int starter = 1;
    int ender = 2;
    int helpa = 3;
    int helpb = 4;
    int helpc = 5;

    printf("how many pegs: ");
    scanf("%d", &pegs);

    printf("how many rings: ");
    scanf("%d", &rings);

    if(pegs == 4){
        hanoi4(rings, starter, ender, helpa, helpb);
    };
    if(pegs == 5){
        hanoi5(rings, starter, ender, helpa, helpb, helpc);
    };

    return 0;


}
