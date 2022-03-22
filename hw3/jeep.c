#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
ok so for this one I dont know if this is the most optimal solution but this is what I came up with:
to simplify things I assume 1 tank can get you 3 miles (I know this doesnt make real sense but it works for the math)
so I go 1 mile and drop off tank (then drive an extra 1/2 mile into dessert before turning around makes no sense but 
seems like cant fill up until you are empty so I have to). then I go 2 miles - drop off tank - then get home 
by picking up tank left at 1 mile.  then I make another trip to put back the tank at 1 mile. Then I go 2 miles, refill, go one more,
drop off tank at 3 miles and use the rest of the tank to go back to the tank at 1 mile to refill.  This continues in an iterative 
process where for each extra mile I move I have to redo all of the work that was previously done dropping off cans. 
So all of this is assuming 3 miles per tank/can.

now that I think about it you wouldnt have to pick up every can on the way back - just half of them.  I gotta think about this but
this could dramatically improve distance/can

*/

int jeep(int trips, int level, int miles, int checker){
    miles++;
    if(checker+level+1 > trips){ 
        return miles*3;
    }
    else{
        checker = checker + level+1;
        jeep(trips, level+1, miles, checker);
    }
   
}

int main(){
    int cans;
    int miles = 0;
    printf("number of cans: ");
    scanf("%d", &cans);
    
    if(cans<=2){
        miles = 6;
    }
    miles  = jeep(cans/2, 0, miles, 0) - 1;

    printf("%d miles into the desert (assuming 3 miles per tank/can)", miles);
}