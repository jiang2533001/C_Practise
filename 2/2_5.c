#include <stdio.h>

void any(char s1[], char s2[]);

int main(){
	char s1[100], s2[100];
	
	printf("Please enter two string\n");
	scanf("%s\n", s1);
    scanf("%s", s2);

	any(s1, s2);
	
	return 0;
}

void any(char s1[], char s2[]){
	int i, j, k=0;
	for(i=0; s2[i]!='\0'; i++){
		printf("%c postion in string 1 is ", s2[i]);
		for(j=0; k==0 && s1[j]!='\0'; j++){
			if(s2[i]==s1[j]){
				printf("%d\n", j+1);
				k += 1; 	
			}
		}
		if(k==0)
			printf("-1\n");
		k = 0;
	}
}
