#include <stdio.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int count = 0;
	for(int i=x; i!=0; i/=10)
	{
		for(int j=1; j<10; j++)
		{
			if((i%10)==j*j)
			{
				count++;
			}
		}
	}
	printf("%d", count);
}

