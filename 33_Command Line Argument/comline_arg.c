//A command line argument is information you give to a program when you start it, instead of typing it inside the program.
//You pass the input from the command line.

#include<stdio.h>

int main(int argc, char *argv[]){

    printf("Program name %s\n", argv[0]);

   if(argc == 2) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if(argc > 2) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
   return 0;
}