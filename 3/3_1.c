#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(){
	int v[25];
	int number = 0;		

	for(int i=0; i<25; i++)
		v[i] = i + 1;

	printf("Please enter a number you want to find in this array: ");
	scanf("%d", &number); 
	printf("%s\n", (binsearch(number, v, 25) != -1) ? "Yes, we find number you are looking for" : "Sorry, there is no number you are looking for");
	
	return 0;
}

int binsearch(int x, int v[], int n){
	int low, high, mid;
	
	low = 0;
	high = n -1;
	/*while(low <= high){
		mid = (low + high) / 2;
		if(x < v[mid])
			high = mid - 1;
		else if(x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;*/  


	while(low < high){
		mid = (low + (low + high)) / 2;
		if(x > v[mid])
			low = mid + 1;
		else
			high = mid; 
	}
	printf ("%d\n", low);
	return low;
}
