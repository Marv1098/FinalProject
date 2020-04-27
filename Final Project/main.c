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
      else if (strcmp(verb, "give") == 0)
      {
         executeGive(noun);
      }
      else if ((strcmp(verb, "ask") == 0) || (strcmp(verb, "a") == 0))
      {
         executeAsk(noun);
      }
      else if ((strcmp(verb, "inventory") == 0) || (strcmp(verb, "i") == 0))
      {
         executeInventory();
      }
       else if ((strcmp(verb, "help") == 0) || (strcmp(verb, "h") == 0))
      {
         printf("Help Command Actions: 'q'uit, 'l'ook, go, 'a'sk, 'i'nventory, 'd'rop, give, get\n");
         printf("Help Command: look around, go north\n");
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
   printf("You are going on a quest and along the way you will be challenged.\n");
   printf("For help during your quest type in help.\n\n");
   executeLook("around");
   while (getInput() && parseAndExecute());
   printf("\nBye!\n");
   return 0;
}
