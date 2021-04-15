#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct person
{
    char first_name[50];
    char last_name[50];
    char address[300];
    int age;
    char gender[10];
    long long  number;
    char country[30];
    char mail[30];
    char nick_name[30];
}person;
void addrecord(person new){
    FILE *f;
    f =fopen("file.txt","w");
    fwrite (&new,sizeof(person ), 1, f);
    fclose (f);

}
void listrecord(){
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

}


void searchrecord(char name[]){
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

}
void exitt(){

}
void modify_record(char name[]){
     FILE *inf;
    person  p;
    inf = fopen ("file.txt", "r+");
    if (inf == NULL) {
        fprintf(stderr, "\nError to open the file\n");
        exit (1);
    }
    while(fread(&p, sizeof(person), 1, inf))
    {
        if (strcmp(p.first_name,name)==0){
           person  s = {"z","s","s",22,"s",44,"s","s","s"};

           // s.number=333;
            //strcpy(s.last_name,"saii");
           fwrite (&s,sizeof(s ), 1,inf);
           printf("%s",s.last_name);

        }
    }
    fclose (inf);


}
void remove_record(){}
int main(){
    person pp ={"z","s","s",22,"s",44,"s","s","s"};
    person p2 ={"a","s","s",21,"s",44,"s","s","s"};
    addrecord(pp);
     addrecord(p2);
    listrecord();
    searchrecord("a");
    modify_record("a");
    searchrecord("a");
    listrecord();

}
