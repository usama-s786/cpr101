
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


	/* Version 2 */
	printf("*** Start of Comparing Strings Demo ***\n");

	//declaring a varaiable 'compare1' of type char which can store 79 characters.
	char compare1[80];

	//declaring a varaiable 'compare2' of type char which can store 79 characters.
	char compare2[80];

	//declaring a varaiable 'result' of type int
	int result;
	printf("Type the 1st string to compare (q - to quit):\n");

	//Gets the input from the user and store it into "compare1".
	gets(compare1);


	// prompt user until compare1 is other than q
	while (strcmp(compare1, "q") != 0) {
		printf("Type the 2nd string to compare:\n");

		//Gets the input from the user and store it into "compare2".
		gets(compare2);

		//this will compare strings "compare1" and "compare2" and give value to the result
		result = strcmp(compare1, compare2);

		//conditions to check if result is less than 0, equal to 0 or greater than 0.
		if (result < 0)
			printf("1st string is less than 2nd\n");
		else if (result == 0)
			printf("1st string is equal than 2nd\n");
		else
			printf("1st string is greater than 2nd\n");

		printf("Type the 1st string to compare (q - to quit):\n");

		//Gets the input from the user and store it into "compare1".
		gets(compare1);
	}

	printf("*** End of Comparing Strings Demo ***\n\n");

	/*VERSION 3*/
	printf("*** Start of Searching Strings Demo ***\n");

	//declaring a varaiable 'big_string' of type char which can store 79 characters.
	char big_string[80];

	//declaring a varaiable 'sub_string' of type char which can store 79 characters.
	char sub_string[80];

	//declaring a pointer 'address' of type char
	char* address;
	printf("Type the big string (q - to quit):\n");

	//Gets the input from the user and store it into "big_string".
	gets(big_string);

	// prompt user until 'big_string' is other than q
	while (strcmp(big_string, "q") != 0) {
		printf("Type the substring:\n");

		//Gets the input from the user and store it into "sub_string".
		gets(sub_string);

		//this will search strings "big_string" and "sub_string" and give value to the result
		address = strstr(big_string, sub_string);

		//condition to check if address is not equal to NULL
		if (address != NULL)
			printf("Found at %ld position\n", (long)address - (long)big_string);
		else
				printf("Not found\n");

		printf("Type the big string (q - to quit):\n");

		//Gets the input from the user and store it into "big_string".
		gets(big_string);
	}

	printf("*** End of Searching Strings Demo ***\n\n");

}