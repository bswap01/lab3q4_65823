#include <stdio.h>

int main(){
	int cnt = 0;
	int sum = 0;
	int input = 0;
	printf("=======================\n");
	printf("enter a number : ");
	scanf("%d",&input);
	while(input>0){
		printf("enter a number : ");
		sum+=input;
		scanf("%d",&input);
		cnt++;
	}
	printf("=======================\n");
	printf("sum = %d\n",sum);
	printf("avg = %d\n",sum/cnt);	
	return 0;		
}