// Author: Chetan Mitra czm5805@psu.edu 
// Collaborator: Joseph DeRosa jvd5943@psu.edu
// Collaborator: Kacey Lo kll5550@psu.edu
// Collaborator: Jiaxia Li jpl6290@psu.edu
// Collaborator: Kirtan Shah kps5871@psu.edu


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

char* lettergrade(double grade);

int main(void) {
  float number;
  char *letter = readline("Enter your CMPSC 131 grade: ");
  number = atof(letter);
  char *lg = lettergrade(number);
  printf("Your letter grade for CMPSC 131 is %s.\n",lg);
  return 0;
}
char* lettergrade(double grade){
    
    if (grade >= 93)
    {
      return "A";
    }
    if (grade >= 90)
    {
      return "A-";
    }
    if (grade >= 87)
    {
      return "B+";
    }
    if (grade >= 83)
    {
      return "B";
    }
    if (grade >= 80)
    {
      return "B-";
    }
    if (grade >= 77)
    {
      return "C+";
    }
    if (grade >= 70)
    {
      return "C";
    }
    if (grade >= 60)
    {
      return "D";
    }
    else
    {
      return "F";
    }

  }
