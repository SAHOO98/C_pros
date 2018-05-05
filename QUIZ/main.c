#include <stdio.h>
#include <string.h>
//constants
#define MAX_NAME_LENGHT 100
#define FIRST_ROUND 3
#define SECOND_ROUND 6
//Questions for first Round
#define FIRST_1 "What type of pragramming Language is C:\n1.Object Oriented Programming Language\n2.Procedural Oriented Programming Language.\n"
#define FIRST_1_ANS 2

#define FIRST_2 "Keyword for creating structure in C:\n1.struct\n2.enum\n"
#define FIRST_2_ANS 1

#define FIRST_3 "Is it possible to locate to a set of instructions with pointer in C:\n1:Yes\n2.No\n"
#define FIRST_3_ANS 1

//Questions for second Round
#define SECOND_1 "A C variable cannot start with :\n1.An alphabet\n2.A number\nC.3 special symbol other than underscore\n4.Both (2) and (3)\n"
#define SECOND_1_ANS 3

#define SECOND_2 "What are ways to send a parameter to a function:\n1.Send by Value\n2.Send by reference\n3.Send by both\n4.Not Possible\n"
#define SECOND_2_ANS 3

#define SECOND_3 "#include <stdio.h>\ntypedef struct {\n  int f;\n  int g;\n  int d;\n} my_struct;\n int main() {\n   my_struct r;\n   r.f = 25;\n   printf(\"%d %d\",r.g,r.d);\n   return 0;\n }\nWhat is the output:\n1.0  0\n2.Garbage value\n3.Runtime Error\n4.None of the above\n"
#define SECOND_3_ANS 1

#define SECOND_4 "Length of int in 64bit architecture:\n1.2 bytes\n2.4 bytes\n3.8 bytes\n4.16 bytes\n"
#define SECOND_4_ANS 4

#define SECOND_5 "Length of pointers in 64bit architecture:\n1.2 bytes\n2.4 bytes\n3.8 bytes\n4.16 bytes\n"
#define SECOND_5_ANS 8

#define SECOND_6 "Return type of malloc() and calloc():\n1.char*\n2.int*\n3.string*\n4.void*\n"
#define SECOND_6_ANS 4

//Help message
#define HELP "The first is called the Warm-up Round.the\nsecond is the Challenge round. In the warm-up round, the user is asked a total\nof three simple questions and they must be able to answer at least two of them\ncorrectly to enter the next round. If the user is not capable of doing that, he is\nnot permitted to proceed further.\nIn the second and more interesting round of this quiz game in C, the user will\nbe asked questions continuously, and for each right answer given, they will earn\n$100,000!"

typedef struct {
  char name[MAX_NAME_LENGHT];
  int warm_up_total ;
  int second_total ;
}person;

const char *first_round[] = {FIRST_1,FIRST_2,FIRST_3};
const int correct_first[] = {FIRST_1_ANS,FIRST_2_ANS,FIRST_3_ANS};

const char *second_round[] = {SECOND_1,SECOND_2,SECOND_3,SECOND_4,SECOND_5,SECOND_6};
const int correct_second[] = {SECOND_1_ANS,SECOND_2_ANS,SECOND_3_ANS,SECOND_4_ANS,SECOND_5_ANS,SECOND_6_ANS};

int higest_score  = 0;

int show_record(){
  return higest_score;
}

int show_score(person *p){
  return 100000*(p->second_total);
}

void edit_score(person *p){
  p->second_total++;
}

void reset_score() {
  higest_score = 0;
}

void help(){
  printf("[+][+]HELP[+][+]\n");
  printf("%s\n",HELP);
}
int main() {
  int ch = 5;
  do{
    printf("Press 'r' to reset the highest score.\n");
    if('r' == getchar())
      reset_score();
    person con;
    printf("[+][+][+]Welcome to C_Quiz 2018!![+][+][+]\n\n");
    help();

    printf("[+]Enter name:\n");
    fgets(con.name,MAX_NAME_LENGHT,stdin);
    con.warm_up_total = 0;
    con.second_total = 0;
    printf("[+][+]Press enter to continue to the quiz....\n");
    getchar();
    for(int i = 0 ; i<FIRST_ROUND;i++){
      do{
        printf("%s\n",first_round[i]);
        scanf("%d",&ch);
        switch (ch) {
          case correct_first[i]:
          con.warm_up_total++;
          ch = 0;
          break;
          default:
          if (ch!=2 && ch !=1) {
            printf("[+]Wrong Choice!![+]\n");
          }else{
            ch = 0;
          }
        }
      }while(ch);
    }
    if(con.warm_up_total>=2){
      int f;
      for (size_t i = 0; i < SECOND_ROUND; i++) {
        printf("[+]Enter  's' to view your score :\n");
        f = getchar();
        switch (f) {
          case 's':
            printf("[+]Current Score %d.\n[+]Highest Score %d.\n",show_score(&con),show_record());

        }
        do{
          printf("%s\n",second_round[i]);
          scanf("%d",&ch);
          switch (ch) {
            case correct_second[i]:
            edit_score(&con);
            ch = 0;
            break;
            default:
            if (ch>4 && ch <1) {
              printf("[+]Wrong Choice!![+]\n");
            }else{
              ch = 0;
            }
          }
        }while(ch);
      }

      if(con.second_total > higest_score)
        higest_score = con.second_total;

        printf("[+]Your Score :-%d\n",show_score(&con));
        printf("Highest Score :-%d\n",show_record());

    }else{
      printf("Sorry!!Not qualified. :-( :-(\n");
    }
  printf("%s\n","Is there another participants??(y/n)\n");
}while('y' == getchar());
  return 0;
}
