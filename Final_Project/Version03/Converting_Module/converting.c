#define _CRT_SECURE_N0_WARNINGS                // To overcome the scanf warnings
#include "converting.h"                        //including the header file

/* Version 1 */
// CONVERTING V1

void converting() {                                  //defining the function for converting
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80];                            // declaring a character array to store 79 characters and a null operator
	int int_number;                                 // declaring an integer type element                         
	printf("Type the int numeric string (q - to quit): \n");
	gets(int_string);                             //gets input from user and store ir in 'int_string'
	while (strcmp(int_string, "q") != 0) {       //A while loop which repeates execution until string 'q' is entered to quit
		int_number = atoi(int_string);           // calling a function to convert string to integer
		printf("Converted number is %d\n", int_number);    // printing the converted numbers
		printf("Type the int numeric string (q - to quit): \n");  //prompts the user to enter string again
		gets(int_string);                     // gets next string from user and store it in 'int_string'
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");          //declares the closing of int conversion module


   /*VERSION 2*/

  printf("*** Start of Converting Strings to double Demo ***\n");   // declares the start of converting to double module
  char double_string[80];                          // declaring a character array to store 79 characters and a null operator
  double double_number;                           // declaring a double type element                         
  printf("Type the double numeric string (q - to quit): \n");
  gets(double_string);                        //gets input from user and store ir in 'double_string'
     while (strcmp(double_string, "q") != 0) {   //A while loop which repeates execution until string 'q' is entered to quit
	   double_number = atof(double_string);    // calling a function to convert string to double
	   printf("Converted number is %f\n", double_number);   // printing the converted numbers
	   printf("Type the double numeric string (q to quit) : \n");    //prompts the user to enter string again
	   gets(double_string);                         // gets next string from user and store it in 'double_string'
     }

   printf("*** End of Converting Strings to double Demo *** \n\n");

/*VERSION 3*/

   printf("*** Start of Converting Strings to long Demo ***\n"); // declares the start of converting to long module
   char long_string[80];                       // declaring a character array to store 79 characters and a null operator
   long long_number;                              // declaring a long type element
   printf("Type the long numeric string (q - to quit) :\n");
	   gets(long_string);                           //gets input from user and store ir in 'long_string'
	   while (strcmp(long_string, "q") != 0) {     //A while loop which repeates execution until string 'q' is entered to quit
		   long_number = atol(long_string);        // calling a function to convert string to long
		   printf("Converted number is %ld\n", long_number);      // printing the converted numbers
		   printf("Type the long numeric string (q - to quit) : \n");   //prompts the user to enter string again
		   gets(long_string);     // gets next string from user and store it in 'long_string'
	   }

   printf("*** End of Converting Strings to long Demo ***\n\n");

}
