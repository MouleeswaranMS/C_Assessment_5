#include <stdio.h>

int main(){
	int count=0;
	for(int i=1; i<100000; i++)
	{
		int sum = 0;
		for(int j=i; j!=0; j/=10)
		{
			sum = sum + j%10;
		}
		if (sum==14)
		{
			count++;
		}
	}
	printf("%d", count);
}

