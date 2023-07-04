
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void flush (void);
void display (char[], int, double, int, long int, float, float, float, float,
	      float, float, float, float, float, float, char[], char[],
	      char[], char[], float, float, float, float, float, float,
	      float);


struct slip
{
  float total_pay_day_salary, one_day_salary, total_salary, total_day,
    total_sunday, festival_day, work_day, half_day, ta, da, hra, basic_salary,
    ma, pf, insurance, tax, loan, total_ear, total_ded, net_salary;

  char months[10], bank_name[50], name[100], desig[100], depart[100];



  int year, date;
  long int id;
  double account_num;

} b1;
int pin=1234,p;
int
main ()
{
  FILE *fp;

  int month, ch, chh, choice ,result=0;

  char values, c, save_program;
  long int iid;
  b1.total_pay_day_salary = 0;
  b1.one_day_salary = 0;
  b1.total_salary = 0;
  b1.basic_salary = 0;
  b1.loan = 0;
  printf ("\n\n======================PAYROLL SALARY ======================\n\n\n");
printf (" PLEASE ENTER LOGIN PIN :  ");
scanf("%d",&p);

    if(pin==p){
        system ("cls");
  while(1)
  {
           	  system ("cls");

  
  printf
    ("\n\n======================PAYROLL SALARY ======================\n\n\n");
  printf (":::: PLEASE SELECT YOUR PREFERED OPERATION :::: \n\n");
  printf ("1. ** GENERATE SALARY SLIP **\n");
  printf ("2. ** SHOW ALL SALARY SLIP **\n");
  printf ("3. ** SEARCH SALARY SLIP **\n");
  printf ("4. ** EXIT **\n\n");

  printf ("ENTER YOUR CHOICE ::  ");
  scanf ("%d", &choice);
  switch (choice)
    {
    case 1:




    up0:
	  system ("cls");

      printf ("ENTER EMPLOYEE ID(ex:-1000)  :::: ");
      scanf ("%ld", &b1.id);
      flush ();
      printf ("ENTER EMPLOYEE NAME  :::: ");

      fgets (b1.name, sizeof (b1.name), stdin);
    up:
      printf ("** SELECT DEPARTMENT NAME : \n");
      printf ("1. ** COPERATION DEPARTMENT **\n");
      printf ("2. ** MARKETING **\n");
      printf ("3. ** ADMINISTRATION **\n");
      printf ("4. ** INFORMATION TECNOLOGY **\n");
      printf ("5. ** FINANCE ACCOUNT **\n");
      printf ("6. ** SOFTWARE DEVELOPER **\n\n");
      printf ("7. ** DEPARTMENT NAME NOT AVAILABLE **\n\n");

      scanf ("%d", &ch);
     
     	  system ("cls");
 switch (ch)
    
	{
	case 1:
	up1:
	  strcpy (b1.depart, "COPERATION DEPARTMENT");

	  printf ("** SELECT DESIGNATION NAME : \n");
	  printf ("1. ** DEPUTY REGISTAR / AO **\n");
	  printf ("2. ** ASSISTANT REGISTAR **\n");
	  printf ("3. ** SENIOR INSPECTOR **\n");
	  printf ("4. ** JUNIOR INSPECTOR **\n");
	  printf ("5. ** OFFICE SUBORDINATE **\n");



	  scanf ("%d", &chh);
	  	  system ("cls");
switch (chh)
	    {
	    case 1:
	      strcpy (b1.desig, "DEPUTY REGISTAR\n");

	      b1.basic_salary = 45000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      else if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 2:
	      strcpy (b1.desig, "ASSISTANT REGISTAR\n");
	      b1.basic_salary = 40000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 3:
	      strcpy (b1.desig, "SENIOR INSPECTOR\n");
	      b1.basic_salary = 40000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 4:
	      strcpy (b1.desig, "JUNIOR INSPECTOR\n");
	      b1.basic_salary = 38000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 5:
	      strcpy (b1.desig, "OFFICE SUBORDINATE\n");
	      b1.basic_salary = 35000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    default:	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	      goto up1;

	    }
	  break;



	case 2:
	up2:
	  strcpy (b1.depart, "MARKETING\n");
	  printf ("** SELECT DESIGNATION NAME : \n");
	  printf ("1. ** MANAGER **\n");
	  printf ("2. ** GENERAL MANAGER **\n");
	  printf ("3. ** ASSISTANT MANAGER **\n");
	  printf ("4. ** JUNIOR INSPECTOR **\n");
	  printf ("5. ** OFFICE SUBORDINATE **\n\n");


	  scanf ("%d", &chh);
		  system ("cls");
  switch (chh)
	    {
	    case 1:
	      strcpy (b1.desig, "MANAGER\n");
	      b1.basic_salary = 55000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 2:
	      strcpy (b1.desig, "GENERAL MANAGER\n");
	      b1.basic_salary = 52000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 3:
	      strcpy (b1.desig, "ASSISTANT MANAGER\n");
	      b1.basic_salary = 50000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 4:
	      strcpy (b1.desig, "JUNIOR INSPECTOR\n");

	      b1.basic_salary = 45000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 5:
	      strcpy (b1.desig, "OFFICE SUBORDINATE\n");

	      b1.basic_salary = 40000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    default:	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	      goto up2;

	    }


	  break;

	case 3:
	up3:
	  strcpy (b1.depart, "ADMINISTRATION\n");

	  printf ("** SELECT DESIGNATION NAME : \n");
	  printf ("1. ** MANAGER (ADMIN)**\n");
	  printf ("2. ** GENERAL MANAGER **\n");
	  printf ("3. ** ASSISTANT MANAGER **\n");
	  printf ("4. ** JUNIOR OFFICER **\n");
	  printf ("5. ** ASSISTANT OFFICER**\n\n");


	  scanf ("%d", &chh);
	  	  system ("cls");
switch (chh)
	    {
	    case 1:
	      strcpy (b1.desig, " MANAGER (ADMIN)\n");

	      b1.basic_salary = 65000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 2:
	      strcpy (b1.desig, " GENERAL MANAGER\n");

	      b1.basic_salary = 60000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 3:
	      strcpy (b1.desig, "ASSISTANT MANAGER\n");

	      b1.basic_salary = 58000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 4:
	      strcpy (b1.desig, "ASSISTANT OFFICER\n");
	      b1.basic_salary = 48000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 5:
	      strcpy (b1.desig, "OFFICE SUBORDINATE\n");
	      b1.basic_salary = 45000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;


	    default:	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	      goto up3;
	    }
	  break;

	case 4:
	up4:
	  strcpy (b1.depart, "INFORMATION TECNOLOGY\n");
	  printf ("** SELECT DESIGNATION NAME : \n");
	  printf ("1. ** MANAGER (IT) **\n");
	  printf ("2. ** GENERAL MANAGER (IT) **\n");
	  printf ("3. ** ASSISTANT MANAGER (IT) **\n");
	  printf ("4. ** JUNIOR OFFICER **\n");
	  printf ("5. ** ASSISTANT OFFICER**\n\n");
	  scanf ("%d", &chh);
	 	  system ("cls");
 switch (chh)
	    {
	    case 1:
	      strcpy (b1.desig, " MANAGER (IT)\n");

	      b1.basic_salary = 75000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 2:
	      strcpy (b1.desig, "GENERAL MANAGER(IT)\n");

	      b1.basic_salary = 70000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 3:
	      strcpy (b1.desig, "ASSISTANT MANAGER (IT)\n");

	      b1.basic_salary = 68000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 4:
	      strcpy (b1.desig, "JUNIOR OFFICER\n");

	      b1.basic_salary = 60000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 5:
	      strcpy (b1.desig, "ASSISTANT OFFICER\n");
	      b1.basic_salary = 55000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    default:	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	      goto up4;

	    }
	  break;

	case 5:
	up5:
	  strcpy (b1.depart, "FINANCE ACCOUNT\n");
	  printf ("** SELECT DESIGNATION NAME : \n");
	  printf ("1. ** MANAGER (ACCOUNT) **\n");
	  printf ("2. ** GENERAL MANAGER **\n");
	  printf ("3. ** ASSISTANT MANAGER **\n");
	  printf ("4. ** JUNIOR OFFICER **\n");
	  printf ("5. ** ASSISTANT OFFICER**\n");

	  scanf ("%d", &chh);
	 	  system ("cls");
 switch (chh)
	    {
	    case 1:
	      strcpy (b1.desig, "MANAGER (ACCOUNT)\n");

	      b1.basic_salary = 75000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 2:
	      strcpy (b1.desig, "GENERAL MANAGER\n");

	      b1.basic_salary = 70000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 3:
	      strcpy (b1.desig, "ASSISTANT MANAGER\n");

	      b1.basic_salary = 68000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 4:
	      strcpy (b1.desig, "JUNIOR OFFICER\n");

	      b1.basic_salary = 60000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 5:
	      strcpy (b1.desig, "ASSISTANT OFFICER\n");

	      b1.basic_salary = 55000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    default:	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	      goto up5;

	    }

	  break;

	case 6:
	up6:
	  strcpy (b1.depart, "SOFTWARE DEPARTMENT\n");

	  printf ("** SELECT DESIGNATION NAME : \n");
	  printf ("1. ** DEPARTMENT MANAGER (ST) **\n");
	  printf ("2. ** GENERAL MANAGER (ST) **\n");
	  printf ("3. ** SENIOR SOFTWARE DEVELOPER **\n");
	  printf ("4. ** JUNIOR SOFTWARE DEVELOPER **\n");
	  printf ("5. ** ASSISTANT OFFICER**\n");

	  scanf ("%d", &chh);
	 	  system ("cls");
 switch (chh)
	    {
	    case 1:
	      strcpy (b1.desig, "DEPARTMENT MANAGER (ST)\n");

	      b1.basic_salary = 85000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 2:
	      strcpy (b1.desig, "GENERAL MANAGER (ST)\n");

	      b1.basic_salary = 80000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    case 3:
	      strcpy (b1.desig, "SENIOR SOFTWARE DEVELOPER\n");

	      b1.basic_salary = 78000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;

		}
	      break;
	    case 4:
	      strcpy (b1.desig, "JUNIOR SOFTWARE DEVELOPER\n");

	      b1.basic_salary = 75000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;
	    case 5:
	      strcpy (b1.desig, "ASSISTANT OFFICER\n");

	      b1.basic_salary = 55000;
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	      break;

	    default:	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	      goto up6;

	    }
	case 7:
	  flush ();
	  printf ("ENTER DEPARTMENT NAME :::: ");
	  fgets (b1.depart, sizeof (b1.depart), stdin);
	  printf ("ENTER DESIGNATION NAME :::: ");
	  fgets (b1.desig, sizeof (b1.desig), stdin);

	  printf ("ENTER BASIC SALARY :::: ");
	  scanf ("%f", &b1.basic_salary);
	  b1.da = 17;
	  b1.hra = 24;
	  b1.ma = 10;
	  b1.pf = 10;
	  b1.ta = 20;
	  b1.insurance = 5;
	  printf ("\n****  DA (DEARNESS ALLOWANCE )    ****  %.f%% ",
		  b1.da);
	  printf ("\n****  HRA (HOUSE RENT ALLOWANCE ) ****  %.f%% ",
		  b1.hra);
	  printf ("\n****  TA (TRVELLING ALLOWANCE )   ****  %.f%% ",
		  b1.ta);
	  printf ("\n****  MA (MEDICAL ALLOWANCE  )    ****  %.f%% ",
		  b1.ma);
	  printf ("\n****  PF (PROVIDENT FUND )        ****  %.f%% ",
		  b1.pf);
	  printf
	         ("\n****    INSURANCE                 ****  %.f%% ",
	     b1.insurance);

	  printf
	    ("\n****   DO YOU WANT TO  CHANGE THIS VALUE  (ENTER YES :- Y , NO :- N)****   ");
	  flush ();
	  scanf ("%c", &values);
	  if (values == 'y' || values == 'Y')
	    {
	      printf
		("\n**** ENTER DA (DEARNESS ALLOWANCE PERCENTAGE) ****  ");
	      scanf ("%f", &b1.da);

	      printf
		("\n**** ENTER HRA (HOUSE RENT ALLOWANCE PERCENTAGE) ****  ");
	      scanf ("%f", &b1.hra);
	      flush ();
	      printf
		("\n**** ENTER TA (TRVELLING ALLOWANCE PERCENTAGE) ****  ");
	      scanf ("%f", &b1.ta);

	      printf
		("\n**** ENTER MA (MEDICAL ALLOWANCE PERCENTAGE ) ****  ");
	      scanf ("%f", &b1.ma);

	      printf ("\n**** ENTER PF (PROVIDENT FUND PERCENTAGE) ****  ");
	      scanf ("%f", &b1.pf);

	      printf ("\n**** ENTER  ( INSURANCE PERCENTAGE) ****  ");
	      scanf ("%f", &b1.insurance);


	      printf ("\n**** ENTER  ( LOAN AMOUNT ) ****  ");
	      scanf ("%f", &b1.loan);

	  system ("cls");


	      b1.da = b1.basic_salary * b1.da / 100;
	      b1.hra = b1.basic_salary * b1.hra / 100;
	      b1.ta = b1.basic_salary * b1.ta / 100;
	      b1.ma = b1.basic_salary * b1.ma / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * b1.pf / 100;
	      b1.insurance = b1.basic_salary * b1.insurance / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}

	    }
	  else
	    {
	      b1.da = b1.basic_salary * 17 / 100;
	      b1.hra = b1.basic_salary * 24 / 100;
	      b1.ta = b1.basic_salary * 20 / 100;
	      b1.ma = b1.basic_salary * 10 / 100;
	      b1.total_ear = b1.ta + b1.da + b1.hra + b1.basic_salary + b1.ma;
	      b1.pf = b1.basic_salary * 10 / 100;
	      b1.insurance = b1.basic_salary * 5 / 100;
	      if (b1.basic_salary > 250000 && b1.basic_salary < 500000)
		{
		  b1.tax = b1.basic_salary * 5 / 100;
		}
	      if (b1.basic_salary > 500000 && b1.basic_salary < 1000000)
		{
		  b1.tax = b1.basic_salary * 20 / 100;
		}
	    }
	  break;


	default:	      	  system ("cls");

	  printf ("**** INVALID SELECTION ****\n");
	  flush ();
	  printf ("**** PLEAESE SELECT RIGHT OPTIN ****\n");
	  goto up;
	}
      printf ("\nENTER CURRENT YEAR : ");
      scanf ("%d", &b1.year);
    up7:
      printf ("1. ** JANUARY **\n");
      printf ("2. ** FEBRUARY **\n");
      printf ("3. ** MARCH **\n");
      printf ("4. ** APRIL **\n");
      printf ("5. ** MAY **\n");
      printf ("6. ** JUNE **\n");
      printf ("7. ** JULY **\n");
      printf ("8. ** AUGUST **\n");
      printf ("9. ** SEPTEMBER **\n");
      printf ("10. ** OCTOBER **\n");
      printf ("11. ** NOVEMBER **\n");
      printf ("12. ** DECEMEBER **\n");
      if (b1.year == 2022)
	{
	  printf ("**** SELECT MONTH ****\n");

	  scanf ("%d", &month);

	  system ("cls");
	  switch (month)
	    {
	    case 1:

	      strcpy (b1.months, "JANUARY");
	      b1.total_day = 31;
	      b1.total_sunday = 5;
	      b1.festival_day = 1;
	      break;
	    case 2:
	      strcpy (b1.months, "FEBRUARY");
	      b1.total_day = 28;
	      b1.total_sunday = 4;
	      b1.festival_day = 1;
	      break;
	    case 3:
	      strcpy (b1.months, "MARCH");
	      b1.total_day = 31;
	      b1.total_sunday = 4;
	      b1.festival_day = 2;
	      break;
	    case 4:
	      strcpy (b1.months, "APRIL");
	      b1.total_day = 30;
	      b1.total_sunday = 4;
	      b1.festival_day = 3;
	      break;
	    case 5:
	      strcpy (b1.months, "MAY");
	      b1.total_day = 31;
	      b1.total_sunday = 5;
	      b1.festival_day = 2;
	      break;
	    case 6:
	      strcpy (b1.months, "JUNE");
	      b1.total_day = 30;
	      b1.total_sunday = 4;
	      b1.festival_day = 0;
	      break;
	    case 7:
	      strcpy (b1.months, "JULY");
	      b1.total_day = 31;
	      b1.total_sunday = 5;
	      b1.festival_day = 0;
	      break;
	    case 8:
	      strcpy (b1.months, "AUGUST");
	      b1.total_day = 31;
	      b1.total_sunday = 4;
	      b1.festival_day = 4;
	      break;
	    case 9:
	      strcpy (b1.months, "SEPTEMBER");
	      b1.total_day = 30;
	      b1.total_sunday = 4;
	      b1.festival_day = 0;
	      break;
	    case 10:
	      strcpy (b1.months, "OCTOBER");
	      b1.total_day = 31;
	      b1.total_sunday = 5;
	      b1.festival_day = 2;
	    case 11:
	      strcpy (b1.months, "NOVEMBER");
	      b1.total_day = 30;
	      b1.total_sunday = 4;
	      b1.festival_day = 1;
	      break;
	    case 12:
	      strcpy (b1.months, "DECEMEBER");

	      b1.total_day = 31;
	      b1.total_sunday = 4;
	      b1.festival_day = 0;
	      break;


	    default:
	    	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTION ****\n");

	      goto up7;
	    }
	}
      else
	{
	    up8:
	  printf ("**** SELECT MONTH NAME ****\n");
	  flush ();
	  	  scanf ("%d", &month);

switch (month)
	    {
	  case 1:

	      strcpy (b1.months, "JANUARY");
	      b1.total_day = 31;
	     
	      break;
	    case 2:
	      strcpy (b1.months, "FEBRUARY");
	      if(b1.year % 400 ==0)
	      {
	      b1.total_day = 29;
	      }
	       else if(b1.year % 100 ==0)
	      {
	      b1.total_day = 29;
	      }
	       if(b1.year % 4 ==0)
	      {
	      b1.total_day = 29;
	      }
	       else
	      {
	      b1.total_day = 28;
	      }
	      break;
	    case 3:
	      strcpy (b1.months, "MARCH");
	      b1.total_day = 31;
	     
	      break;
	    case 4:
	      strcpy (b1.months, "APRIL");
	      b1.total_day = 30;
	     
	      break;
	    case 5:
	      strcpy (b1.months, "MAY");
	      b1.total_day = 31;
	    
	      break;
	    case 6:
	      strcpy (b1.months, "JUNE");
	      b1.total_day = 30;
	    
	      break;
	    case 7:
	      strcpy (b1.months, "JULY");
	      b1.total_day = 31;
	     
	      break;
	    case 8:
	      strcpy (b1.months, "AUGUST");
	      b1.total_day = 31;
	    
	      break;
	    case 9:
	      strcpy (b1.months, "SEPTEMBER");
	      b1.total_day = 30;
	   
	      break;
	    case 10:
	      strcpy (b1.months, "OCTOBER");
	      b1.total_day = 31;
	     
	    case 11:
	      strcpy (b1.months, "NOVEMBER");
	      b1.total_day = 30;
	     
	      break;
	    case 12:
	      strcpy (b1.months, "DECEMEBER");

	      b1.total_day = 31;
	    
	      break;


	    default:
	     	      	  system ("cls");

	      printf ("**** INVALID SELECTION ****\n");
	      printf ("**** PLEAESE SELECT RIGHT OPTION ****\n");
	    
	        goto up8;
	    }
	 
	  printf ("**** ENTER TOTAL SUNDAY ****\n");
	  scanf ("%f", &b1.total_sunday);
	  printf ("**** ENTER TOTAL FESTIVAL DAYS ****\n");
	  scanf ("%f", &b1.festival_day);

	}


      printf ("ENTER TOTAL WORKED DAYS :::: ");
      scanf ("%f", &b1.work_day);
      printf ("\nENTER TOTAL HALF DAYS :::: ");
      scanf ("%f", &b1.half_day);
            system ("cls");

      printf
	("\n\t\t\t\t\t\t    **** ENTER PAYMENT DETAILS ****       \t\t\t\t\t\t \n\n\n");
      flush ();
      printf ("ENTER PAYMENT TRANSFER DATE (1 to 31) :::: ");
      scanf ("%d", &b1.date);
      flush ();
      printf ("ENTER BANK NAME :::: ");
      fgets (b1.bank_name, sizeof (b1.bank_name), stdin);
      printf ("ENTER BANK ACCOUNT NUMBER(MIN. 10 NUMBER ) :::: ");
      scanf ("%lf", &b1.account_num);


      system ("cls");

      display (b1.bank_name, b1.date, b1.account_num, b1.year, b1.id,
	       b1.total_day, b1.total_sunday, b1.festival_day,
	       b1.basic_salary, b1.da, b1.hra, b1.ma, b1.ta, b1.half_day,
	       b1.work_day, b1.months, b1.desig, b1.depart, b1.name, b1.pf,
	       b1.insurance, b1.tax, b1.loan, b1.total_ear, b1.total_ded,
	       b1.net_salary);

      flush ();
      printf
	("\n\n\n\t*****  DO YOU WANT TO SAVE THIS  SALARY SLIP *****  ENTER :YES:- 'Y'\n\n");
      scanf (" %c", &save_program);
      if (save_program == 'y' || save_program == 'Y')
	{
	  fp = fopen ("PAYROLL_SLIP.txt", "ab+");
	  fwrite (&b1, sizeof (struct slip), 1, fp);
	  if (fwrite != 0)
	    {
	      printf
		("\n\n====================== SUCCESSFULLY SAVED ======================\n\n\n");

	    }
	  else
	    {
	      printf
		("\n\n====================== ERROR SAVING ======================\n\n\n");

	    }

	  fclose (fp);
	}
      else
	{
	  exit (0);
	}
      flush ();
      printf
	("\n\n\n\t*****  DO YOU WANT TO CREATE NEW SALARY SLIP *****  ENTER :YES:- 'Y'\n\n");
      printf ("\t*****  DO YOU WANT  EXIT  ***** ENTER :NO :- 'N' \n\n");
      scanf (" %c", &c);
      if (c == 'y' || c == 'Y')
	{
	  system ("cls");

	  goto up0;


	}
      else
	{
	  system ("cls");
	  exit (0);
	}
      break;

    case 2:
      system ("cls");
      fp = fopen ("PAYROLL_SLIP.txt", "rb");
      printf
	("\n\n**************** PREVIOUS SALARY SLIP ****************\n\n\n");
      while (fread (&b1, sizeof (struct slip), 1, fp) > 0)
	{
	  display (b1.bank_name, b1.date, b1.account_num, b1.year, b1.id,
		   b1.total_day, b1.total_sunday, b1.festival_day,
		   b1.basic_salary, b1.da, b1.hra, b1.ma, b1.ta, b1.half_day,
		   b1.work_day, b1.months, b1.desig, b1.depart, b1.name,
		   b1.pf, b1.insurance, b1.tax, b1.loan, b1.total_ear,
		   b1.total_ded, b1.net_salary);

	}
	 system("pause");
      fclose (fp);

      break;
    case 3:
    printf("ENTER THE  EMPLOYEE ID ::: ");
      scanf("%ld",&iid);
     system ("cls");
      fp = fopen ("PAYROLL_SLIP.txt", "rb");
      while(fread (&b1, sizeof (struct slip), 1, fp)>0)
      {

      if(iid==b1.id)
      {
      printf
	("\n\n\t\t**************** PREVIOUS SALARY SLIP ****************\n\n\n");

	  display (b1.bank_name, b1.date, b1.account_num, b1.year, b1.id,
		   b1.total_day, b1.total_sunday, b1.festival_day,
		   b1.basic_salary, b1.da, b1.hra, b1.ma, b1.ta, b1.half_day,
		   b1.work_day, b1.months, b1.desig, b1.depart, b1.name,
		   b1.pf, b1.insurance, b1.tax, b1.loan, b1.total_ear,
		   b1.total_ded, b1.net_salary);
		   

	result=1;
      }
	   system("pause");
	}

    if(result==0)
      {
	   printf
	("\n\n\t\t**************** EMPLOYEE SALARY SLIP NOT FOUND ****************\n\n\n");

      }


      break;
    case 4:
    exit(0);
      break;
      default : printf("\n\n****    PLEAESE SELECT CORRECT OPTION :(   ****\n\n");
    }

}

    }
    else {
         printf ("\n\n====================== YOU ARE ENTER WRONG PIN ======================\n\n\n");

    }
  return 0;
}



