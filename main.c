// Author: Jocelyn Fafard jqf5530@psu.edu
// Collaborator: Stephanie Jen tzj5235@psu.edu
// Collaborator: Corey Freas cxf5302@psu.edu
// Collaborator: Christian Dell'Edera cmd6705@psu.edu
// Section: 011R
// Breakout: 4 

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int num) {
  if (num == 0) {
    return 0;
  }
  else {
    return num +sum_n(num-1);
  }
}

void print_n(const char *s, int num) {
  if (num == 0) {
    return;
  }
  else {
    printf("%s\n", s);
    print_n(s, num-1);
  }
}


int main(void) {
  int num;
  char *number = readline("Enter an int: ");
  num = atoi(number);
  printf("sum is %d.\n", sum_n(num));

  char *phrase = readline("Enter a string: ");
  print_n(phrase, num);
}