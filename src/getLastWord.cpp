/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *LastWord = (char*)malloc(100);
	int iterW = 0;
	for (int iter = 0; str[iter] != '\0'; iter++){
		if (str[iter] != ' '){
			//forms the last word
			LastWord[iterW++] = str[iter];
		}
		else if (iterW != 0){
			//forms the new word
			iterW = 0;
		}
	}
	LastWord[iterW] = '\0';
	return LastWord;
}