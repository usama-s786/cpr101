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
	printf("*** End of Converting Strings to int Demo ***\n\n");
}