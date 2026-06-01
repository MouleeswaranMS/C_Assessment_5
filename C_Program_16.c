#include <stdio.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	unsigned int count = 0;
	for(int i=1; i<=x; i++)
	{
		if (x%i == 0){
			count++;
		}
	}
	if (count > 2){
		printf("\nNot Prime");
	}else {
		printf("\nPrime");
	}
}

