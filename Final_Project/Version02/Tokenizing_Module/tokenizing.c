// TOKENIZING V2
#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h" //this is to include tokenizing header file 

// VERSION 1--------------------------------------------
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

	
	//VERSION 2---------------------
	printf("*** Start of Tokenizing Phrases Demo ***\n"); //this prints the message which is in the double quotes
	char phrases[200]; // an array of type character 'phrases' has been declared of size 200
	char* phrase; // a pointer of type char 'phrase' has been declared 
	int p_counter; // an variable of type integer 'p_counter' has been declared 
	printf("Type a few phrases seperated by comma(q - to quit):\n"); // this prints the message to prompt the user to enter phrases seperated by comma or q to quit
	gets(phrases); //this is used to take a string from the user as an user input and store it in the character array phrases
	while (strcmp(phrases, "q") != 0) { //this checks whether or not the difference between input entered or q is zero and the loop keeps on running until q is entered
		phrase = strtok(phrases, ","); //this tokenizies the string whenever the delimiter "comma" occurs in the string  
		p_counter = 1;//p_counter is set to 1
		while (phrase) { //it loops until there is something in phrase
			printf("phrase is #%d is \'%s\'\n", p_counter++, phrase);//it prints the message giving the phrase number and also showing the tokenized phrases of the strings
			phrase = strtok(NULL, ","); //this returns the null when there are no more tokens
		}
		printf("Type a few phrases seperated by comma(q - to quit):\n"); // this prints the message to prompt the user to enter phrases seperated by comma or q to quit
		gets(phrases); //this is used to take a string from the user as an user input and store it in the character array phrases
	}
	printf("*** End of the Tokenizing Phrases Demo ***\n\n");//this prints the message that tokenizing phrases demo ends here

}