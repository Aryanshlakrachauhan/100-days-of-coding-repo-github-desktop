/* Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum Operation{
 GUEST, USER, ADMIN
};


int main(){
  enum Operation O;
  char role[50];
  printf("Enter your role:  \n");
  scanf("%s", role);

  for (int i = 0; role[i] != '\0'; i++){
    role[i] = toupper(role[i]);
  }

  if (strcmp(role, "GUEST") == 0){
    O = GUEST;
  }
  else if (strcmp(role, "USER") == 0){
    O = USER;
  }
  else if (strcmp(role, "ADMIN") == 0){
    O = ADMIN;
  }
  else{
    printf("Invalid Input.");
    return 0;
  }
  
  switch(O){
    case GUEST: printf("Welcome Guest!"); break;
    case USER: printf("Welcome User!"); break;
    case ADMIN: printf("Welcome Admin!"); break;
  }
    return 0;
}