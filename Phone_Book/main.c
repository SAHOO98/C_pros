#include <stdio.h>
#define MAX_STRING_LIMIT 100
#define EMAIL_LENGHT 254
#define PHONE_NUMBER_LENGHT 13

typedef struct p{
  char name[MAX_STRING_LIMIT];              //Name of the person
  short sex;                                //sex: 1 for male ,and 0 for female
  char email[EMAIL_LENGHT];                 //Email of the person
  char phone_number[PHONE_NUMBER_LENGHT];   //phone number of the person
}Person;
