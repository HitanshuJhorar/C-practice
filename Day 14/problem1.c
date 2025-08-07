#include<stdio.h>

int main(){
	int n=4567;
	int p=0;
	int orignal=n;
	while(n>0){
		p++;
		n=n/10;
	}
	printf("The number of digits in %d is %d",orignal,p);
	return 0;
	
}
