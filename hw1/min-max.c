#include<stdio.h>
#include<stdlib.h>

int main(){   

	int curnum;
	int highnum;
	int lownum;

	printf("enter a number (-1 to end):");
	scanf("%d", &curnum);
	
	if(curnum == -1){
		printf("nothing??");
		return 0;
	};
	
	highnum = curnum;
	lownum = curnum;


	while(curnum != -1){
		printf("enter a number:");
		scanf("%d", &curnum);
		if(curnum != -1){
			if(curnum > 0){
				if(curnum > highnum){
					highnum = curnum;
				};
				if(curnum < lownum){
					lownum = curnum;
				};
			}
			else{
				printf("value must be a positive integer \n");
			};
			
		};
	};

	printf("high num is: %d \n", highnum);
	printf("low num is: %d", lownum);
	return 0;

};