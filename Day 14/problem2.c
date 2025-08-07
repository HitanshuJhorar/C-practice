#include<stdio.h>
#include<math.h>


int main(){
	int n=17;
	int found=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			found =0;
			break;
		}
	}
	if(found){
		printf("Yes, It is a prime number");
	}
	else{
		printf("No, It is not a prime number");
	}
	
	return 0;
}