#include <stdio.h>
#include <stdbool.h>
int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int count = 0;
	bool is_prime = false;
	bool is_14 = false;
	int sum = 0;
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if (count<=2){
		is_prime = true;
	}
	for (int j = x; j!=0; j = j/10){ 
		sum = sum + j%10;
	}
	if(sum==14){
		is_14=true;
	}
	if(is_prime && is_14){
		printf("\nPrime & sum of digits is 14");
	}else if(!is_prime && is_14){
		printf("\nNot Prime but sum of digits is 14");
	}else if(is_prime && !is_14){
		printf("\nPrime & sum of digits is not 14");
	}else{
		printf("\nNot Prime & Sum of digits is not 14");
	}
}

