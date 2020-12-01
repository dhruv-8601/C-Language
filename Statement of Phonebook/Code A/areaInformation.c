/*
Student name: Dhruv Patel
(Code A) Statement of phone book
Program: areaInformation.c
*/

/*
 * This file manages the work that is related with Area Code
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * struct that is named area store information of area code along with the location associated with it
 */
typedef struct area
{
    int areaCode;
    char *areaName;
    struct area *nextNode;
}area;

/*
 * This method displays all the data that is stored inside the linked list
 */
void displayPhoneNumber(struct area* a)
{
    while(a != NULL)
    {
        printf("%d %s\n", a->areaCode, a->areaName);
        a = a->nextNode;
    }
}

/*
 * This method connects with the code of students that are
 * store in phone book so that the location can be connected
 * with student and their number
 */
void areaSearch(struct area* a, int *code)
{
    while(a != NULL)
    {
    	if(a->areaCode == code){
        printf("%s\n", a->areaName);
        a = a->nextNode;
    	} else {
    		a = a->nextNode;
    	}
    }
}

/*
 * This method helps connect phone number and area code by also initializing default area codes
 */
void areaInformation(int *code)
{
    struct area* ottawa = NULL;
    struct area* toronto_1 = NULL;
    struct area* toronto_2 = NULL;
    struct area* windsor = NULL;
    struct area* niagraFalls = NULL;

    ottawa = (struct area*)malloc(sizeof(struct area));
    toronto_1 = (struct area*)malloc(sizeof(struct area));
    toronto_2 = (struct area*)malloc(sizeof(struct area));
    windsor = (struct area*)malloc(sizeof(struct area));
    niagraFalls = (struct area*)malloc(sizeof(struct area));

    ottawa->areaCode = 613;
    ottawa->areaName = "Ottawa";
    ottawa->nextNode = toronto_1;

    toronto_1->areaCode = 416;
    toronto_1->areaName = "Toronto";
    toronto_1->nextNode = toronto_2;

    toronto_2->areaCode = 647;
    toronto_2->areaName = "Toronto";
    toronto_2->nextNode = windsor;

    windsor->areaCode = 519;
    windsor->areaName = "Windsor";
    windsor->nextNode = niagraFalls;

    niagraFalls->areaCode = 905;
    niagraFalls->areaName = "Niagra Falls";
    niagraFalls->nextNode = NULL;

    areaSearch(ottawa, code);
}

/*
 * This method is used for creating and storing default code information to linked list and displaying it
 */
void phoneNumberInformation()
{
    struct area* ottawa = NULL;
    struct area* toronto_1 = NULL;
    struct area* toronto_2 = NULL;
    struct area* windsor = NULL;
    struct area* niagraFalls = NULL;

    ottawa = (struct area*)malloc(sizeof(struct area));
    toronto_1 = (struct area*)malloc(sizeof(struct area));
    toronto_2 = (struct area*)malloc(sizeof(struct area));
    windsor = (struct area*)malloc(sizeof(struct area));
    niagraFalls = (struct area*)malloc(sizeof(struct area));

    ottawa->areaCode = 613;
    ottawa->areaName = "Ottawa";
    ottawa->nextNode = toronto_1;

    toronto_1->areaCode = 416;
    toronto_1->areaName = "Toronto";
    toronto_1->nextNode = toronto_2;

    toronto_2->areaCode = 647;
    toronto_2->areaName = "Toronto";
    toronto_2->nextNode = windsor;

    windsor->areaCode = 519;
    windsor->areaName = "Windsor";
    windsor->nextNode = niagraFalls;

    niagraFalls->areaCode = 905;
    niagraFalls->areaName = "Niagra Falls";
    niagraFalls->nextNode = NULL;

    displayPhoneNumber(ottawa);
}
