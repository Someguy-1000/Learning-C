/*
This project is intended after completion of the following:
Basic user input
Basic output
Arithmatic operators
*/

#include <stdio.h>
#include <string.h>

int main(){

  /*
  Create an interactive Madlibs clone:
  Have the user input a series of nouns, verbs, adjectives, and adverbs
  Make sure the user is prompted with each (Ex. Enter an adjective)
  Once the user has entered all fields, output the entire Madlibs text
  Make sure the text is deliniated line by line

  Bonus points if you recreate one from the site below - 
  https://www.wordblanks.com/mad-libs/adult/
  */

  char name[30] = "";
  char adjective1[30] = "";
  char noun1[30] = "";
  char verb1[30] = "";
  char adjective2[30] = "";
  char noun2[30] = "";
  char verb2[30] = "";

  printf("Enter a name/proper noun: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) -1] = '\0';

  printf("Enter an adjective: ");
  fgets(adjective1, sizeof(adjective1), stdin);
  adjective1[strlen(adjective1) -1] = '\0';

  printf("Enter a noun: ");
  fgets(noun1, sizeof(noun1), stdin);
  noun1[strlen(noun1) -1] = '\0';

  printf("Enter a present tense verb: ");
  fgets(verb1, sizeof(verb1), stdin);
  verb1[strlen(verb1) -1] = '\0';

  printf("Enter an adjective: ");
  fgets(adjective2, sizeof(adjective2), stdin);
  adjective2[strlen(adjective2) -1] = '\0';

  printf("Enter a noun: ");
  fgets(noun2, sizeof(noun2), stdin);
  noun2[strlen(noun2) -1] = '\0';

  printf("Enter a present tense verb: ");
  fgets(verb2, sizeof(verb2), stdin);
  verb2[strlen(verb2) -1] = '\0';

  printf("I was walking down the street when I ran into %s\n", name);
  printf("He told me about a %s %s he saw yesterday while he was %s\n", adjective1, noun1, verb1);
  printf("I asked them why they didn't use a %s to %s it", noun2, verb2);

  return 0;
}