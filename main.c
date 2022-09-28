#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
 char first[255], last[255];
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* remove the newline at the end */
 printf("Now enter your last name: ");
 gets(last); /* buffer overflow? what's that? */
<<<<<<< HEAD

=======
 printf("Hello %s %s!\n", first, last);
>>>>>>> c5ea5b926b9adf5e4c137524b001086f737f05c4
 return 0;
return 0;
}
