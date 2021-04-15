#include "phonebook.h"
void phone_book_menu();

int main(){

printf("\n****Calculator****\n");
while(1){
    phone_book_menu();
}
return 0;
}

void phone_book_menu(){
    printf("\n\n\t\t\t  MENU\t\t\n\n");
    printf("\t1.Add New contact   \t2.List all contacts  \t3.Search contact  \n\t4.Modify contact  \t5.EXIT \t6.Delete \n");
    printf("Enter the Respective Number for Coressponding Action ");
   //__fpurge(stdin);
    char phonebook_operation;
    scanf("%c",&phonebook_operation);
    switch (phonebook_operation)
    {
    case '1':
        
        printf("Enter first name \n");
		person p;
        scanf("%s",p.first_name);
        printf("Enter last name \n");
        scanf("%s",p.last_name);
        printf("Enter address \n");
        scanf("%s",p.address);
        printf("Enter Age \n");
        scanf("%d",&p.age);
        printf("Enter gender \n");
        scanf("%s",p.gender);
        printf("Enter Phone number \n");
        scanf("%lld",&p.number);
        printf("Enter country \n");
        scanf("%s",p.country);
        printf("Enter mail \n");
        scanf("%s",p.mail);
        printf("Enter nick name \n");
        scanf("%s",p.nick_name);
        printf("%s",addrecord(p));

        break;
    case '2':
        if(1==listrecord()){
            printf("\n Sucessfully printed all contacts .");
        }
        else{
            printf("\nError in printing contacts");
        }
        break;

    case '3':
        printf("\nEnter the contact name to be searched for ");
        char namee[30];
        scanf("%s",&namee);
        if (1==searchrecord(namee)){

        printf("\n printed contact .");
        }
        else{
            printf("\nError in printing contact");
        }
        break;
    case '4':
        printf("\nEnter the contact name to be modifiedfor ");
        char name[30];
        scanf("%s",&name);
        printf(modify_record(name));
        break;
    case '5':
        exitt();
        break;
    case '6':
        printf("%s",remove_record());
        break;

      

    default:
        printf("Something wrong");
		break;
    }

}