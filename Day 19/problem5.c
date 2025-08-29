/*
Q5. Special Number Checker
Number Special hota hai agar uske digits ke factorial ka sum digit sum × digit product ke barabar ho.
👉 Example: 145 → 1!+4!+5! = (1+4+5) × (1×4×5) = 10 × 20 = 200 (Not Special)
👉 Example: 59 → 5!+9! = (5+9)×(5×9) ✔
*/

#include<stdio.h>

int main(){
	int n=59,p=0,orignal=n,q=0,y=1;
	//factorial
	while(n>0){
		int digit=n%10;
		int z=1;
		for(int i=1;i<=digit;i++){
			z*=i;
		}
		p+=z;
		n=n/10;
	}
	//here 'p' conatins factorial of 'n'
	n=orignal;

	//for next operation (1+4+5) × (1×4×5)

	while(n>0){
		int digit=n%10;
		q+=digit;
		y*=digit;
		n=n/10;
	}

	n=orignal;

	if(p==(q)*(y)){
		printf("yes");
	}
	else{
		printf("No");
	}
	return 0;
}