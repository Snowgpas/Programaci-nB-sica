#include <stdio.h>
#include <stdlib.h>
	
	int entervalue() {
		 int value;
		 printf("Enter first value\n");
		 scanf("%d", &value);
		 return value;
		 }
		 
	int add(int a, int b){
		int r = a + b;
		return r;
		}
			void showResult(int r){
			
			printf("result = %d", r);
		}
		void main() {
			int operand1;
			int operand2;
			int result;
			
			operand1 = entervalue();
			operand2 = entervalue();
			result = add(operand1, operand2);
			
			showResult(result);
		
	
	return 0;

	}

