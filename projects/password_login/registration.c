#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login();
void registerUser();
void userView();

#define MAX_LENGTH 30

struct User {
  char username[MAX_LENGTH];
  char password[MAX_LENGTH];
};

int main() {
  int choice;
  while (1) {
    printf("\n===WELCOME TO WizLog===\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. View All Users\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      registerUser();
      break;
    case 2:
      login();
      break;
    // case 3:
    //   viewUsers();
    //   break;
    case 4:
      printf("Exitig WizLog....\n");
      exit(0);
    default:
      printf("That is not an option! Please try again.\n");
    }
  }
  return 0;
}

void registerUser() {
  struct User user;
  FILE *file;

  file = fopen("user.txt", "a");
  if (file == NULL) {
    printf("No file exists.\n");
    return;
  }

  printf("\n===Registration===\n");
  printf("Enter a username: ");
  scanf("%s", user.username);
  printf("Enter password: ");
  scanf("%s", user.password);

  fprintf(file, "%s %s\n", user.username, user.password);
  fclose(file);

  printf("Registration complete! Welcome to Wizlog");
}

void login() {
  struct User user;
  char inputUsername[MAX_LENGTH], inputPassword[MAX_LENGTH];
  FILE *file;
  int isAuthenticated = 0;

  file = fopen("user.txt", "r");
  if (file == NULL) {
    printf("Error! Please register first!");
    return;
  }

  while (fscanf(file, "%s %s\n", user.username, user.password) != EOF) {
    if (strcmp(inputUsername, user.username) == 0 &&
        strcmp(inputPassword, user.password) == 0) {
      isAuthenticated = 1;
      break;
    }
  }
  fclose(file);

  if (isAuthenticated) {
    printf("Welcome to Wizlog!");
  } else {
    printf("Error! User does not exsit!");
  }
}
