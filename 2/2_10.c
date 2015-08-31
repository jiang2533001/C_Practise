#include <stdio.h>

void lower(char s[]);

int main(){
	char s[100];
	
	printf("Please enter a string: ");
	scanf("%s", s);
	lower(s);
	printf("\n");

	return 0;
}

void lower(char s[]){
	printf("The new string is ");
	for(int i=0; s[i]!='\0'; i++)
		printf("%c", (s[i]>='A' && s[i]<='Z') ? (s[i]+'a'-'A') : s[i]);
}
