#include <stdio.h>

void main(){
//Write a program to find a character from the string, string and character to be searched
//both will be given by user.	
	
	char str[100],ch,i,signal=0;
	
	printf("ENter The String : ");
	gets(str);
	
	printf("ENter The Character to Find : ");
	ch=getchar();

	for(i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			printf("Index Of %c is [%d]",ch,i);
			signal = 1;
		}
	}	
	if(signal == 0){
		printf("%c Is Not Found In Given String",ch);
	}
}
