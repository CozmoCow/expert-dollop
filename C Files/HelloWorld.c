#include <stdio.h>
#include <ctype.h>

int main(){

  char unit;
  float temp;

  printf("\nIs the temperature in (C)elsius or (F)ahrenheit?: ");
  scanf(" %c", &unit);

  if(toupper(unit) == 'C'){

  }
  
  else if(toupper(unit) == 'F'){

  }
  
  else{
    printf("\nInvalid input.\n");
  }
  return 0;

  
}