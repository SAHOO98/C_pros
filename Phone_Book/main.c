#include <stdio.h>
#include <string.h>

#define NEW_PERSON(x) (Person *)malloc(x*sizeof(Person))
#define EXTEND(ptr,size) (POINT *)realloc(ptr,size*sizeof(POINT))

#define MAX_STRING_LIMIT 100
#define EMAIL_LENGHT 254
#define PHONE_NUMBER_LENGHT 13
#define EXIT_SUCCESS 0
#define EXIT_PROBLEM0 1 //invalid varialble value

const char *help = "This a Phone book application.\n For:\n Insertion: press 1\nModifications: press 2\nDeletion: press 3\nListing: press 4\nSearching: press 5\nEXIT:press -1\nThank you!!";
const char *credits = "Applications made by Saptasrhi Sahoo.\nEmail:-uzumaki.sahoo@gmail.com.\nGithub:-https://github.com/SAHOO98";

typedef struct p{
  char name[MAX_STRING_LIMIT];              //Name of the Person
  char phone_number[PHONE_NUMBER_LENGHT];   //phone number of the person
  short sex;                                //sex: 1 for male ,and 0 for female
  char email[EMAIL_LENGHT];                 //Email of the person
}Person;

Person *head = NULL;
int COUNT  = 0;

void addrecord(char *name,char *phone_number,char *email,int sex){

  if(head == NULL){
    head = NEW_PERSON(COUNT+1);
    strcpy(head->name,name);
    strcpy(head->phone_number,phone_number);
    strcpy(head->email,email);
    head->sex = sex;
  }else{
    Person *t
    t  = head;
    head = EXTEND(head,COUNT+1);
    t += COUNT;
    strcpy(t->name,name);
    strcpy(t->phone_number,phone_number);
    strcpy(t->email,email);
    t->sex = sex;

  }
  COUNT++;
}
int menu(){
  int choice,sex;
  char name[MAX_STRING_LIMIT],phone_number[PHONE_NUMBER_LENGHT],email[EMAIL_LENGHT];
  printf("%s",help);
  switch (choice){
    case -1 :
      return EXIT_SUCCESS;
    case 1:
      printf("Enter your name,phone number,Email,sex:-\n" );
      fgets(name,MAX_STRING_LIMIT,stdin);
      fgets(phone_number,PHONE_NUMBER_LENGHT,stdin);
      if(strlen(phone_number)<10)
       return EXIT_PROBLEM0;
      fgets(email,EMAIL_LENGHT,stdin);
      scanf("%d",&sex);

      addrecord(nam,phone_number,email,sex);


  }

}
void start(){
  printf("Welcome to Elegant phone book.\n", );
  menu();


}
int main(int argc, char const *argv[]) {

  return 0;
}
