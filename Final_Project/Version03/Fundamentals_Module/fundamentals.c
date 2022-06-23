#define _CRT_SECURE_NO_WARNINGS												//Included to overcome the scanf warnings in the code
#include "fundamentals.h"													//Including the Header file

/* Version 1 */

void fundamentals() {														//Defining the function "fundamentals", which deals with the indexing part of the project.
	printf("*** Start of Indexing Strings Demo ***\n");						//Statement showing the start of indexing the strings.
	char buffer1[80];														//Creating a character type array "buffer1" which can store upto 79 characters, and 1 extra space for the null character at the end.
	char num_input[10];														//Crating another character type array "num_input" which can hold upto 9 characters, and 1 more extra space to hold the null character at the end of the string.
	unsigned int position;													//Creating an int unsigned type of variable "position", unsigned refers to an integer which can never be a negative value.
	printf("Type not empty string (q - to quit):\n");
	printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
	gets(buffer1);															//Gets the input from the user and store it into the array "buffer1".
	while (strcmp(buffer1, "q") != 0) {										//A while loop which will be executed unless and until "bufferl" value is equal to "q", and if q is entered the program will end.
		printf("Type the characer position within the string:\n");
		gets(num_input);													//Gets the input from the user and stores it in the array "num_input".
		position = atoi(num_input);											//Position is assigned to the integer value of num_input using atoi function, the atoi function here converts the character type into the integer type.
		if (position >= strlen(buffer1)) {									//An if condition is defined, where it enters the condition if position's value is greater than or equal to the length of buffer1 string.
			position = strlen(buffer1) - 1;									//Position is assigned as length of buffer1 string subtracted by 1.
			printf("Too big... Position reduced to max. available\n");
		}
		printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);		//Printing the position and value of buffer1 at the defined position.
		printf("Type not empty string (q - to quit):\n");
		printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
		gets(buffer1);														//Gets the input from the user again and store it into the array "buffer1", as if the condition is true, it will prompt for the input again.
	}
	printf("*** End of Indexing Strings Demo ***\n\n");						//Statement will be printed if q is entered.


/* Version 2 */

	printf("*** Start of Measuring Strings Demo ***\n");					//Statement showing the start of measuring strings
	char buffer2[80];														//Creating a character type array "buffer2" which can hold upto 79 characters, and 1 extra space for the null character
	printf("Type a string (q - to quit):\n");
	gets(buffer2);															//Gets the input from the user and store it in array "buffer2"
	while (strcmp(buffer2, "q") != 0) {										//A while loop which will be executed unless and until buffer2's value is equal to "q"; if q is entered, the program will end.
		printf("The length is %lu\n", strlen(buffer2));						//The length of input is printed on the screen using the function "strlen".
		printf("Type a string (q - to quit):\n");
		gets(buffer2);														//Gets the input from the user again and store it into the array "buffer1", because if the condition is true, it will prompt for the input again.
	}
	printf("*** End of Measuring Strings Demo ***\n\n");					//Statement printed if q is entered.

/* Version 3 */

	printf("*** Start of Copying Strings Demo ***\n");						//Introductory statement for copying strings
	char destination[80];													//Creating a character type array "destination" which can hold upto 79 characters, and 1 extra space for the null character, also the size of destination is equal to that os source.
	char source[80];														//Creating a character type array "source" which can hold upto 79 characters, and 1 extra space for the null character
	destination[0] = '\0';													//Initiating the destination array's zeroth index to a null terminator
	printf("Destination string is reset to empty\n");
	printf("Type a source string (q - to quit):\n");
	gets(source);															//Gets the input from the user and store it into the arrray "source"
	while (strcmp(source, "q") != 0) {										//A while loop has been declared, which will be executed until the source array's value is equal to "q", and if q is entered, the program will be terminated.
		strcpy(destination, source);										//A function strcpy is used to copy the content od source array into the destination array.
		printf("New destination string is \'%s\':\n", destination);			//Displaying the destination string's content.
		destination[0] = '\0';												//Initiating the destination array's zeroth index to a null terminator
		printf("Destination string is reset to empty\n");
		printf("Type a source string (q - to quit):\n");
		gets(source);														//Gets the input from the user again and store it into the array "source", because if the condition is true, it will prompt for the input again after completing the above processes.
	}
	printf("*** End of Copying Strings Demo ***\n\n");						//Statement printed if q is entered, the program ends here.
}

