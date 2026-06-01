#include <stdio.h>
#include <stdbool.h>
int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	int mid = (x%1000)/10;
	bool is_prime = true;
	for(int i = 2; i<mid; i++)
	{
		if(mid%i == 0){
			is_prime = false;
		}
	}
	is_prime ? printf("\nPrime") : printf("\nNot Prime");
}

