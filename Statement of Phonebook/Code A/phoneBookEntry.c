/*
Student name: Dhruv Patel
(Code A) Statement of phone book
Program: phoneBookEntry.c
*/

/*
 * This file manages the work that is related with Phone Number
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * struct that is named phoneEntry store information of area code, phone Number along with the
 * user first and last name associated with it
 */
struct phoneEntry{
	int areaCode;
	int phoneNumber;
	char *firstName;
	char *lastName;
	struct phoneEntry *nextNode;
};

/*
 * This method displays all the data that is stored inside the linked list
 */
void displayPhoneBook(struct phoneEntry *a, int *code, int *number) {

	while (a != NULL) {
		if(a->areaCode == code && a->phoneNumber == number){
			printf("Phone number: %d-%d belongs to the student %s, %s and his number is from ", a->areaCode, a->phoneNumber, a->lastName, a->firstName);
			areaInformation(code);
			a = a->nextNode;
		} else {
			a = a->nextNode;
		}
	}
}

/*
 * This method displays only the data that is selected by user using specific code using
 * keyboard input
 */
void displayPhoneBookCode(struct phoneEntry *a, int *code)
{
	while (a != NULL) {
		if(a->areaCode == code){
			printf("Phone number: %d-%d belongs to the student %s, %s and his number is from ", a->areaCode, a->phoneNumber, a->lastName, a->firstName);
			areaInformation(code);
			a = a->nextNode;
		} else {
			a = a->nextNode;
		}
	}
}

/*
 * This method displays only the data that is selected by user using specific last name
 * using keyboard input
 */
void displayPhoneBookLastName(struct phoneEntry * a, char *name)
{
	while (a != NULL) {
		int result = strcmp(a->lastName, name);
		if(result == 0){
			printf("Phone number: %d-%d belongs to the student %s, %s and his number is from ", a->areaCode, a->phoneNumber, a->lastName, a->firstName);
			areaInformation(a->areaCode);
			a = a->nextNode;
		} else {
			a = a->nextNode;
		}
	}
}

void savedPhoneNumber(int *code, int *number) {
	int *codeCopy = code;
	int *numberCopy = number;
	struct phoneEntry *numberOne = NULL;
	struct phoneEntry *numberTwo = NULL;
	struct phoneEntry *numberThree = NULL;
	struct phoneEntry *numberFour = NULL;
	struct phoneEntry *numberFive = NULL;
	struct phoneEntry *numberSix = NULL;
	struct phoneEntry *numberSeven = NULL;
	struct phoneEntry *numberEight = NULL;
	struct phoneEntry *numberNine = NULL;
	struct phoneEntry *numberTen = NULL;

	numberOne = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberTwo = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberThree = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberFour = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberFive = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberSix = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberSeven = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberEight = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberNine = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberTen = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));

	numberOne->areaCode = 613;
	numberOne->phoneNumber = 7209970;
	numberOne->firstName = "Dhruv";
	numberOne->lastName = "Patel";
	numberOne->nextNode = numberTwo;

	numberTwo->areaCode = 416;
	numberTwo->phoneNumber = 7209770;
	numberTwo->firstName = "Will";
	numberTwo->lastName = "Robinson";
	numberTwo->nextNode = numberThree;

	numberThree->areaCode = 647;
	numberThree->phoneNumber = 7209700;
	numberThree->firstName = "Sanket";
	numberThree->lastName = "Patel";
	numberThree->nextNode = numberFour;

	numberFour->areaCode = 519;
	numberFour->phoneNumber = 7200970;
	numberFour->firstName = "Shubham";
	numberFour->lastName = "Jain";
	numberFour->nextNode = numberFive;

	numberFive->areaCode = 905;
	numberFive->phoneNumber = 7220970;
	numberFive->firstName = "Denny";
	numberFive->lastName = "Robert";
	numberFive->nextNode = numberSix;

	numberSix->areaCode = 613;
	numberSix->phoneNumber = 7720970;
	numberSix->firstName = "Vishal";
	numberSix->lastName = "Arora";
	numberSix->nextNode = numberSeven;

	numberSeven->areaCode = 416;
	numberSeven->phoneNumber = 7209880;
	numberSeven->firstName = "Manan";
	numberSeven->lastName = "Patel";
	numberSeven->nextNode = numberEight;

	numberEight->areaCode = 647;
	numberEight->phoneNumber = 7209999;
	numberEight->firstName = "Ramesh";
	numberEight->lastName = "Shukla";
	numberEight->nextNode = numberNine;

	numberNine->areaCode = 519;
	numberNine->phoneNumber = 7209777;
	numberNine->firstName = "Dhairya";
	numberNine->lastName = "Shah";
	numberNine->nextNode = numberTen;

	numberTen->areaCode = 905;
	numberTen->phoneNumber = 7220900;
	numberTen->firstName = "Shivum";
	numberTen->lastName = "Tiwari";
	numberTen->nextNode = NULL;

	displayPhoneBook(numberOne, codeCopy, numberCopy);
}

/*
 * This method display all the data
 */
