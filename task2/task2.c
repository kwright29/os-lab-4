#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int sub (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program(int a, int b);

int input1;
int input2;
int operation;
int result;


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int (*operations[5]) (int a, int b);
	operations[0] = add;
	operations[1] = sub;
	operations[2] = multiply;
	operations[3] = divide;
	operations[4] = exit_program;

	while (1) {
 		printf("Enter a number: ");
   	scanf("%d", &input1);
	 	printf("Enter another number: ");
		scanf("%d", &input2);
	 	printf("Specify the operation to perform:\n0: add\n1: subtract\n2: multiply\n3: divide\n4: exit\n");
	 	scanf("%d", &operation);
	 	result = (*operations[operation]) (input1, input2);
	 	printf("x = %d\n", result);
	}
	 return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int sub (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b;}
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b;}
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b;}
int exit_program (int a, int b) { exit(0); }