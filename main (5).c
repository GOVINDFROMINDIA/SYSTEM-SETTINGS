#include <stdio.h>
#include <stdlib.h>
  
int main()
{int choice;
printf("Enter the choice 1.SHUTDOWN\n 2.LOGOFF\n 3.RESTART\n");
scanf("%d",&choice);
switch(choice)
{case 1:
  system("c:\\windows\\system32\\shutdown /s");
  break;
 case 2:
  system("c:\\windows\\system32\\shutdown /l");
  break;
 case 3:
  system("c:\\windows\\system32\\shutdown /r");
  break;
 default:printf("INVALID CHOICE");
}
  return 0;
}