void
display (char bank_name[], int date, double account_num, int year,
	 long int id, float total_day, float total_sunday, float festival_day,
	 float basic_salary, float da, float hra, float ta, float ma,
	 float half_day, float work_day, char months[], char desig[],
	 char depart[], char name[], float pf, float insurance, float tax,
	 float loan, float total_ear, float total_ded, float net_salary)
{


  b1.one_day_salary = b1.total_ear / b1.total_day;
  b1.total_pay_day_salary =
    b1.work_day + (b1.half_day / 2) + b1.festival_day + b1.total_sunday;
  b1.total_salary = b1.one_day_salary * b1.total_pay_day_salary;


  b1.total_ded = b1.pf + b1.insurance + b1.tax + b1.loan;
  b1.net_salary = b1.total_salary - b1.total_ded;

  printf
    ("_________________________________________________________________________________________________________________________|\n");
  printf ("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
  printf ("|\t\t\t\t\t    ****  SALARY SLIP ****       \t\t\t\t\t\t |\n");

  printf
    ("|________________________________________________________________________________________________________________________|\n");
  printf ("|\t\t\t |\t\t      |                     |\t\t\t\t\t\t\t |\n");
  printf
    ("| Info@gmail.com         |\t\t      | %d %s %d       \t\t\t\t\t\t\t |\n",
     b1.date, b1.months, b1.year);
  printf
    ("| Call : +91 9687 8585 63|\t\t      |                     |\t\t\t\t\t\t\t |\n");
  printf
    ("|________________________|____________________|_____________________|____________________________________________________|\n");

  printf ("|\t\t\t |\t\t                             \t\t\t\t\t\t\t |\n");

  printf ("|EMPLOYEE ID             |   %ld\n", b1.id);

  printf
    ("|________________________|_______________________________________________________________________________________________|\n");




  printf ("|\t\t\t |\t\t                             \t\t\t\t\t\t\t |\n");

  printf ("|EMPLOYEE NAME           |   %s", b1.name);

  printf
    ("|________________________|_______________________________________________________________________________________________|\n");

  printf ("|\t\t\t |\t\t                             \t\t\t\t\t\t\t |\n");
  printf ("|DEPARTMENT              |   %s\n", b1.depart);
  printf
    ("|________________________|_______________________________________________________________________________________________|\n");
  printf ("|\t\t\t |\t\t                             \t\t\t\t\t\t\t |\n");
  printf ("|EMPLOYEE DESIGNATION    |   %s", b1.desig);
  printf
    ("|________________________|_______________________________________________________________________________________________|\n");

  printf
    ("|________________________________________________________________________________________________________________________|\n");
  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|TOTAL DAYS              |   %g\t\t\t   ", b1.total_day);

  printf ("|TOTAL WORKED DAYS       |   %g\n", b1.work_day);
  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");
  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|TOTAL HALF DAYS         |   %g\t\t\t   ", b1.half_day);

  printf ("|TOTAL FESTIVAL HOLIDAYS |   %g\n", b1.festival_day);
  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|TOTAL SUNDAYS           |   %g\t\t\t   ", b1.total_sunday);

  printf ("|TOTAL SALARY PAY DAYS   |   %g\n", b1.total_pay_day_salary);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf
    ("|________________________________________________________________________________________________________________________|\n");
  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|DESCRIPTION             |   EARNING\t\t   ");

  printf ("|DESCRIPTION\t\t    |     DEDUCTION\n");

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|BASIC SALARY            |   %.2f\t\t\t   ", b1.basic_salary);

  printf ("INSURANCE  \t\t      %.2f\n", b1.insurance);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|DEARNESS ALLOWANCE      |   %.2f\t\t       ", b1.da);

  printf ("PROVIDENT FUND  \t         %.2f\n", b1.pf);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|HOUSE RENT  ALLOWANCE   |   %.2f\t\t\t   ", b1.hra);

  printf ("TAX  \t\t         %.2f\n", b1.tax);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|TRVELLING ALLOWANCE     |   %.2f\t\t\t   ", b1.ta);

  printf ("LOAN    \t\t         %.2f\n", b1.loan);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|MEDICAL ALLOWANCE       |   %.2f\t\t\t   ", b1.ma);

  printf ("       \t\t           \n");

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|TOTAL EARNING           |   %.2f\t\t\t   ", b1.total_ear);

  printf ("TOTAL DEDUCTION  \t\t  %.2f    \n", b1.total_ded);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t                             \t\t\t\t\t\t\t |\n");

  printf ("|NET SALARY              |   %.2f Rs\n", b1.net_salary);


  printf
    ("|________________________|_______________________________________________________________________________________________|\n");

  printf ("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
  printf ("|\t\t\t\t\t    ****  PAYMENT DETAILS ****       \t\t\t\t\t\t |\n");

  printf
    ("|________________________|_______________________________________________________________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");

  printf ("|DATE OF TRANSFER        |   %d %s %d\t    ", b1.date, b1.months,
	  b1.year);

  printf ("ACCOUNT HOLDER NAME  \t       %s", b1.name);

  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

  printf ("|\t\t\t |\t\t\t   |            \t    |\t\t\t\t\t\t |\n");
  printf (" ACCOUNT NUMBER    \t\t%.lf\t \t", b1.account_num);

  printf ("BANK NAME                  %s", b1.bank_name);


  printf
    ("|________________________|_________________________|________________________|____________________________________________|\n");

}



void
flush (void)			//buffer value cls karne ka function
{
  int c;
  do
    {
      c = getchar ();

    }
  while (c != '\n' && c != EOF);

}
