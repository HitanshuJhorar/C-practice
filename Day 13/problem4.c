#include<stdio.h>

int main(){
	int n=345;
	int sum=0;
	int orignal=n;
	while(n>0){
		sum+=n%10;
		n=n/10;
	}
	printf("the sum of digits of %d is %d",orignal,sum);
	return 0;
}
	