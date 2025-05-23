#include <ctype.h>
#include <stdio.h>

int main() {
  char cipher[500], ch;

  int key;

  printf("Message encryption: ");
  scanf("%s", cipher);

  printf("Enter key: ");
  scanf("%d", &key);

  for (int i = 0; cipher[i] != '\0'; ++i) {
    ch = cipher[i];

    if (isalnum(ch)) {
      if (islower(ch)) {
        ch = (ch - 'a' - key + 26) % 26 + 'a';
      }
      if (isupper(ch)) {
        ch = (ch - 'A' - key + 26) % 26 + 'A';
      }
      if (isdigit(ch)) {
        ch = (ch - '0' - key + 10) % 10 + '0';
      }
    } else {
      printf("Invalid Message");
    }

    cipher[i] = ch;
  }
  printf("Ecryption: %s\n", cipher);

  return 0;
}
