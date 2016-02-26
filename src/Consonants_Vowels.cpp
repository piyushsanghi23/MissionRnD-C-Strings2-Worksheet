/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	//initialise to zero
	*vowels = 0;
	*consonants = 0;
	for (int iter = 0; str != NULL&&str[iter] != NULL; iter++)
		//iterateing string
		if ((str[iter] >= 'a' && str[iter] <= 'z') || (str[iter] >= 'A' && str[iter] <= 'Z'))
			//if it's a valid char
			if (str[iter] == 'a' || str[iter] == 'A' || str[iter] == 'e' || str[iter] == 'E' || str[iter] == 'i' || str[iter] == 'I' || str[iter] == 'o' || str[iter] == 'O' || str[iter] == 'u' || str[iter] == 'U')
				//if it's vowel
				(*vowels)++;
			else
				//if it's consonant
				(*consonants)++;
}