#include <stdio.h>

int main(void) {
  char string[5] = "Hello";
  setvbuf(stdout, NULL, _IOLBF, BUFSIZ);    //setting buffer
  for(int i = 0; i < 5; i++){
    printf("%c", string[i]);    //each character put in separate printf
    sleep(1);                   //sleep for 1 sec
  }
  return 0;
}