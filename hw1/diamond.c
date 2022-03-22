#include<stdio.h>

int main(){

	int sizer;
	char letter;
	int spacescount;
	int lesserhalf;
	int layer = 0;
	int secondindex;
	

	printf("specify size: ");
	scanf("%d", &sizer);
	lesserhalf = (sizer/2)-(1/2);
	
	if(sizer<0){
		printf("number must be greater than 0");
	}
	else if(sizer%2 != 1){
		printf("the number must be odd");
	}
	else {
		printf("specify character: ");
		scanf(" %c", &letter);		
		
		while(lesserhalf>=layer){
			secondindex = layer;
			spacescount = lesserhalf - layer;
			
			for(int i=0; i<spacescount; i++){
				printf(" ");
			}
			
			printf("%c",letter);
			
			while(secondindex > 0){
				printf(" ");
				printf("%c",letter);
				secondindex = secondindex - 1;
			}			

			for(int j=0; j<spacescount; j++){
					printf(" ");
				}
			printf("\n");
			layer++;
		}
		
		layer = layer - 2;
		
		while(layer>=0){
			secondindex = layer;
			spacescount = lesserhalf - layer;
			
			for(int i=0; i<spacescount; i++){
				printf(" ");
			}
			
			printf("%c",letter);
			
			while(secondindex > 0){
				printf(" ");
				printf("%c",letter);
				secondindex = secondindex - 1;
			}			

			for(int j=0; j<spacescount; j++){
				printf(" ");
			}
			printf("\n");
			layer = layer - 1;
		}
	}
return 0;
}

