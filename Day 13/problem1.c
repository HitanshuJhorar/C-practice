#include<stdio.h>

int main(){
	int n=12345;
	int p=0;
	int ori = n;
	while(n>0){
		int digit=n%10;
		p=p*10+digit;
		n=n/10;
	    }
	printf("The Reverse of %d is %d",ori,p);
	return 0;
}
	