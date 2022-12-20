#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 512

int numerological_value(char *str) {
  // Initialize a lookup table for the numerical values of the letters
  int values[26] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Initialize a variable to store the numerological value
  int sum = 0;

  // Iterate over the characters in the string
  for (int i = 0; i < strlen(str); i++) {
    // Convert the character to lowercase
    char c = tolower(str[i]);

    // Check if the character is a letter
    if (isalpha(c)) {
      // Add the numerical value of the letter to the sum
      sum += values[c - 'a'];
    }
  }

  // Return the numerological value
  return sum;
}

int main() {
  // Prompt the user to enter a word or phrase
  printf("Enter a word or phrase: ");

  // Read the input from the user
  char input[MAX_INPUT_LENGTH];
  fgets(input, MAX_INPUT_LENGTH, stdin);

  // Calculate the numerological value of the input
  int value = numerological_value(input);

  // Print the result to the console
  printf("The numerological value of %s is %d\n", input, value);

  return 0;
}
