#include <stdio.h>  //file input output
#include <string.h> //string manipulation
main()
{
	FILE *f; //file initializer
	typedef char string[128]; //typecast
	string directory[16], adds[1]; //string arrays
	char*search[256]; //array
	char s[1000]; //array
	int tfm, x, r, i, number, mm, confirminput, del, add; //constants
	//start of commands
	do
	{
		system("cls");
		printf(
				"String Manipulator\n1-Save strings\n2-View Strings\n3-Delete Strings\n4-Add new string\n5-Search \n6-(BONUS!)Use Text File\n7-Quit\n");
		scanf("%d", &mm); //main menu input

		if (mm == 1) //start of input
		{
			do
			{
				system("cls");
				printf("Input number of strings (Max 16)\n");
				scanf("%d", &number);
				if (number <= 16 && number > 0)
				{
					system("cls");
					printf("Input %d words/phrases\n", number); //input number of words to be input

					for (i = 0; i < number + 1; i++)
					{
						gets(directory[i]);
					} //loop for input of words based on value of number

					confirminput = 1; //variable assignment
					system("cls");
					printf("\nStrings saved.\n");

				} //end of input function

				else
				{ //error message
					system("cls");
					printf("Invalid Choice\n");
				}
			} while (number < 1 || number > 16);

		} //end of mm==1

		else if (mm == 2) //start of view stuff
		{
			if (confirminput == 1)
			{
				system("cls");
				printf("String contents:\n"); //loop used to show stuff
				for (i = 1; i < number + 1; i++)
				{
					printf("%d-\t", i);
					puts(directory[i]);
				}
			} //end of show stuff
			else
			{ //error message
				system("cls");
				printf("No data yet!");
			}
		} //end of mm==2

		else if (mm == 3)
		{   //start of delete stuff
			if (confirminput == 1)
			{
				system("cls");
				printf("Enter string index:\n");
				//start of show stuff command
				printf("Here's what You've typed so Far\n");
				for (i = 1; i < number + 1; i++)
				{
					printf("%d-\t", i);
					puts(directory[i]);
				}
				//end of show stuff command
				scanf("%d", &del);
				//input directory number to delete
				if (del > number || del < 1)
				{
					//error message if selection is not within database
					system("cls");
					printf("\nError: Selection nonexistent\n");
				}
				//start of delete command
				else
				{
					strcpy(directory[del], remove);

					for (i = del; i < number; i++)
					{
						strcpy(directory[i], directory[i + 1]);
					}
					system("cls");
					printf("Deletion Successful\n");
					number = number - 1;
					//end of delete command
				}   //end of else
			}   //end of number>0
			else
			{   //error message
				system("cls");
				printf("\nNothing to delete");
			}
		}   //end of else if mm==3

		else if (mm == 4)
		{   //start of add stuff
			fflush(stdin);   //used to clear input buffer
					if(confirminput!=1)
					{
						system("cls");
						printf("\nNo user input");
					}
					else if(confirminput==1&&number<17)
					{ //start of add comand
						system("cls");
						printf("Input what would you like to add\n");
						gets(adds);//gets one string
						strcpy(directory[number+1],adds);//copies string into directory
						number=number+1;//adds to total number of strings
						printf("Success");//message
					}
					else if(number>15&&confirminput==1)
					{ //max strings error message
						system("cls");
						printf("You have reached the maximum capacity");
					}
				} //end of mm==4

				else if(mm==5)
				{ //start of search stuff
					fflush(stdin);//clear buffer
					if(confirminput==1)
					{ //start of search command
						system("cls");
						printf("Input stuff you would like to search (Case sensitive)\n");
						gets(search);//input string
						for(i=0;i<number+1;i++)
						{ //loops through all strings in directory
							x=strcmprintf(directory[i],search);
							if(x==0)
							{ //condition if result of strcmp is 0
								printf("We have found a match at %d-",i);
								puts(directory[i]);
							}
						}
						if(x!=0)
						{ //shows when strcmp is -1
							system("cls");
							printf("No results found");
						}
					}
					else
					{ //error message
						system("cls");
						printf("You haven't input anything yet!");
					}
				} //end of mm==5

				else if(mm==6)
				{ //start of read text file
					system("cls");
					printf("1-Read Text File\n2-Edit Text File\n");
					scanf("%d",&tfm);
					if(tfm==1)
					{
						system("cls");
						f = fopen( "dlsu.txt" , "r"); //f is file , dlsu.txt is file name, r is a read function
						if (f)
						{
							while (fscanf(f, "%s", s)!=EOF) //inputs strings in text into string array until end of file
							printf("%s ",s);
						}
					}
					else if(tfm==2)
					{
						fflush(stdin);
						system("cls");
						f = fopen( "dlsu.txt" , "w");
						puts("Input What you like (Press Enter to Confirm)");
						gets(add);
						fprintf(f,"%s",add);
						fclose(f);
					}
				} //end of mm==6

				else if(mm==7)
				{ //goodbye message
					system("cls");
					printf("Goodbye!");
				} //end of mm==7

				else
				{ //error message
					system("cls");
					printf("Invalid Option");
				}

		getch(); //executes after each sub menu

	}

	while (mm != 7); //program ends when mm=7

}

//be sure to place the text file and the .c file together in a folder
