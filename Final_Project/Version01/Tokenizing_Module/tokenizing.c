// TOKENIZING V1
#include "tokenizing.h" //this is to include tokenizing header file 

void tokenizing() { //this is where the function defintion begins
	printf("*** Start of Tokenizing Words Demo ***\n"); //this prints the message which is in the double quotes
	char words[200]; // an array of type character 'words' has been declared of size 200
	char* word; // a pointer of type char 'word' has been declared 
	int w_counter; // an variable of type integer 'w_counter' has been declared 
	printf("Type a few words seperated by space(q - to quit):\n"); // this prints the message to prompt the user to enter words seperated by spaces or q to quit
	gets(words); //this is used to take a string from the user as an user input and store it in the character array words
	while (strcmp(words, "q") != 0) { //this checks whether or not the difference between input entered or q is zero and the loop keeps on running until q is entered
		word = strtok(words, " "); //this tokenizies the string whenever the delimiter "space" occurs in the string  
		w_counter = 1;//w_counter is set to 1
		while (word) { //it loops until there is something in word
			printf("Word is #%d is \'%s\'\n", w_counter++, word);//it prints the message giving the word number and also showing the tokenized words of the strings
			word = strtok(NULL, " "); //this returns the null when there are no more tokens
		}
		printf("Type a few words seperated by space(q - to quit):\n"); // this prints the message to prompt the user to enter words seperated by spaces or q to quit
		gets(words); //this is used to take a string from the user as an user input and store it in the character array words
	}
	printf("*** End of the Tokenizing Words Demo ***\n\n");//this prints the message that tokenizing words demo ends here
}