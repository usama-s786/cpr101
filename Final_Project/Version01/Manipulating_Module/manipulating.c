
//To overcome the strcat warnings in the code
#define _CRT_SECURE_NO_WARNINGS
//Including the Header file
#include "manipulating.h"

//Defining the function "manipulating", which concatenats two strings
void manipulating() {
/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");

	//declaring a varaiable 'string1' of type char which can store 79 characters.
	char string1[80];

	//declaring a varaiable 'string2' of type char which can store 79 characters.
	char string2[80];

	printf("Type the 1st string (q - to quit):\n");

	//Gets the input from the user and store it into "string1".
	gets(string1);

	// prompt user until string1 is other than q
	while (strcmp(string1, "q") != 0) {

		printf("Type the 2st string:\n");

		//Gets the input from the user and store it into "string2".
		gets(string2);

		//this will concatenates string1 and string2
		strcat(string1, string2);

		//it will prompt out resulted string1 
		printf("Concatenated string is \'%s\'\n", string1);
		printf("Type the 1st string (q - to quit):\n");

		//Gets the input from the user and store it into "string1".
		gets(string1);
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");

}