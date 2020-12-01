/*
Student name: Dhruv Patel
(Code B) Statement of phone book
Program: phoneBookEntry.c
*/

/*
 * This file manages the work that is related with Phone Number
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * struct that is named phoneNumber store information of area code, phone Number along with the
 * user first and last name associated with it
 */
typedef struct phoneNumber {
	int areaCode;
	int phoneNumber;
	char firstName[20];
	char lastName[20];
	struct phoneNumber *nextNode;
} phoneNumber;

/*
 * Global variable of struct that store all values of linked list
 */
struct phoneNumber *firstNumber;

/*
 * This method displays all the data that is stored inside the linked list
 */
void displayPhone(struct phoneNumber *a) {
	while (a != NULL) {
		printf("%d %d %s %s\n", a->areaCode, a->phoneNumber, a->firstName,
				a->lastName);
		a = a->nextNode;
	}
}

/*
 * This method add new data in linked list
 */
void insertPhone(int code, int number, char fName[20], char lName[20]) {

	if (firstNumber == NULL) {
		firstNumber = (struct phoneNumber*) malloc(sizeof(struct phoneNumber));
		firstNumber->areaCode = code;
		firstNumber->phoneNumber = number;

		strcpy(firstNumber->firstName, fName);
		strcpy(firstNumber->lastName, lName);

		firstNumber->nextNode = NULL;
	} else {

		struct phoneNumber *tempNode = (struct phoneNumber*) malloc(
				sizeof(struct phoneNumber));

		tempNode->areaCode = code;
		tempNode->phoneNumber = number;

		strcpy(tempNode->firstName, fName);
		strcpy(tempNode->lastName, lName);

		tempNode->nextNode = firstNumber;
		firstNumber = tempNode;
	}
}

/*
 * This method adds default value for linked list data that is required to be added
 */
void phoneInformation() {
	insertPhone(613, 7209970, "Dhruv", "Patel");
	insertPhone(416, 7209770, "Will", "Robinson");
	insertPhone(647, 7209700, "Sanket", "Patel");
	insertPhone(519, 7200970, "Shubham", "Jain");
	insertPhone(905, 7220970, "Denny", "Curtis");
	insertPhone(613, 7720970, "Vishal", "Arora");
	insertPhone(416, 7209880, "Manan", "Patel");
	insertPhone(647, 7209999, "Ramesh", "Shukla");
	insertPhone(519, 7209777, "Dhairya", "Shah");
	insertPhone(905, 7220900, "Shivum", "Tiwari");
}

/*
 * This method is use to modify a specify data of specific index
 */
void modifyPhoneNumber() {
	int choice;
	int areaCode;
	int number;
	char lName[20];
	_Bool isValid = 1;
	printf("Select a method to select modification data:\n");
	printf("1. To select using phone number\n");
	printf("2. To select using last name\n");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("Enter Area Code:");
		scanf("%d", &areaCode);
		printf("Enter Phone Number:");
		scanf("%d", &number);
		while (firstNumber != NULL) {
			if (areaCode == firstNumber->areaCode
					&& number == firstNumber->phoneNumber) {
				int code;
				int no;
				char fiName[20];
				char laName[20];
				printf("Enter new Area Code:");
				scanf("%d", &code);
				printf("Enter new Phone Number:");
				scanf("%d", &no);
				printf("Enter First Name:");
				scanf("%s", &fiName);
				printf("Enter new Last Name:");
				scanf("%s", &laName);
				firstNumber->areaCode = code;
				firstNumber->phoneNumber = no;
				strcpy(firstNumber->firstName, fiName);
				strcpy(firstNumber->lastName, laName);
				break;
			}
			firstNumber = firstNumber->nextNode;
		}

	} else if (choice == 2) {
		printf("Enter Last Name:");
		scanf("%s", &lName);

		while (firstNumber != NULL) {
			if (strcmp(lName, firstNumber->lastName) == 0) {
				int code;
				int no;
				char fiName[20];
				char laName[20];
				printf("Enter new Area Code:");
				scanf("%d", &code);
				printf("Enter new Phone Number:");
				scanf("%d", &no);
				printf("Enter First Name:");
				scanf("%s", &fiName);
				printf("Enter new Last Name:");
				scanf("%s", &laName);
				firstNumber->areaCode = code;
				firstNumber->phoneNumber = no;
				strcpy(firstNumber->firstName, fiName);
				strcpy(firstNumber->lastName, laName);
				break;
			}
			firstNumber = firstNumber->nextNode;
		}
	} else {
		printf("Wrong Input!");
	}
}

/*
 * This method is use to delete a specify data of specific index
 */
void deletePhoneNumber() {
	int choice;
	int areaCode;
	int number;
	char lName[20];
	_Bool isValid = 1;
	printf("Select a method to select modification data:\n");
	printf("1. To select using phone number\n");
	printf("2. To select using last name\n");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("Enter Area Code:");
		scanf("%d", &areaCode);
		printf("Enter Phone Number:");
		scanf("%d", &number);
		struct phoneNumber *tempNode = firstNumber;
		
		if (areaCode == firstNumber->areaCode
				&& number == firstNumber->phoneNumber) {
			free(firstNumber);
			firstNumber = tempNode->nextNode;
			return;
		}

		while (tempNode != NULL) {
			if (areaCode == tempNode->nextNode->areaCode
					&& number == tempNode->nextNode->phoneNumber) {
				free(tempNode->nextNode);
				tempNode->nextNode = tempNode->nextNode->nextNode;
				break;
			}
			tempNode = tempNode->nextNode;
		}

	} else if (choice == 2) {
		printf("Enter Last Name:");
		scanf("%s", &lName);
		struct phoneNumber *tempNode = firstNumber;

		if (!strcmp(lName, firstNumber->lastName)) {
			free(firstNumber);
			firstNumber = tempNode->nextNode;
			return;
		}

		while (tempNode != NULL) {
			if (!strcmp(lName, tempNode->nextNode->lastName)) {
				free(tempNode->nextNode);
				tempNode->nextNode = tempNode->nextNode->nextNode;
				break;
			}
			tempNode = tempNode->nextNode;
		}
	} else {
		printf("Wrong Input!");
	}
}

/*
 * This method is used to add data that is input by user using keyboard input
 */
void insertUserInputNumber() {
	int areaCode;
	int number;
	char fName[20];
	char lName[20];
	printf("Enter Area Code:");
	scanf("%d", &areaCode);
	printf("Enter Phone Number:");
	scanf("%d", &number);
	printf("Enter First Name:");
	scanf("%s", &fName);
	printf("Enter Last Name:");
	scanf("%s", &lName);

	insertPhone(areaCode, number, fName, lName);
	displayPhone(firstNumber);
}

