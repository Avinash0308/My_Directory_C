/* Tower of hanoi is a simple aptitude testing game. 
   In this game there is total of 3 rods and n number of disks and we have to arrange disks in manner that no small disk get overlaped by bigger disks and all disks are shifted one by one to the last rod   */
#include<stdio.h>
void towers (int, char, char, char);
int main()
{
   int num;
   printf("Enter the number of disks :\n");
   scanf("%d",&num);
   printf("The sequence of move involved in tower of hanoi are :\n");
   towers(num,'a','c','b');
   return 0;
}
void towers(int num,char frompeg,char topeg,char auxpeg)
{
   if (num==1)
   {
      printf("Move disk one from peg %c to peg %c\n", frompeg,topeg);
      return;
   }
   towers(num-1,frompeg,auxpeg,topeg);
   printf("Move disk %d from peg %c to peg %c\n",num,frompeg,topeg);
   towers(num-1,auxpeg,topeg,frompeg);
}