void savedCode(int *code) {
	int *codeCopy = code;
	struct phoneEntry *numberOne = NULL;
	struct phoneEntry *numberTwo = NULL;
	struct phoneEntry *numberThree = NULL;
	struct phoneEntry *numberFour = NULL;
	struct phoneEntry *numberFive = NULL;
	struct phoneEntry *numberSix = NULL;
	struct phoneEntry *numberSeven = NULL;
	struct phoneEntry *numberEight = NULL;
	struct phoneEntry *numberNine = NULL;
	struct phoneEntry *numberTen = NULL;

	numberOne = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberTwo = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberThree = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberFour = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberFive = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberSix = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberSeven = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberEight = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberNine = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberTen = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));

	numberOne->areaCode = 613;
	numberOne->phoneNumber = 7209970;
	numberOne->firstName = "Dhruv";
	numberOne->lastName = "Patel";
	numberOne->nextNode = numberTwo;

	numberTwo->areaCode = 416;
	numberTwo->phoneNumber = 7209770;
	numberTwo->firstName = "Will";
	numberTwo->lastName = "Robinson";
	numberTwo->nextNode = numberThree;

	numberThree->areaCode = 647;
	numberThree->phoneNumber = 7209700;
	numberThree->firstName = "Sanket";
	numberThree->lastName = "Patel";
	numberThree->nextNode = numberFour;

	numberFour->areaCode = 519;
	numberFour->phoneNumber = 7200970;
	numberFour->firstName = "Shubham";
	numberFour->lastName = "Jain";
	numberFour->nextNode = numberFive;

	numberFive->areaCode = 905;
	numberFive->phoneNumber = 7220970;
	numberFive->firstName = "Denny";
	numberFive->lastName = "Robert";
	numberFive->nextNode = numberSix;

	numberSix->areaCode = 613;
	numberSix->phoneNumber = 7720970;
	numberSix->firstName = "Vishal";
	numberSix->lastName = "Arora";
	numberSix->nextNode = numberSeven;

	numberSeven->areaCode = 416;
	numberSeven->phoneNumber = 7209880;
	numberSeven->firstName = "Manan";
	numberSeven->lastName = "Patel";
	numberSeven->nextNode = numberEight;

	numberEight->areaCode = 647;
	numberEight->phoneNumber = 7209999;
	numberEight->firstName = "Ramesh";
	numberEight->lastName = "Shukla";
	numberEight->nextNode = numberNine;

	numberNine->areaCode = 519;
	numberNine->phoneNumber = 7209777;
	numberNine->firstName = "Dhairya";
	numberNine->lastName = "Shah";
	numberNine->nextNode = numberTen;

	numberTen->areaCode = 905;
	numberTen->phoneNumber = 7220900;
	numberTen->firstName = "Shivum";
	numberTen->lastName = "Tiwari";
	numberTen->nextNode = NULL;

	displayPhoneBookCode(numberOne, code);
}

/*
 * This method only display data related to particular last name
 */
void savedLastName(char *lastName) {
	char *name = lastName;
	struct phoneEntry *numberOne = NULL;
	struct phoneEntry *numberTwo = NULL;
	struct phoneEntry *numberThree = NULL;
	struct phoneEntry *numberFour = NULL;
	struct phoneEntry *numberFive = NULL;
	struct phoneEntry *numberSix = NULL;
	struct phoneEntry *numberSeven = NULL;
	struct phoneEntry *numberEight = NULL;
	struct phoneEntry *numberNine = NULL;
	struct phoneEntry *numberTen = NULL;

	numberOne = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberTwo = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberThree = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberFour = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberFive = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberSix = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberSeven = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberEight = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberNine = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));
	numberTen = (struct phoneEntry*) malloc(sizeof(struct phoneEntry));

	numberOne->areaCode = 613;
	numberOne->phoneNumber = 7209970;
	numberOne->firstName = "Dhruv";
	numberOne->lastName = "Patel";
	numberOne->nextNode = numberTwo;

	numberTwo->areaCode = 416;
	numberTwo->phoneNumber = 7209770;
	numberTwo->firstName = "Will";
	numberTwo->lastName = "Robinson";
	numberTwo->nextNode = numberThree;

	numberThree->areaCode = 647;
	numberThree->phoneNumber = 7209700;
	numberThree->firstName = "Sanket";
	numberThree->lastName = "Patel";
	numberThree->nextNode = numberFour;

	numberFour->areaCode = 519;
	numberFour->phoneNumber = 7200970;
	numberFour->firstName = "Shubham";
	numberFour->lastName = "Jain";
	numberFour->nextNode = numberFive;

	numberFive->areaCode = 905;
	numberFive->phoneNumber = 7220970;
	numberFive->firstName = "Denny";
	numberFive->lastName = "Robert";
	numberFive->nextNode = numberSix;

	numberSix->areaCode = 613;
	numberSix->phoneNumber = 7720970;
	numberSix->firstName = "Vishal";
	numberSix->lastName = "Arora";
	numberSix->nextNode = numberSeven;

	numberSeven->areaCode = 416;
	numberSeven->phoneNumber = 7209880;
	numberSeven->firstName = "Manan";
	numberSeven->lastName = "Patel";
	numberSeven->nextNode = numberEight;

	numberEight->areaCode = 647;
	numberEight->phoneNumber = 7209999;
	numberEight->firstName = "Ramesh";
	numberEight->lastName = "Shukla";
	numberEight->nextNode = numberNine;

	numberNine->areaCode = 519;
	numberNine->phoneNumber = 7209777;
	numberNine->firstName = "Dhairya";
	numberNine->lastName = "Shah";
	numberNine->nextNode = numberTen;

	numberTen->areaCode = 905;
	numberTen->phoneNumber = 7220900;
	numberTen->firstName = "Shivum";
	numberTen->lastName = "Tiwari";
	numberTen->nextNode = NULL;

	displayPhoneBookLastName(numberOne, name);
}
