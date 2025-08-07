#include<stdio.h>

int main(){
	int n=121;
	int p=0;
	int orignal=n;
	while(n>0){
		int digit=n%10;
		p=p*10+digit;
		n=n/10;
	}
	if(p==orignal){
		printf("Yes, it is a palidrome");
	}
	else{
		printf("No, it is not a palidrome");
	}
	
	return 0;
}
	
		