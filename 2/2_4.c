#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(){
	char s1[100], s2[100];
	
	printf("Please enter two string\n");
	scanf("%s\n", s1);
	scanf("%s", s2); 	
	squeeze(s1, s2);
	
	return 0;
}

void squeeze(char s1[],char s2[]){
	int i, j, k, result=0;
	for(i=j=0; s1[i] != '\0'; i++ ){
		for(k=0; s2[k] != '\0'; k++){		
			if(s1[i] == s2[k])
				result += 1;
		}
		if(result == 0)
			s1[j++] = s1[i];
		result = 0;
	}
	s1[j] = '\0';

	if(s1[0]=='\0')
		s1 = "There is no different number";

	printf("%s\n", s1);
}
