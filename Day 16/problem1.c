/*Q1. Count Frequency of Each Digit in a Number
Input: n = 1123581321
output:
Digit 1 → 3 times  
Digit 2 → 2 times  
Digit 3 → 2 times  
Digit 5 → 1 time  
Digit 8 → 1 time  

*/
#include<stdio.h>

int main(){
	long long n=1123581321;
	int freq[10]={0};

	while(n>0){
		int digit=n%10;
		freq[digit]++;
		n=n/10;
	}

	for(int i=1;i<10;i++){
		if(freq[i]!=0){
			printf("The Frequency of %d is %d time%s\n",i,freq[i],freq[i]>1?"s":"");
		}
	}
	return 0;
}