/* Q1. Automorphic Number Checker
Number automorphic hota hai agar uske square ka last digit(s) us number ke equal ho.
Example: 25 → 25² = 625 → ends with 25 ✔
👉 Input: 76 → Output: No */

#include<stdio.h>
#include<math.h>

int main(){
	int n =25,p=n*n,m=0,ori=n,digit=0,power=1;
	while(n>0){
		m++;
		power*=10;
		n=n/10;
	}
	n=ori;
	digit= p%power;
	if(digit==n){
		printf("yes it is a automorphic number");
	}
	else{
		printf("No");
	}
	return 0;
}


