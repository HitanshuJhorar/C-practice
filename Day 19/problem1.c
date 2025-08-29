/*
Q1. Automorphic Number Checker
Number automorphic hota hai agar uska square khud number ke last digits me aata hai.
👉 Example: 25 → 25² = 625 → last me 25 ✔
👉 Input: 76 → Output: Yes
*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=25,sq=n*n,orignal=n,p=0,num=0;
	while(n>0){
		num++;
		n=n/10;
	}
	n=orignal;
	int y=round(pow(10,num));

	if(sq%y==orignal){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}