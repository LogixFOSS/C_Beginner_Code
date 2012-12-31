/* Code supplied by Prelude */

#include <stdio.h> 
#include <string.h> 
#include <conio.h>

#define DELIM   " " 
#define MAXWORD 80 
#define MAXLEN  20 

int main(void)
{
  char  words[MAXWORD][MAXLEN];
  char  buff[BUFSIZ];
  int   ntokens = 0;
  int   i;

  printf("Enter a string: ");
  fflush(stdout);

  if (fgets(buff, sizeof buff, stdin) != NULL)
  {
    char  *sep = strtok(buff, DELIM);

    while (sep != NULL)
    {
      strcpy(words[ntokens++], sep);
      sep = strtok(NULL, DELIM);
    }
  }

  for (i = 0; i < ntokens; i++) 
  {
    puts(words[i]);
  }

  getch();

/*
 * Output :
  Enter a string: this is a long line of text
  this
  is
  a
  long
  line
  of
  text
 *
 */
}

