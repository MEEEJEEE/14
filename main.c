#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//실습2 

struct Book {
	int number; 
	char title[10]; 
}; 

int main(void) {
	struct Book *p; 
	
	p = (struct Book*)malloc(2 * sizeof (struct Book)); 

	if (p == NULL) {
		printf("메모리 할당 오류\n"); 
	return 1; 
} 

	p->number = 1; 
	strcpy(p->title, "C Programming"); 

	(p + 1)->number = 2; 
	strcpy((p + 1)->title, "Electronics"); 
	
	printf("Book 1: %d %s\n", p->number, p->title);
    printf("Book 2: %d %s\n", (p + 1)->number, (p + 1)->title);

	free(p); 
	
	return 0; 
}