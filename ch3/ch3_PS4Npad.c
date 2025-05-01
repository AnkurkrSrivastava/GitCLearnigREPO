#include <stdio.h>

int main(){
	
	printf("Write any Character lowercase or uppercase:");
	char K;
	scanf("%c", &K);
	if(K >= 'a' && K <= 'z'){
		printf("The character is lowercase\n");
	}
	else if (K >= 'A' && K <= 'Z'){
		printf("The character is uppercase\n");
	}
	else{
		printf("The character is not an alphabet\n");
	}

	return 0;
}

