#include "phonebook.h"

char* addrecord(person new){
   
    FILE *f;
    f =fopen("file.txt","a");
    fwrite (&new,sizeof(person ), 1, f);
    fclose (f);
    return "Record Added Sucessfully";

}
/**
 * @brief 
 * 
 */
int listrecord(){
    FILE *inf;
    person p;
    inf = inf = fopen ("file.txt", "r");
    if (inf == NULL) {
        fprintf(stderr, "\nError to open the file\n");
        exit (1);
    }
    while(fread(&p, sizeof(person), 1, inf)){
        
        printf(" first name ");
        printf("%s \n",p.first_name);
        printf(" last name ");
        printf("%s\n",p.last_name);
        printf(" address ");
        printf("%s\n",p.address);
        printf(" Age ");
        printf("%d\n",p.age);
        printf(" gender ");
        printf("%s\n",p.gender);
        printf(" Phone number ");
        printf("%lld\n",p.number);
        printf(" country ");
        printf("%s\n",p.country);
        printf(" mail ");
        printf("%s\n",p.mail);
        printf(" nick name ");
        printf("%s\n",p.nick_name);
        printf("-----------------------------------\n");
    }
    fclose (inf);
    return 1;


}


int searchrecord(char name[]){
    FILE *inf;
    person  p;
    inf = fopen ("file.txt", "r");
    if (inf == NULL) {
        fprintf(stderr, "\nError to open the file\n");
        exit (1);
    }
    while(fread(&p, sizeof(person), 1, inf))
    {
        if (strcmp(p.first_name,name)==0){
            printf("\n\tDetail Information About %s",name);
            printf("\nfirst_Name:%s\nlast_Name:%s\naddress:%s\nMobile no:%lld\nsex:%s\nE-mail:%s\nCountry:%s",p.first_name,p.last_name,p.address,p.number,p.gender,p.mail,p.country);

        }
    }
    fclose (inf);
    return 1;

}



char* modify_record(char name[]){
     FILE *inf;
    person  p,s;
    inf = fopen ("file.txt", "r+");
    if (inf == NULL) {
        fprintf(stderr, "\nError to open the file\n");
        exit (1);
    }
    while(fread(&p, sizeof(person), 1, inf))
    {
        if (strcmp(p.first_name,name)==0){
         // person  s = {"z","s","s",222,"s",44,"s","s","s"};
            s=p;
           s.number=333;
            strcpy(s.last_name,"saii");
            fseek(inf,-sizeof(s),SEEK_CUR);
           fwrite (&s,sizeof(s ), 1,inf);
           listrecord();
         
           break;

        }
    }
    fclose (inf);
    return "Modified Sucessfully";


}
char* remove_record(){
   FILE *inf;
    person  p,s;
    if(remove("file.txt")==0){
       inf = fopen ("temp.txt", "w");
       fclose(inf);
       int aa=rename("temp.txt","file.txt");
      // printf("%d",aa);
       return "Deleted successfully";
    }
    else{
       return "Unable to delete the file";
    }
     


}
void exitt(){
   system("cls");
   exit(0);
   //return "exitted successfully";
   
}