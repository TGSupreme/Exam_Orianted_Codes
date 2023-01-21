#include <Stdio.h>
#include <string.h>

void main(){
	
	char str[100];
	
	printf("Enter The String : ");
	gets(str);
	
	strupr(str);
	
	printf("Capitalized String Is : ");
	puts(str);
}
