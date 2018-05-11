/*Authors:- Saptasrhi Sahoo,Suvham Roy & Subhadip Chakraborti
E-mail:- uzumaki.sahoo@gmail.com
Contact Number:- +91 8918773321
*/
#include <stdio.h>
#include <string.h>
//constants
#define MAX_NAME_LENGHT 100 //Maximum Name string Lenght
#define FIRST_ROUND 3       //Number of Questions for the first round
#define SECOND_ROUND 6      //Number of questions for the second round

//STDIN BUFFER CLEANER
#define STDIN_FLUSH(c) while((c=getchar())!='\n' && c!=EOF) //Can be used as taking inputs from STDIN using getchar()

//Questions and answers for first Round
#define FIRST_1 "\nWhat type of pragramming Language is C:\n1.Object Oriented Programming Language\n2.Procedural Oriented Programming Language.\n"
#define FIRST_1_ANS 2

#define FIRST_2 "\nKeyword for creating structure in C:\n1.struct\n2.enum\n"
#define FIRST_2_ANS 1

#define FIRST_3 "\nIs it possible to locate to a set of instructions with pointer in C:\n1:Yes\n2.No\n"
#define FIRST_3_ANS 1

//Questions and answers for second Round
#define SECOND_1 "\nA C variable cannot start with :\n\n1.An alphabet\n2.A number\nC.3 special symbol other than underscore\n4.Both (2) and (3)\n"
#define SECOND_1_ANS 3

#define SECOND_2 "\nWhat are ways to send a parameter to a function:\n\n1.Send by Value\n2.Send by reference\n3.Send by both\n4.Not Possible\n"
#define SECOND_2_ANS 3

#define SECOND_3 "\n#include <stdio.h>\ntypedef struct {\n  int f;\n  int g;\n  int d;\n} my_struct;\n int main() {\n   my_struct r;\n   r.f = 25;\n   printf(\"%d %d\",r.g,r.d);\n   return 0;\n }\nWhat is the output:\n\n1.0  0\n2.Garbage value\n3.Runtime Error\n4.None of the above\n"
#define SECOND_3_ANS 1

#define SECOND_4 "\nLength of int in 64bit architecture:\n\n1.2 bytes\n2.4 bytes\n3.8 bytes\n4.16 bytes\n"
#define SECOND_4_ANS 4

#define SECOND_5 "\nLength of pointers in 64bit architecture:\n\n1.2 bytes\n2.4 bytes\n3.8 bytes\n4.16 bytes\n"
#define SECOND_5_ANS 3

#define SECOND_6 "\nReturn type of malloc() and calloc():\n\n1.char*\n2.int*\n3.string*\n4.void*\n"
#define SECOND_6_ANS 4

//Help message
#define HELP "The first round is called the Warm-up Round.the\nsecond is the Challenge round. In the warm-up round, the user is asked a total\nof three simple questions and they must be able to answer at least two of them\ncorrectly to enter the next round. If the user is not capable of doing that, he is\nnot permitted to proceed further.\nIn the second and more interesting round of this quiz game in C, the user will\nbe asked questions continuously, and for each right answer given, they will earn\n$100,000!"

typedef struct {              //This structure is used to mantain the current person goin through the quiz
  char name[MAX_NAME_LENGHT]; //Name of the pereson
  int warm_up_total ;         //Score for first round
  int second_total ;          //Score for second round
}person;

const char *first_round[] = {FIRST_1,FIRST_2,FIRST_3};              //Array of first round questions
const int correct_first[] = {FIRST_1_ANS,FIRST_2_ANS,FIRST_3_ANS};  //Array of answers for first round questions

const char *second_round[] = {SECOND_1,SECOND_2,SECOND_3,SECOND_4,SECOND_5,SECOND_6};                           //Array of second round questions
const int correct_second[] = {SECOND_1_ANS,SECOND_2_ANS,SECOND_3_ANS,SECOND_4_ANS,SECOND_5_ANS,SECOND_6_ANS};   //Array of second round answers

int higest_score  = 0; //to maintain the highest score through out the sessions

//Funtion to show the highest score
int show_record(){
  return higest_score*100000;
}
//Funtion to show the score of the current contestant
int show_score(person *p){
  return 100000*(p->second_total);
}
//to edit the score
void edit_score(person *p){
  p->second_total++;
  printf("%d\n",p->second_total);
}

//to reset the highest score
void reset_score() {
  higest_score = 0;
}
//shows the help message
void help(){
  printf("[+][+]HELP[+][+]\n");
  printf("%s\n",HELP);
}
int main() {
  int ch = 5,c;
  char *t;
  do{
    printf("[+]Press 'r' to reset the highest score.[+]\n");
      STDIN_FLUSH(c){
        if (c=='r')
          printf("[+]High score is erased[+]\n");
          reset_score();
      }


    person con;     //The present contestant
    printf("[+][+][+]Welcome to C_Quiz 2018!![+][+][+]\n\n");
    help();
    printf("Enter your name: \n");
    fgets(con.name,MAX_NAME_LENGHT,stdin);
    if((t = strchr(con.name,'\n')) !=NULL)    //this is trimming the last charcter of the string and is being replavced by \0(null)
      *t = '\0';
    con.warm_up_total = 0;
    con.second_total = 0;
    printf("Welcome %s!!\n",con.name);
    printf("[+][+]Press enter to continue to the quiz....\n");

    STDIN_FLUSH(c);
    for(int i = 0 ; i<FIRST_ROUND;i++){
      do{
        printf("%s\n",first_round[i]);
        scanf("%d",&ch);
        if(ch>=1 && ch<=2){
          if (ch==correct_first[i])
            con.warm_up_total++;
          ch=0;
        }else{
            printf("[+]Wrong Choice!![+]\n");
        }

      }while(ch);
    }

    printf("[+]Your First round Total: %d [+].\n",con.warm_up_total);

    if(con.warm_up_total>=2){
      printf("[+]You qualified..Horray!! :-) :-) \n");


      for (size_t i = 0; i < SECOND_ROUND; i++) {

        do{
          printf("%s\n",second_round[i]);
          scanf("%d",&ch);
          if(ch>=1 && ch<=4){
          //  printf("%d\n",correct_second[i]);
            //printf("%d\n",ch);
            if (ch==correct_second[i])
              edit_score(&con);
            ch=0;
          }else{
              printf("[+]Wrong Choice!![+]\n");
          }
        }while(ch);

      }


      if(con.second_total > higest_score)   //Determing the highest score
        higest_score = con.second_total;

        printf("[+]Your Score : %d\n",show_score(&con));
        printf("[+]Highest Score : %d\n",show_record());

    }else{
      printf("[+]Sorry!!Not qualified. :-( :-(\n");
    }

  STDIN_FLUSH(c);
  printf("[+]Is there another participants?(y/n)[+]\n");
}while(getchar()=='y' || getchar()=='Y');

printf("\nThank you. :-) ;-)\n");
  return 0;
}
