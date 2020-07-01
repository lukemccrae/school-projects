/**
 * Program Name:	cis6Summer2020LukeMcCraeHw1Ex1.c
 * Discussion:		HW #1
 * Written By:		Luke McCrae
 * Due Date:		06/23
 */


/**
* Program Name: cis6Hw2FunEx1.c
* Discussion: Formatted Outputs
*/
#include <stdio.h>
int main() {
   char cVar;
   int iVar;
   double dVar;

   // printf("12345678901234567890\n");
   
   // printf("%d %c %f\n", 23, 'z', 4.1);
   // printf("%c %d %f\n", 23, 'z', 4.1);

   // printf(“\n”);

   cVar = 'z';

   iVar = 23;

   dVar = 4.1;

   // printf("%8c%08d%10.6f\n", cVar, iVar, dVar);

   // printf("%-8d%8c\t%10f\n", iVar, cVar, dVar);
   printf("Class Information --\n");
   printf("  CIS 6 – Introduction to Programming (Using C)\n");
   printf("  Laney College\n\n");

   printf("Assignment Information --\n");
   printf("  Assignment Number:  Homework 2,\n");
   printf("                      Coding Assignment\nExercise #1\n");
   printf("  Written by:         Luke McCrae\n");
   printf("  Due Date:           2020/06/29\n\n\n\n");
   printf("1234567890123456789012345678901234567890\n");
   printf("      %i       %c           %f\n",iVar, cVar, dVar);
   printf("      %c       %d           %f\n",iVar, cVar, dVar);
   printf("      %c       %d           %f\n",cVar, iVar, dVar);
   printf("      %c   %f               %d\n\n",cVar, dVar, iVar);

   printf("      %d       %c           %f\n",iVar, cVar, dVar);
   printf("      %c     %i           %f\n",iVar, cVar, dVar);
   printf("      %c%08d           %.6f\n",cVar, iVar, dVar);
   printf("      %c%015f           %d\n",cVar, dVar, iVar);
   printf("%i      %c           %f\n",iVar, cVar, dVar);
   printf("%c       %d           %f\n",iVar, cVar, dVar);
   printf("%c       %d           %f\n",cVar, iVar, dVar);
   printf("%c    %015f           %d\n",cVar, dVar, iVar);

   scanf("%d", &iVar);

   
   printf("");
   return 0;
}

/* PRPGRAM OUTPUT

Hello

*/

/* ISSUES 

*/