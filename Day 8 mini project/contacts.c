#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
struct cont{
    char name[50];
    char phone[15];
    char email[100];
};
void addcontact(){
    struct cont c;
    FILE *conto=fopen("contacts.txt","ab");
    if(conto==NULL){
        printf("Error in opening the file\n");
        return;
    }
    printf("Enter Name:\n");
    scanf("%[^\n]",&c.name);
    printf("Enter phone number:\n");
    scanf("%[^\n]",&c.phone);
    printf("Enter E-mail:\n");
    scanf("%[^\n]",&c.email);
    fwrite(&c,sizeof(struct cont),1,conto);
    fclose(conto);
    printf("Contact added successfully\n");
}
void displaycontacts(){
    struct cont c;
    FILE* conto=fopen("contacts.txt","rb");
    if(conto==NULL){
        printf("No contacts Found\n");
        return;
    }
    printf("\n📒 Contact List:\n");
    while(fread(&c,sizeof(struct cont),1,conto)){
        printf("\n-----------------------\n");
        printf("Name: %s\n",c.name);
        printf("Phone number: %s\n",c.phone);
        printf("E-mail: %s\n",c.email);
    }
    fclose(conto);


}
void searchcont(){
    struct cont c;
    char searchname[50];
    int found=0;
    
    printf("Enter the name\n");
    scanf("%[^\n]",&searchname);
    FILE* conto=fopen("contacts.txt","rb");
    if(conto==NULL){
        printf("No contacts found\n");
        return;
    }
    while(fread(&c,sizeof(struct cont),1,conto)){
        if(strcasecmp(c.name,searchname)==0){
            printf("\n CONTACT FOUND \n");
            printf("Name: %s\n",c.name);
            printf("Phone Number: %s\n",c.phone);
            printf("E-mail: %s\n",c.email);
            found=1;
            break;
        }
        if(!found){
            printf("Contact Not Found\n");

        }
    }
    fclose(conto);
}
int main(){
    int choice;

    do{
        printf("\n======= 📱 Contact Book Menu =======\n");
         printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:addcontact();break;
            case 2:displaycontacts();break;
            case 3:searchcont();break;
            case 4:printf("\nExiting contact book\n");break;
            default: printf("Invalid choice, Try again\n");
        }
    }while(choice!=4);
    return 0;
}