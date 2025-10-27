#include <stdio.h>
#include "exercise.h"

void concat_strings(char *str1, const char *str2) {
  int found_null = 0;
  int i = 0;
  while(!found_null) {
    if(str1[i] == '\0') {
      found_null = 1;
    }
    i++;
  }

  int j = 0;
  found_null = 0;
  while(!found_null) {
    if(str2[j] == '\0') {
      found_null = 1;
    }
    str1[i] = str2[j];
    j++; 
  }
  str1[i+j] = '\0';

  printf("%s", str1);

}