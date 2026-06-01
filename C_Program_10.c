#include <stdio.h>

int main(){
	int sum = 0;
	for(int i=70; i<80; i++)
	{
		if (i%2!=0){
			sum = sum + i;
		}
	}
	printf("%d", sum);
}

