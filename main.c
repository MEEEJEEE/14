#include <stdio.h>
#include <stdlib.h>

//실습1

void main(void) { 
char *pc = NULL; 
int i = 0; 

pc = (char*)malloc(100*sizeof(char));
 
if (pc == NULL) { 
printf("메모리 할당 오류\n"); 
exit(1); 
}

for (i=0;i<26;i++) { 
pc[i] = 'a'+i; 
} 
pc[i] = 0; 
printf("%s\n", pc); //동적메모리 할당

free(pc); 
}