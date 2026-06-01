#include <stdio.h>

int main(){
	int x;
	int sum;
	printf("Enter: ");
	scanf("%d", &x);
	sum = 0;
	for(int i=x;i!=0;)
	{
		i = i/10;
		sum++;
	}
	printf("Sum = %d", sum);
}

