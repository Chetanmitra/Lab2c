#include <stdio.h>

char* lettergrade(double grade);

int main(void) {
  float number;
  printf("Enter your CMPSC 131 grade:");
  scanf("%f", &number);
  char* lg = lettergrade(number);
  printf("Your letter grade for CMPSC 131 is %s.",lg);
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
