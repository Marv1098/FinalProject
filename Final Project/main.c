#include <stdio.h>
#include <string.h>
#include "location.h"
#include "inventory.h"

static char input[100];

static int getInput()
{
   printf("\n--> ");
   return fgets(input, sizeof(input), stdin) != NULL;
}

static int parseAndExecute()
{
   char *verb = strtok(input, " \n");
   char *noun = strtok(NULL, "\n");
   if (verb != NULL)
   {
      if ((strcmp(verb, "quit") == 0)||(strcmp(verb, "q") == 0))
      {
         return 0;
      }
      else if ((strcmp(verb, "look") == 0) || (strcmp(verb, "l") == 0))
      {
         executeLook(noun);
      }
      else if (strcmp(verb, "go") == 0)
      {
         executeGo(noun);
      }
      else if (strcmp(verb, "get") == 0)
      {
         executeGet(noun);
      }
      else if ((strcmp(verb, "drop") == 0)|| (strcmp(verb, "d") == 0))
      {
         executeDrop(noun);
      }
      else if ((strcmp(verb, "inventory") == 0) || (strcmp(verb, "i") == 0))
      {
         executeInventory();
      }
       else if ((strcmp(verb, "help") == 0) || (strcmp(verb, "h") == 0))
      {
         printf("Help Command Actions: 'q'uit, 'l'ook, go, 'i'nventory, 'd'rop, get\n");
         printf("Help Command: look around, go north, get gun, inventory\n");
      }
      else
      {
         printf("I don't know how to '%s'.\n", verb);
      }
   }
   return 1;
}

int main()
{
   printf("Welcome to the CMPSC 473 Text Adventure.\n");
   printf("You are a special forces soldier on a mission to save the world from evil\n");
   printf("Along the way you will be challenged & you will need to bring your OS knowledge.\n");
   printf("If you fail to stop the evil, the world will fall into chaos\n");
   printf("For help during your quest type in help.\n\n");
   executeLook("around");
   while (getInput() && parseAndExecute());
   printf("\nBye!\n");
   return 0;
}
