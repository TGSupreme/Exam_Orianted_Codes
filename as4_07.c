#include <stdio.h>
#include <string.h>
 
void main(){
	char ch;
	int upper_vowel,lower_vowel;
	
	printf("ENter The Character : ");
	scanf(" %c",&ch);
	
	upper_vowel = (ch == 'A'||ch=='I'||ch=='O'||ch=='U'||ch=='E');
	lower_vowel = (ch == 'a'||ch=='i'||ch=='o'||ch=='u'||ch=='e');
	
	if (upper_vowel||lower_vowel){
		printf("Given character Is Vowel");
	}
	else{
		printf("Given Character Isn't Vowel");
	}
}
