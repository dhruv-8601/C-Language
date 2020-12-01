/*
Student name: Dhruv Patel
(Code A) Statement of phone book
Program: Main.c
*/

/*
 * This file has the main method for Code A part of assignment
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * declaring methods that will be required to be call and use for application to work
 */
void phoneNumberInformation();
void savedPhoneNumber();

/*
 * Main method
 */
int main()
{
	/*
	 * Some basic variables that are used for to operate the main application
	 */
    char choice;
    char *lastName;
    int areaCode, phoneNumber;

	/*
	 * while loop that continues its iteration until user input 'q' to quit the application
	 */
    while (choice != 'q')
    {
        printf("Choose one of the five following options:\n");
        printf("Press [1] to get information based on the phone number:\n");
        printf("Press [2] to get information based on Area Code:\n");
        printf("Press [3] to get information based on Last Name:\n");
        printf("Press [4] to print all area-code information:\n");
        printf("Press [q] to quit:\n");
        scanf("%c", &choice);
        printf("You pressed: %c\n", choice);
        switch (choice)
        {
			case '1':
				printf("Enter Area Code:");
				scanf("%d", &areaCode);
				printf("Enter 7-digit number:");
				scanf("%d", &phoneNumber);
				printf("Your 10-digit phone number was: %d-%d\n", areaCode, phoneNumber);

			savedPhoneNumber(areaCode, phoneNumber);
			break;

			case '2':
				printf("Enter Area Code:");
				scanf("%d", &areaCode);
				savedCode(areaCode);
		   	   break;

			case '3':
				printf("Enter last name:");
				scanf("%s", lastName);
				savedLastName(lastName);
				break;

		   	case '4':
			   phoneNumberInformation();
			break;

		   	case 'q':
		   		printf("Exiting...");
		   	break;

			default:
			printf("Wrong Input!");
			break;
        }
        while (getchar() != '\n');
    }
    return 0;
}
