/*
Q2. Check if a Number is Palindromic Prime
A number is palindromic prime if it’s both a palindrome and prime.
Example: 131 → palindrome ✔ and prime ✔

Input: n = 131 → Output: Yes
Input: n = 121 → Output: No
*/

#include<stdio.h>
#include<math.h>


int main(){
	int n = 131;
	int p=0;
	int orignal=n;
	int found =1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			found=0;
			break;
		}
	}
	while(n>0){
		p=(p*10)+(n%10);
		n=n/10;
	}
	n=orignal;
	if(p!=orignal){
		found=0;
	}
	if(found){
		printf("yes, the number %d is Palindromic Prime",orignal);
	}
	else{
		printf("No, the number %d is not Palindromic Prime",orignal);
	}
	return 0;
}


