#include <stdio.h>

void myCallback(void)
{
   printf("Calling to the myCallback...\n");
}

int main()
{
   printf("This is C language!\n");
   void (*fun_ptr)(void) = myCallback;   // Assining the address of the Callback function to the pointer
   
   (*fun_ptr)(); // Calling the function using function pointer
   return 0;
}