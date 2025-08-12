/*
Q3. Armstrong Number in Any Number of Digits
Check karo ki given number Armstrong hai ya nahi (n-digit Armstrong).
Example: 9474 → 9³+4³+7³+4³ = 9474 ✔
Input: 407 → Output: Yes
*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=9474;
	int p=0;
	int orignal=n;
	int m=0;
	int temp=n;
	while(temp>0){
		m++;
		temp=temp/10;
	}
	
	while(n>0){
		int digit=n%10;
		p+=round(pow(digit,m));
		n=n/10;
	}
	if(orignal==p){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}