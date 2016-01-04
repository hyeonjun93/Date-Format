//header function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//initialize variable
int date;
char* prompted(char *s);
char month[2], day[2], year[2];

//main function
int main(void)
{
  char string[11];

  //prompt user for date and save input
  printf("Enter a date\n");
  prompted(string);
  
  //saves values into correct format. If invalid format, then print 'invalid format' and exit program
  if (string[1] == '/' && string[3] == '/' && isdigit(string[0]) && isdigit(string[2]) && isdigit(string[4]) && isdigit(string[5]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "/"));
    strcpy(day, strtok(NULL, "/"));
    strcpy(year, strtok(NULL, "/"));
  }
  else if (string[1] == '/' && string[4] == '/' && isdigit(string[0]) && isdigit(string[2]) && isdigit(string[3]) && isdigit(string[5]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "/"));
    strcpy(day, strtok(NULL, "/"));
    strcpy(year, strtok(NULL, "/"));
  }
  else if (string[2] == '/' && string[4] == '/' && isdigit(string[0]) && isdigit(string[1]) && isdigit(string[3]) && isdigit(string[5]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "/"));
    strcpy(day, strtok(NULL, "/"));
    strcpy(year, strtok(NULL, "/"));
  }
  else if (string[2] == '/' && string[5] == '/' && isdigit(string[0]) && isdigit(string[1]) && isdigit(string[3]) && isdigit(string[4]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "/"));
    strcpy(day, strtok(NULL, "/"));
    strcpy(year, strtok(NULL, "/"));
  }
  else if (string[1] == '-' && string[3] == '-' && isdigit(string[0]) && isdigit(string[2]) && isdigit(string[4]) && isdigit(string[5]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "-"));
    strcpy(day, strtok(NULL, "-"));
    strcpy(year, strtok(NULL, "-"));
  }
  else if (string[1] == '-' && string[4] == '-' && isdigit(string[0]) && isdigit(string[2]) && isdigit(string[3]) && isdigit(string[5]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "-"));
    strcpy(day, strtok(NULL, "-"));
    strcpy(year, strtok(NULL, "-"));
  }
  else if (string[2] == '-' && string[4] == '-' && isdigit(string[0]) && isdigit(string[1]) && isdigit(string[3]) && isdigit(string[5]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "-"));
    strcpy(day, strtok(NULL, "-"));
    strcpy(year, strtok(NULL, "-"));
  }
  else if (string[2] == '-' && string[5] == '-' && isdigit(string[0]) && isdigit(string[1]) && isdigit(string[3]) && isdigit(string[4]) && isdigit(string[6]) && isdigit(string[7]))
  {
    strcpy(month, strtok(string, "-"));
    strcpy(day, strtok(NULL, "-"));
    strcpy(year, strtok(NULL, "-"));
  }
  else
  {
    printf("Invalid format\n");
    exit(0);
  }
  
  date = atoi(month);
  
  //print dates based on each case
  switch(date)
  {
    case 1:
      printf("January ");
      break;
    case 2:
      printf("February ");
      break;
    case 3:
      printf("March ");
      break;
    case 4:
      printf("April ");
      break;
    case 5:
      printf("May ");
      break;
    case 6:
      printf("June ");
      break;
    case 7:
      printf("July ");
      break;
    case 8:
      printf("August ");
      break;
    case 9:
      printf("September ");
      break;
    case 10:
      printf("October ");
      break;
    case 11:
      printf("November ");
      break;
    case 12:
      printf("December ");
      break;
    default:
      printf("Invalid month\n");
      exit(0);
  }
  
  //print day and year
  printf("%s, ", day);
  printf("%s\n", year);

  return 0;
}

//receiving input function
char* prompted(char *s)
{
  scanf("%10s", s);
  return s;
}
