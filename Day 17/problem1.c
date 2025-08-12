/*Q1. Automorphic Number Checker
Ek number automorphic hota hai agar uska square usi number ke last digits me khatam ho.
Example: 25 → 25² = 625 → ends with 25 ✔
Input: 76 → Output: Yes*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=25,p=0;
	int orignal=n;
	int square=n*n;

	while(n>0){
		p++;
		n=n/10;
	}
	n=orignal;
	int mod= round(pow(10,p));

	if(square%mod==n){
		printf("Yes, it is a Automorphic numeber");
	}
	else{
		printf("No, it is not  a Automorphic number");
	}

	return 0;

}