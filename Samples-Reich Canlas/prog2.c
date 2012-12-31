#include<stdio.h>
#include<stdlib.h>

main()
{
           
      
      char character;
      character=getch();
      
      if(character>=97 && character<=122) //small letter
      {                 
      character=character-32;
      printf("%c",character);
                        }
      else if (character>=65 && character<=90) //capital
      {
           printf("%c",character);
       }
      
      getch();
      }
      
