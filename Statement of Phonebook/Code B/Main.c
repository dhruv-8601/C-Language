/*
Student name: Dhruv Patel
(Code B) Statement of phone book
Program: Main.c
*/

/*
 * This file has the main method for Code B part of assignment
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * declaring methods that will be required to be call and use for application to work
 */
insertUserInputCode();
insertUserInputNumber();
modifyPhoneNumber();
deletePhoneNumber();

/*
 * Main method
 */
int main()
{

	/*
	 * Some basic variables that are used for to operate the main application
	 */
    char choice;
    char lastName[10];
    int areaCode, phoneNumber;
    /*
     * This two methods call default values that are to be stored inside the linked list
     * phoneCode method stored default values of area code inside area code linked list
     * phoneInformation method stored default values of phone number inside area code linked list
     */
	phoneCode();
	phoneInformation();

	/*
	 * while loop that continues its iteration until user input 'q' to quit the application
	 */
    while (choice != 'q')
    {
        printf("Choose one of the five following options:\n");
        printf("Press [1] to Enter Area information:\n");
        printf("Press [2] to Enter PhoneBook Entry:\n");
        printf("Press [3] to Modify an existing PhoneBook Entry:\n");
        printf("Press [4] to Delete an existing PhoneBook Entry:\n");
        printf("Press [q] to quit:\n");
        scanf("%c", &choice);
        printf("You pressed: %c\n", choice);

        /*
         * switch case to call method associated with the option
         */
        switch (choice)
        {
        case '1':
        	insertUserInputCode();
       break;

       case '2':
    	   insertUserInputNumber();
       break;

       case '3':
    	   modifyPhoneNumber();
    	   break;

       case '4':
    	   deletePhoneNumber();
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
