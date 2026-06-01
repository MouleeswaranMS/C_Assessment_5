#include <stdio.h>
#include <stdbool.h>
int main(){
	int prime_count=0;
	for(int i = 2; i<10; i++)
	{
		bool is_prime = true;
		for(int j = 2; j<i; j++)
		{
			if(i%j==0){
				is_prime = false;
			}
		}
		if(is_prime){
			prime_count++;
		}
	}
	printf("%d", prime_count);
}

