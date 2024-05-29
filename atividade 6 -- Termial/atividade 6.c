#include <stdio.h>
#include <stdio.h>

int main(void){
	int i, s;
	printf("numero? ");
	scanf("%d", &i);
	for(int c=i; c>=0;c--)
		s = c+s;
	printf("%d\n", s);
	return 0;
	}
