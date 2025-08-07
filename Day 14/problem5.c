#include<stdio.h>
#include<string.h>

int main(){
	char str[]="madam";
	int n = strlen(str);
	int found=1;
	char str2[100];
	for(int i=0;i<n;i++){
		str2[n-i-1]=str[i];
	}
	str[n]='\0';
	for(int i=0;i<n;i++){
		if(str[i]!=str2[i]){
			found =0;
			break;
		}
	}
	if(found){
		printf("Yes, palidrone");
	}
	else{
		printf("No, not a palidrone");
	}
return 0;
}