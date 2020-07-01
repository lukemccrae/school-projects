/**
 * Program Name:	cis6Summer2020LukeMcCraeHw3Ex1.c
 * Discussion:		HW #1
 * Written By:		LukeM
 * Due Date:		06/23
 */


/**
* Program Name: cis6Hw2FunEx1.c
* Discussion: Formatted Outputs
*/
#include <stdio.h>
#include <stdlib.h>

int displayClassInfoYourName() {
    // return "LukeM";
    return 0;
}

int extract1Digit() {
    int digit1 = 0;
    return digit1;
}
void extractDigit1LukeM(runNum) {
   int iVar;
   double dVar;
   printf("  Enter a floating-point: ");

   scanf(" %lf", &dVar);

   iVar = dVar;

   printf(dVar > 0 ? "\n  %lf is a positive value!\n\n" : "%lf is a non-positive value!", dVar);

   printf("  The integral portion of %lf is %i!\n\n", dVar, iVar);

   printf("After the function extractDigit1LukeM() finished and returned:\n");

   int ones = abs(iVar % 10);
   int tens = abs(iVar / 10 % 10);

   runNum == 0 ? printf("  1-digit : %i\n\n", ones) : printf("  10-digit : %i\n\n", tens);

   runNum == 0 ? printf("Calling extractDigit1LukeM()\n\n") : exit(0);

   runNum == 0 ? extractDigit1LukeM(1) : exit(0);
}

int main() {
   int oneDigit = extract1Digit();
   
   printf("%c", displayClassInfoYourName());

   printf("CIS 6 – Introduction to C Programming\n");
   printf("Laney College\n");
   printf("LukeM\n\n");

   printf("Assignment Information --\n");
   printf("  Assignment Number:  Homework 3,\n");
   printf("                      Coding Assignment -- Exercise #1\n");
   printf("  Written by:         LukeM\n");
   printf("  Submitted Date:     2020/06/29\n\n");

   printf("Calling extractDigit1LukeM()\n");
   extractDigit1LukeM(0);
   return 0;
}

/* PRPGRAM OUTPUT

Hello

*/

/* ISSUES 

*/