#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subt (int a, int b);
int multi (int a, int b);
int divi (int a, int b);
int theExit (int a, int b);
typedef int (*Operation) (int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  Operation operations[] = { &add, &subt,&multi, &divi, &theExit };
  int a = 6;
  int b = 3;
  int res;
	int op;

  while (1){
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit)\n");
    scanf("%d",&op); 
    res = (*operations[op])(a, b);
		printf("x = %d\n", res);

  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b;
}
int subt (int a, int b) {
  printf ("Substracting 'a' and 'b'\n"); 
  return a - b;
}
int multi (int a, int b){
  printf ("Substracting 'a' and 'b'\n"); 
  return a * b;
}
int divi (int a, int b){
  printf ("Substracting 'a' and 'b'\n"); 
  return a / b;
}
int theExit (int a, int b){
  exit(0);

}