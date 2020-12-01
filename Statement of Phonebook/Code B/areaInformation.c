/*
Student name: Dhruv Patel
(Code B) Statement of phone book
Program: areaInoformation.c
*/

/*
 * This file manages the work that is related with Area Code
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * struct that is named area store information of area code along with the location associated with it
 */
typedef struct area
{
    int areaCode;
    char areaName[20];
    struct area *nextNode;
}area;

/*
 * Global variable of struct that store all values of linked list
 */
struct area* ottawa;

/*
 * This method displays all the data that is stored inside the linked list
 */
void displayPhoneCode(struct area* a)
{
    while(a != NULL)
    {
        printf("%d %s\n", a->areaCode, a->areaName);
        a = a->nextNode;
    }
}

/*
 * This method add new data in linked list
 */
void insertCode(int code, char store[20]){

	if(ottawa == NULL)
    {
    	ottawa = (struct area*)malloc(sizeof(struct area));
        ottawa->areaCode = code;

        strcpy(ottawa->areaName , store);

        ottawa->nextNode = NULL;
    } else {
        struct area* tempNode = ottawa;

        while (tempNode->nextNode != NULL)
        {
            tempNode = tempNode->nextNode;
        }

    	tempNode->nextNode = (struct area*)malloc(sizeof(struct area));
        tempNode->nextNode->areaCode = code;
        strcpy(tempNode->nextNode->areaName , store);
        tempNode->nextNode->nextNode = NULL;
    }

}

/*
 * This method adds default value for linked list data that is required to be added
 */
void phoneCode()
{
    insertCode(613, "Ottawa");
    insertCode(416, "Toronto");
    insertCode(647, "Toronto");
    insertCode(519, "Windsor");
    insertCode(905, "Niagra Falls");
}

/*
 * This method is used to add data that is input by user using keyboard input
 */
void insertUserInputCode()
{
	int areaCode;
    char location[20];
    printf("Enter Area Code:");
    scanf("%d", &areaCode);
    printf("Enter Location for the Area Code that you just mention:");
    scanf("%s", &location);


	insertCode(areaCode, location);
	displayPhoneCode(ottawa);
}
