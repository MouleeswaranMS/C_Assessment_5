#include <stdio.h>
#include <stdbool.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int count=0;
	bool is_prime=false;
	for(int i=x; i!=0; i/=10)
	{
		is_prime=true;
		int k = i%10;
		for(int j=2; j<k; j++)
		{
			if(k%j == 0)
			{
				is_prime=false;
			}
		}
		is_prime && k!=1 ? count++ : 0;
	}
	printf("%d",count);
}

