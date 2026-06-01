#include <stdio.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int sum = 0;
	for (int i = x; i!=0; )
	{
		sum = sum + i%10;
		i= i/10;
	}
	printf("Sum = %d", sum);
}

