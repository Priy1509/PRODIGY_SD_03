#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 100
struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};
struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

void addContact() 
{
    if (numContacts < MAX_CONTACTS) 
{
        printf("Enter name: ");
        scanf("%s", contacts[numContacts].name);
        printf("Enter phone number: ");
        scanf("%s", contacts[numContacts].phone);
        printf("Enter email address: ");
        scanf("%s", contacts[numContacts].email);
        numContacts++;
        printf("Contact added successfully!\n");
    } 
else 
{
        printf("Contact list is full!\n");
    }
}

void displayContacts()
 {
    if (numContacts == 0) 
{
        printf("No contacts to display.\n");
    } 
else
 {
        printf("Contacts:\n");
        for (int i = 0; i < numContacts; i++) {
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            printf("\n");
        }
    }
}

int main()
 {
    int choice;
    do
 {
        printf("Contact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
{
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
 while (choice != 3);
 return 0;
}
