#include <stdio.h>
#include <stdbool.h>

int main(){
	int x;
	printf("Enter: ");
	scanf("%d", &x);
	x = x%100;
	bool is_prime = true;
	for(int i=2; i<x; i++){
		if(x%i==0){
			is_prime = false;
		}
	}
	if(is_prime){
		printf("Prime");
	}else{
		printf("Not Prime");
	}
}

