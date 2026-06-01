#include <stdio.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int count = 0;
	for(int i=x; i!=0; i/=10)
	{
		if((i%10)%2 != 0)
		{
			count++;
		}
	}
	printf("%d", count);
}

