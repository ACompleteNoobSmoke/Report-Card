#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>


//Header For Project//
int time1(char bank[30])
{
    time_t t;
    srand(time(&t));


    char *days[7];                        char * months[12];                 int days2[12];                    int year = 2018;
    days[0] = "Sunday";                   months[0] = "January";             days2[0] = (rand() % 30) + 1;
    days[1] = "Monday";                   months[1] = "February";            days2[1] = (rand() % 27) + 1;       char *am_pm[2];
    days[2] = "Tuesday";                  months[2] = "March";               days2[2] = (rand()% 30) + 1;        am_pm[0] = "AM";
    days[3] = "Wednesday";                months[3] = "April";               days2[3] = (rand() % 29) + 1;       am_pm[1] = "PM";
    days[4] = "Thursday";                 months[4] = "May";                 days2[4] = (rand()% 30) + 1;
    days[5] = "Friday";                   months[5] = "June";                days2[5] = (rand() % 29) + 1;
    days[6] = "Saturday";                 months[6] = "July";                days2[6] = (rand()% 30) + 1;
                                          months[7] = "August";              days2[7] = (rand()% 30) + 1;
                                          months[8] = "September";           days2[8] = (rand() % 29) + 1;
                                          months[9] = "October";             days2[9] = (rand()% 30) + 1;
                                          months[10] = "November";           days2[10] =(rand() % 29) + 1;
                                          months[11] = "December";           days2[11] =(rand()% 30) + 1;



    int a,b,c,d,e,f;

    a = (rand() % 10) + 1;
    b = (rand() % 6) + 1;
    c = (rand() % 11) + 1;
    d = (rand() % 4) + 1;
    e = (rand() % 8) + 1;
    f = (rand() % 1)+ 1;

    int m = 0;


    printf("\t\t                  %s            \n", bank);
    printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t  ::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t     ::::::::::::::::::::::::::::::::::\n");
    printf("%s %d:%d%d %s", days[b],c,d,e,am_pm[f]);
    putchar('\n');
    putchar('\n');
    printf("\t\t **Please Press \"Enter\" After Each Action**\n\n");

    if(b == 6 || b == 7)
    {
        printf("\n\n\t\t    ***Bank Is Closed On Weekends***\n\t\t\t     ATM Available\n");
        m = 1;
        printf("\n2. Use ATM");
    }
    if(b < 6 && c > 8)
    {
        printf("\n\n\t\t    ***Bank Is Closed At 9:00 PM***\n\t\t\t     ATM Available\n");
        m = 1;
        printf("\n2. Use ATM");
    }
    if(b < 6 && (c<7 && c==11 && f==0))
    {
        printf("\n\n\t\t    ***Bank Is Opens At 8:00 AM***\n\t\t\t   ATM Available\n");
        m = 1;
        printf("\n2. Use ATM");
    }
    if(m == 0)
    {

        printf("\n1. Enter %s\n2. Use ATM", bank);

    }


}

int menu(char bank[30])
{
    system("cls");
    printf("\t\t\t\t   DEBIT CARD\n", bank);
    printf("_______________________________________________________________________________\n\n\n");
    printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
    printf("\n:      1.WITHDRAW     :");printf("                                 :      2.DEPOSIT      :\n");
    printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
    putchar('\n');
    putchar('\n');
    putchar('\n');
    printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
    printf("\n:      3.TRANSFER     :");printf("                                 :   4.BALANCE INQUIRY :\n");
    printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
    putchar('\n');
    putchar('\n');
    putchar('\n');
    printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
    printf("\n:      5.BACK         :");printf("                                 :      6. EXIT        :\n");
    printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");


}



struct info
{
    char fname[40], lname[40];
    char gender;
    char address1[50];
    int pin1;
    char crednum[22], debnum[22];
    char credex[10], debex[10];
    float credit, check, save;
    int credsec, debsec;
};

typedef enum
{
    CC = 1,
    DC,
}card;

typedef enum
{
    Bank = 1,
    ATM,
    Exit
}pick;
int main()
{

    information();
    return 0;
}

int information()
{
    struct info a;
    char bank[30];
    printf("\t\t\tPersonal Information\n\n");
    printf("Enter Bank Name: "); gets(bank);
    printf("Enter First Name: "); gets(a.fname);
    printf("Enter Last Name: "); gets(a.lname);
    printf("Enter Gender (M/F): "); scanf("%c", &a.gender); getchar();
    printf("Enter Pin: "); scanf("%d", &a.pin1); getchar();
    printf("Enter Address: "); gets(a.address1); system("cls");

    printf("\t\t\tCredit Card Information\n\n");
    printf("Enter Card #: "); gets(a.crednum);
    printf("Enter Expire Date (##/##/##): "); gets(a.credex);
    printf("Enter Security Card (###): "); scanf("%d", &a.credsec); getchar();
    printf("Enter Credit Amount: $"); scanf("%f", &a.credit); getchar(); system("cls");

    printf("\t\t\tDebit Card Information\n\n");
    printf("Enter Card #: "); gets(a.debnum);
    printf("Enter Expire Date (##/##/##): "); gets(a.debex);
    printf("Enter Security Card (###): "); scanf("%d", &a.debsec); getchar();
    printf("Enter Check Amount: $"); scanf("%f", &a.check); getchar();
    printf("Enter Savings Amount: $"); scanf("%f", &a.save); getchar(); system("cls");

    bankinfo(a,bank);

    return information;
}

int bankinfo(struct info a, char bank[30], pick b, card c)
{

    again:
    system("cls");
    time1(bank);
    putchar('\n'); putchar('\n');
    printf("\n\nAction: ");scanf("%d", &b); getchar();
    switch(b)
    {
        case(Bank): printf("\n\n***Walks into Bank***"); Sleep(4000); system("cls");
                    printf("Accountant: \"Welcome to %s\"\n",bank);
                    Bank1(a, bank, b);
                    break;



        case(ATM):  printf("\n\n***Walks To ATM***"); Sleep(4000); system("cls");

                    char s;
                    do
                    {
                        s = '\0';

                        printf("Press \"I\" To Insert Card.......\nAction: ");
                        scanf("%c", &s); getchar();
                        if(s != 'I' && s != 'i')
                        {
                             s = '\0';
                        printf("**Card Not Read. Try Again**\n");
                        }
                    }while(s != 'I' && s != 'i');
                    ATM1(a, bank, b);

                    break;

         case(Exit): printf("\n\n%s: \"Screw this I'm going home.........\n\n\"",a.fname); exit(0);

         default:    b = '\0';
                    printf("Action Not Recognized\n");
                    goto again;
                    break;
    }


    return bankinfo;
}

int pin2; int d = 0; int action; float with; float with2; float total; float dep; float checktotal; float savetotal; float trans;

int Bank1(struct info a, char bank[30], pick b, card c)
{

    putchar('\n'); putchar('\n');
    printf("Accountant: \"Please tell me your pin number\"\n\n");
    again2:
    printf("%s: \"", a.fname); scanf("%d", &pin2); getchar();
    if(pin2 != a.pin1)
    {

        d++;
        if(d == 1)
        {
          printf("Accountant: \"Umm....that's doesn't seem to match, please try again!\"\n\n");
          goto again2;
        }
        else if(d == 2)
        {
             printf("Accountant: \"This is getting weird.....try again!\"\n\n");
             goto again2;

        }
        else if(d == 3)
        {
            printf("Accountant: \"GET DA FUCK OUT MOTHERFUCKER!!!!\"\n\n");
            exit(0);
        }

    }else if(pin2 == a.pin1)
    {

        if(d == 1)
        {
          printf("Accountant: \"Hello %s %s\"\n\n", (a.gender == 'M' || a.gender == 'm')?("Mr."):("Mrs."),a.lname);
          printf("Accountant: \"Please wait one moment while I get your information\"\n\n"); Sleep(5000); system("cls");
        }
        else if(d == 2)
        {
             printf("Accountant: \"I was starting to get suspicious there %s %s\"\n\n", (a.gender == 'M' || a.gender == 'm')?("Mr."):("Mrs."),a.lname);
             printf("Accountant: \"Please wait one moment while I get your information\"\n\n"); Sleep(5000); system("cls");
        }
     }
     printf("Accountant: \"What brings you here today?\"\n\n");
     again3:
     printf("1. Credit Card\n2. Debit Card\n\nAction: "); scanf("%d", &c); getchar();
     if(c != CC && c != DC)
     {
         do
         {
             c = '\0';
             printf("Accountant: \"Please say that again\"\n\n");
             printf("1. Credit Card\n2. Debit Card\n\nAction: "); scanf("%d", &c); getchar();

         }while(c != CC && c != DC);
     }
     if(c == CC)
     {
         putchar('\n');
         printf("%s: \"I am here for my Credit Card\"\n\n",a.fname);
         putchar('\n');
         printf("Accountant: \"O.K. are you here to check how much you have?\n\n");
         again4:
         printf("1. Amount\n\nAction: "); scanf("%d", &action); getchar();
         switch(action)
         {
             case(1): action = '\0';
                      printf("%s: \"I am here to check my total amount\"\n\n", a.fname);
                      printf("Accountant: \"O.K. as of today you have a total of $%.2f\"\n\n", a.credit);
                      printf("Accountant: \"Is that all?\"\n");
                      printf("\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                      if(action != 1 && action != 2)
                      {
                          do
                          {
                              action = '\0';
                              printf("Accountant: \"Don't understand, please repeat\"\n\n");
                              printf("\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();

                          }while(action != 1 && action != 2);
                      }
                      if(action == 1)
                      {
                          printf("%s: \"That will be all, thanks\"\n\n",a.fname);
                          printf("Accountant: \"All right. Thank you for visiting %s %s\"\n\n", (a.gender == 'M' || a.gender == 'm')?("Mr."):("Mrs."),a.lname);
                          printf("\n\n\n***Exit Bank***\n\n\n");
                          exit(0);
                      }
                      if(action == 2)
                      {
                          action = '\0';
                          printf("%s: \"No\"\n\n",a.fname);
                          printf("Accountant: \"What else would you like to do?\"\n");
                          printf("\n1. View Debit\n\nAction: "); scanf("%d", &action); getchar();
                          if(action != 1)
                          {


                          do
                          {
                              action = '\0';
                              printf("\n\nAccountant: \"Please repeat that?\"\n\n");
                              printf("\n1. View Debit\n\nAction: "); scanf("%d", &action); getchar();
                          }while(action != 1);
                          }
                          if(action == 1)
                          {
                              printf("%s: \"I would like to view my debit information.\"\n\n", a.fname);
                              printf("Accountant: \"Please give me one moment as I bring up your debit information\"\n\n");
                              Sleep(5000);
                              system("cls");
                              goto dc;
                          }

                      }

                      break;

                default: printf("Accountant: \"Don't understand.....try again.\"\n\n");
                         goto again4;
                         break;
         }
     } else if(c == DC)
     {
         action = '\0';
         putchar('\n');
         printf("%s:\"I am here for my Debit Card\"\n\n",a.fname);
         dc:
         printf("Accountant: \"What would like to do with your debit?\"\n\n");
         printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
         if((action != 1 && action != 2) && (action != 3 && action != 4))
         {


         do
         {
             action = '\0';
             printf("\n\nAccountant: \"Please repeat that\"\n\n");
             printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();

         }while((action != 1 && action != 2) && (action != 3 && action != 4));
         }
         switch(action)
         {
             case(1): action = '\0';
                      printf("%s: \"I would like to withdraw\"\n\n",a.fname);
                      op1:
                      printf("Accountant: \"From which account?\"\n");
                      printf("1. Checking\n2. Savings\n\nAction: "); scanf("%d", &action); getchar();
                      if(action != 1 && action != 2)
                      {
                      do
                      {
                          action = '\0';
                          printf("\n\nAccountant: \"Didn't catch that\"\n\n");
                          printf("1. Checking\n2. Savings\n\nAction: "); scanf("%d", &action); getchar();

                      }while(action != 1 && action != 2);
                      }
                      if(action == 1)
                      {
                          printf("%s: \"I would like to withdraw from my checking account\"\n\n",a.fname);
                          printf("Accountant: \"Please one moment while I bring up your checking account information\"\n");
                          Sleep(5000); system("cls");
                          printf("Accountant: \"You currently have $%.2f in your checking account\"\n\n",a.check);
                          printf("Accountant: \"How much would you like to withdraw?\"\n\n");
                          withd:
                          printf("%s: \"I would like to withdraw $",a.fname); scanf("%f", &with); getchar();
                          if(with > a.check)
                          {
                              with = '\0';
                              printf("Accountant: \"Umm..that seems to be an overdraft please state another amount\"\n\n");
                              goto withd;
                          }
                          total = a.check - with;
                          a.check = total;
                          printf("Accountant: \"One moment please......\"\n\n"); Sleep(5000);
                          printf("Accountant: \"Here is $%.2f that you withdrew, with that it brings your total to $%.2f\n\n",with,a.check);
                          printf("%s: \"Thank you\"\n", a.fname);
                          printf("Accountant: \"Will that be all %s?\"\n\n", (a.gender == 'M' || a.gender == 'm')?("Sir"):("Mam") );
                          printf("\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                          if(action != 1 && action != 2)
                          {
                          do
                          {
                              action = '\0';
                              printf("\n\nAccountant: \"I don't understand, try again\"");
                              printf("\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();

                          }while(action != 1 && action != 2);
                          }
                          switch(action)
                          {
                              case(1): action = '\0';
                                       printf("%s: \"That will be all, thank you\"\n\n", a.fname);
                                       printf("Accountant: \"O.K. have a good one %s %s", (a.gender == 'M' || a.gender == 'm')?("Mr."):("Mrs."), a.lname);
                                       printf("\n\n***Exit Bank***\n\n");
                                       exit(0);

                               case(2): action = '\0';
                                        printf("%s: \"No\"\n\n", a.fname);
                                        printf("Accountant: \"What else would you like to do?\"\n");
                                        printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                        if((action != 1 && action != 2) && (action != 3 && action != 4))
                                        {
                                        do
                                        {   action = '\0';
                                            printf("\n\nAccountant: \"Can you repeat that?\"\n\n");
                                            printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                        }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                        }
                                        if(action == 1)
                                        {
                                            printf("%s: \"I would like to withdraw more money\"\n\n",a.fname);
                                            printf("Accountant: \"O.K. give me one moment...\"\n\n");
                                            Sleep(5000); system("cls"); goto op1;
                                        }
                                        else if(action == 2)
                                        {
                                            goto dep1;
                                        }
                                         else if(action == 3)
                                        {
                                            action = '\0'; goto trans;
                                        }
                                        else if(action == 4)
                                        {
                                            action = '\0'; goto view;
                                        }

                          }



                      }
                      if(action == 2)
                      {
                          printf("%s: \"I would like to withdraw from my savings account\"\n\n",a.fname);
                          printf("Accountant: \"Please one moment while I bring up your savings account information\"\n");
                          Sleep(5000); system("cls");
                          printf("Accountant: \"You currently have $%.2f in your savings account\"\n\n",a.save);
                          printf("Accountant: \"How much would you like to withdraw?\"\n\n");
                          withd2:
                          printf("%s: \"I would like to withdraw $",a.fname); scanf("%f", &with2); getchar();
                          if(with2 > a.save)
                          {
                              printf("Accountant: \"Umm..that seems to be an overdraft please state another amount\"\n\n");
                              goto withd2;
                          }
                          savetotal = a.save - with2;
                          a.save = savetotal;
                          printf("Accountant: \"One moment please......\"\n\n"); Sleep(5000);
                          printf("Accountant: \"Here is $%.2f that you withdrew, with that it brings your total to $%.2f\"\n\n",with2,a.save);
                          printf("%s: \"Thank you\"\n\n", a.fname);
                          printf("Accountant: \"Will that be all %s?\"\n\n", (a.gender == 'M' || a.gender == 'm')?("Sir"):("Mam") );
                          printf("\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                          if(action != 1 && action != 2)
                          {


                          do
                          {
                              action = '\0';
                              printf("\n\nAccountant: \"I don't understand, try again\"");
                              printf("\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();

                          }while(action != 1 && action != 2);
                          }

                          switch(action)
                          {
                              case(1): action = '\0';
                                       printf("%s: \"That will be all, thank you\"\n\n", a.fname);
                                       printf("Accountant: \"O.K. have a good one %s %s", (a.gender == 'M' || a.gender == 'm')?("Mr."):("Mrs."), a.lname);
                                       printf("\n\n***Exit Bank***\n\n");
                                       exit(0);

                               case(2): action = '\0';
                                        printf("%s: \"No\"\n\n", a.fname);
                                        printf("Accountant: \"What else would you like to do?\"\n");
                                        printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                        if((action != 1 && action != 2) && (action != 3 && action != 4))
                                        {


                                        do
                                        {
                                            action = '\0';
                                            printf("\n\nAccountant: \"I didn't get that, please repeat that\"\n\n");
                                            printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                        }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                        }
                                        if(action == 1)
                                        {
                                            action = '\0';
                                            printf("%s: \"I would like to withdraw more money\"\n\n",a.fname);
                                            printf("Accountant: \"O.K. give me one moment...\"\n\n");
                                            Sleep(5000); system("cls"); goto op1;
                                        }
                                        else if(action == 2)
                                        {
                                            action = '\0'; goto dep1;
                                        }
                                        else if(action == 3)
                                        {
                                            action = '\0'; goto trans;
                                        }
                                        else if(action == 4)
                                        {
                                            action = '\0'; goto view;
                                        }

                          }

            case(2): dep1:
                     action = '\0';
                     printf("%s: \"I would to deposit some money.\"\n\n",a.fname);
                     printf("Accountant: \"Please wait one moment while I bring your account up\"\n");
                     Sleep(5000); system("cls");
                     printf("Accountant: \"Which account will you like to deposit to?\"\n");
                     printf("\n1. Checking\n2. Saving\n\nAction: "); scanf("%d", &action); getchar();
                     if(action != 1 && action != 2)
                     {


                     do
                     {
                         action = '\0';
                         printf("\n\nAccountant: \"Can you please repeat that?\"\n\n");
                         printf("\n1. Checking\n2. Saving\n\nAction: "); scanf("%d", &action); getchar();

                     }while(action != 1 && action != 2);
                     }
                     if(action == 1)
                     {
                         action = '\0';
                         printf("%s: \"I would like to deposit into my checking account\"\n\n",a.fname);
                         printf("Accountant: \"All right how much would you like to deposit?\"\n\n");
                         printf("%s: \"$",a.fname); scanf("%f", &dep); getchar();
                         checktotal = a.check + dep;
                         printf("Accountant: \"Prior you had $%.2f and with the $%.2f deposited it brings your checking total to $%.2f\"\n", a.check, dep, checktotal);
                         a.check = checktotal;
                         putchar('\n');
                         putchar('\n');
                         printf("Accountant: \"Will that be all?\"\n");
                         printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                         if(action != 1 && action != 2)
                         {


                         do
                            {
                                action = '\0';
                         printf("\n\nAccountant: \"Can you please repeat that?\"\n\n");
                         printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();

                            }while(action != 1 && action != 2);
                         }
                         if(action == 1)
                         {
                             printf("%s: \"Yes, that will be all. Thanks\"\n", a.fname);
                             printf("Accountant: \"Alrighty, have a good one\"\n");
                             printf("\n\n***Exit Bank***\n\n");
                             exit(0);
                         }
                         else if(action == 2)
                         {
                             printf("%s: \n\n\"No, I would like to \n\n", a.fname);
                             printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: ");
                             scanf("%d", &action); getchar();
                             if((action != 1 && action != 2) && (action != 3 && action != 4))
                             {


                             do
                            {
                                action = '\0';
                                printf("\n\nAccountant: \"I didn't get that, please repeat that\"\n\n");
                                printf("\n1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                            }while((action != 1 && action != 2) && (action != 3 && action != 4));
                             }
                             switch(action)
                             {
                                 case(1): action = '\0';
                                          printf("Accountant: \"Give me one moment while I bring up your account\"\n");
                                          Sleep(5000); system("cls"); goto op1; break;

                                  case(2): action = '\0'; goto dep1; break;

                                  case(3): action = '\0'; goto trans; break;

                                 case(4): action = '\0'; goto view;



                             }
                         }
                     }

                         if(action == 2)
                        {
                         action = '\0';
                         printf("%s: \"I would like to deposit into my savings account\"\n\n",a.fname);
                         printf("Accountant: \"All right how much would you like to deposit?\"\n\n");
                         printf("%s: \"$",a.fname); scanf("%f", &dep); getchar();
                         savetotal = a.save + dep;
                         printf("Accountant: \"Prior you had $%.2f and with the $%.2f deposited it brings your checking total to $%.2f\"\n", a.save, dep, savetotal);
                         a.save = savetotal;
                         putchar('\n');
                         putchar('\n');
                         printf("Accountant: \"Will that be all?\"\n");
                         printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                         if(action != 1 && action != 2)
                         {


                         do
                         {
                             action = '\0';
                             printf("\n\nAccountant: \"Say that again?\"\n");
                             printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();

                         }while(action != 1 && action != 2);
                         }
                         if(action == 1)
                         {
                             printf("%s: \"Yes, that will be all. Thanks\"\n",a.fname);
                             printf("Accountant: \"Alrighty, have a good one\"\n");
                             printf("\n\n***Exit Bank***\n\n");
                             exit(0);
                         }
                         else if(action == 2)
                         {
                             printf("%s: \n\n\"No, I would like to \n\n", a.fname);
                             printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: ");
                             scanf("%d", &action); getchar();
                             if((action != 1 && action != 2) && (action != 3 && action != 4))
                             {


                             do
                             {
                                 action = '\0';
                                  printf("Accountant: \"I don't understand that, please try again\"\n\n");
                                  printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();

                             }while((action != 1 && action != 2) && (action != 3 && action != 4));
                             }
                             switch(action)
                             {
                                 case(1): action = '\0';
                                          printf("Accountant: \"Give me one moment while I bring up your account\"\n");
                                          Sleep(5000); system("cls"); goto op1; break;

                                 case(2): action = '\0'; goto dep1;

                                 case(3): action = '\0'; goto trans;

                                 case(4): action = '\0'; goto view;



                             }
                         }


                     }
                    case(3): trans:
                             action = '\0';
                             float trans1, trans2;
                             printf("%s: \"I would like to make a transfer between my account\"\n\n",a.fname);
                             printf("Accountant: \"Give me one moment to bring up your account before the making the transfer\"\n");
                             Sleep(5000); system("cls");
                             printf("Accountant: \"Which account will you be making a transfer to?\"\n\n");
                             printf("1. Checking\n2. Savings\n\nAction: "); scanf("%d", &action); getchar();
                             if(action != 1 && action != 2)
                             {


                             do
                             {
                                 action = '\0';
                                 printf("\nAccountant: \"That was hard to understand, please repeat that\"\n\n");
                                 printf("1. Checking\n2. Savings\n\nAction: "); scanf("%d", &action); getchar();
                             }while(action != 1 && action != 2);
                             }
                             if(action == 1)
                             {
                                    action = '\0';
                                    printf("%s: \"I would like to transfer some funds into my checking account\"\n\n",a.fname);
                                    printf("Accountant: \"O.K. currently you have $%.2f in your checking and $%.2f in your savings\"\n\n",a.check,a.save);
                                    printf("Accountant: \"How much do you wish to transfer?\"\n\n");
                                    printf("%s: \"$", a.fname); scanf("%f", &trans1); getchar();
                                    if(trans1 > a.save)
                                    {
                                    do
                                    {
                                        printf("Accountant: \"That will cause an overdraft in your account. Please try again\"\n\n");
                                        printf("%s: \"$", a.fname); scanf("%f", &trans1); getchar();
                                    }while(trans1 > a.save);
                                    }
                                    checktotal = a.check + trans1;
                                    savetotal = a.save-trans1;
                                    putchar('\n');
                                    putchar('\n');
                                    printf("Accountant: \"The transfer has been made. Previously you had $%.2f in your checking and $%.2f in your savings\"\n\n",a.check,a.save);
                                    printf("Accountant: \"You now have  $%.2f in your checking and $%.2f in your savings\"\n\n",checktotal,savetotal);
                                    a.check = checktotal;
                                    a.save = savetotal;
                                    printf("Accountant: \"Will that be all?\"\n");
                                    printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                    if(action != 1 && action != 2)
                                    {


                                    do
                                    {
                                        action = '\0';
                                        printf("Accountant: \"Don't understand what you are requesting. Please repeat that\"\n\n");
                                        printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                    }while(action != 1 && action != 2);
                                    }
                                    if(action == 1)
                                        {
                                            printf("%s: \"Yes, that will be all. Thanks\"\n",a.fname);
                                            printf("Accountant: \"Alrighty, have a good one\"\n");
                                            printf("\n\n***Exit Bank***\n\n");
                                            exit(0);
                                        }
                                    else if(action == 2)
                                        {
                                            action = '\0';
                                            printf("%s: \n\n\"No, I would like to \n\n", a.fname);
                                            printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: ");
                                            scanf("%d", &action); getchar();
                                            if((action != 1 && action != 2) && (action != 3 && action != 4))
                                            {


                                            do
                                            {
                                                action = '\0';
                                              printf("Accountant: \"Don't understand what you are requesting. Please repeat that\"\n\n");
                                              printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                            }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                            }
                                            switch(action)
                                                {
                                                    case(1): action = '\0';
                                                    printf("Accountant: \"Give me one moment while I bring up your account\"\n");
                                                    Sleep(5000); system("cls"); goto op1; break;

                                                    case(2): action = '\0'; goto dep1; break;

                                                    case(3): action = '\0'; goto trans; break;

                                                    case(4): action = '\0';
                                                             printf("%s: \"Can I get a summary of my account?\"\n\n",a.fname);
                                                             printf("Accountant: \"Sure no problem....give me a moment\"\n\n");
                                                             Sleep(5100); system("cls"); goto view;




                                                  }
                         }
                             }
                             if(action == 2)
                             {
                                    action = '\0';
                                    printf("%s: \"I would like to transfer some funds into my savings account\"\n\n",a.fname);
                                    printf("Accountant: \"O.K. currently you have $%.2f in your savings and $%.2f in your checking\"\n\n",a.save,a.check);
                                    printf("Accountant: \"How much do you wish to transfer?\"\n\n");
                                    printf("%s: \"$", a.fname); scanf("%f", &trans2); getchar();
                                    if(trans2 > a.check)
                                    {
                                    do
                                    {
                                        printf("Accountant: \"That will cause an overdraft in your account. Please try again\"\n\n");
                                        printf("%s: \"$", a.fname); scanf("%f", &trans2); getchar();
                                    }while(trans2 > a.check);
                                    }
                                    checktotal = a.check - trans2;
                                    savetotal = a.save+trans2;
                                    putchar('\n');
                                    putchar('\n');
                                    printf("Accountant: \"The transfer has been made. Previously you had $%.2f in your checking and $%.2f in your savings\"\n\n",a.save,a.check);
                                    printf("Accountant: \"You now have  $%.2f in your checking and $%.2f in your savings\"\n\n",savetotal,checktotal);
                                    a.check = checktotal;
                                    a.save = savetotal;
                                    printf("Accountant: \"Will that be all?\"\n");
                                    printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                    if(action != 1 && action != 2)
                                    {


                                    do
                                    {
                                        action = '\0';
                                        printf("Accountant: \"Don't understand what you are requesting. Please repeat that\"\n\n");
                                        printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                    }while(action != 1 && action != 2);
                                    }
                                    if(action == 1)
                                        {
                                            printf("%s: \"Yes, that will be all. Thanks\"\n",a.fname);
                                            printf("Accountant: \"Alrighty, have a good one\"\n");
                                            printf("\n\n***Exit Bank***\n\n");
                                            exit(0);
                                        }
                                    else if(action == 2)
                                        {
                                            action = '\0';
                                            printf("%s: \n\n\"No, I would like to \n\n", a.fname);
                                            printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: ");
                                            scanf("%d", &action); getchar();
                                            if((action != 1 && action != 2) && (action != 3 && action != 4))
                                            {


                                            do
                                            {
                                                action = '\0';
                                              printf("Accountant: \"Don't understand what you are requesting. Please repeat that\"\n\n");
                                              printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                            }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                            }
                                            switch(action)
                                                {
                                                    case(1): action = '\0';
                                                    printf("Accountant: \"Give me one moment while I bring up your account\"\n");
                                                    Sleep(5000); system("cls"); goto op1; break;

                                                    case(2): action = '\0'; goto dep1; break;

                                                    case(3): action = '\0'; goto trans; break;

                                                    case(4): action = '\0';
                                                             printf("%s: \"I would like a summary of my account if you don't mind?\"\n\n",a.fname);
                                                             printf("Accountant: \"Sure no problem....give me a moment\"\n\n");
                                                             Sleep(5100); system("cls"); goto view;




                                                  }
                                            }
                                        }


                        case(4):
                                 action = '\0';
                                 printf("%s: \"I would like to get a summary of my account\"\n\n",a.fname);
                                 printf("Accountant: \"Sure, no problem %s %s\"\n\n", (a.gender != 'M'||a.gender != 'm')?("Mrs."):("Mr."), a.lname);
                                 printf("Accountant: \"One moment while I retrieve the information\"\n\n"); Sleep(5000); system("cls");
                                 view:
                                 printf("Accountant: \"Would you like for me to tell you the summary or you want to view it for yourself?\"\n\n");
                                 printf("1. Verbal\n2. View\n\nAction: "); scanf("%d", &action); getchar();
                                 if(action != 1 && action != 2)
                                 {


                                 do
                                 {
                                     action = '\0';
                                     printf("\n\nAccountant: \"I couldn't understand that, can you repeat that?\"\n\n");
                                     printf("1. Verbal\n2. View\n\nAction: "); scanf("%d", &action); getchar();
                                 }while(action != 1 && action != 2);
                                 }
                                 if(action == 1)
                                 {
                                     action = '\0';
                                     printf("\n\n%s: \"You can just tell me. Thanks\"\n\n", a.fname);
                                     printf("Accountant: \"Sure no problem. You currently have $%.2f in your checking account. $%.2f in your savings account.\"\n",a.check,a.save);
                                     printf("Accountant: \"As for your credit card amount you have $%.2f\"\n\n",a.credit);
                                     printf("%s: \"Thank You\"\n\n",a.fname);
                                     printf("Accountant: \"No problem. Will that be all?\"\n\n");
                                     printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                     if(action != 1 && action != 2)
                                     {


                                      do
                                        {
                                            action = '\0';
                                     printf("\n\nAccountant: \"I couldn't understand that, can you repeat that?\"\n\n");
                                     printf("1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                        }while(action != 1 && action != 2);
                                     }
                                            if(action == 1)
                                            {
                                                printf("%s: \"That will be all for me\"\n\n",a.fname);
                                                printf("Accountant: \"Alright. Cheers\"\n\n");
                                                printf("***Exit Bank***");
                                                exit(0);
                                            }
                                            else if(action ==2)
                                            {
                                                action = '\0';
                                                printf("%s: \n\n\"No, I would like to \n\n", a.fname);
                                                printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: ");
                                                scanf("%d", &action); getchar();
                                                if((action != 1 && action != 2) && (action != 3 && action != 4))
                                                {


                                                    do
                                                    {
                                                        action = '\0';
                                                    printf("Accountant: \"Don't understand what you are requesting. Please repeat that\"\n\n");
                                                    printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: "); scanf("%d", &action); getchar();
                                                    }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                                }
                                                        switch(action)
                                                            {
                                                                case(1): action = '\0';
                                                                printf("Accountant: \"Give me one moment while I bring up your account\"\n");
                                                                Sleep(5000); system("cls"); goto op1; break;

                                                                case(2): action = '\0'; goto dep1; break;

                                                                case(3): action = '\0'; goto trans; break;

                                                                case(4): action = '\0';
                                                                         printf("%s: \"I would like a summary of my account if you don't mind?\"\n\n",a.fname);
                                                                         printf("Accountant: \"Sure no problem....give me a moment\"\n\n");
                                                                         Sleep(5100); system("cls"); goto view;

                                                            }
                                            }

                                 }
                                 if(action == 2)
                                        {
                                            action = '\0';
                                            printf("\n\n%s: \"I would like to view it myself\"\n\n",a.fname);
                                            printf("Accountant: \"Sure, here you go\"\n\n"); char x;
                                            Sleep(6000); system("cls");
                                            printf("\t\t\t\t%s\n\n", bank);
                                            printf("\n\t\t\t\t                           Press 'X' to Exit\n\n");
                                            printf("NAME: %s %s\n",a.fname, a.lname);
                                            printf("ADDRESS: %s\n", a.address1);
                                            printf("\n\nDEBIT CARD:\nCHECKING ACCOUNT: $%.2f\nSAVINGS ACCOUNT: $%.2f\n\nCREDIT CARD:\nCREDIT AMOUNT: $%.2f\n\n",a.check,a.save,a.credit);
                                            scanf("%c", &x); getchar();
                                            do
                                            {
                                                printf("Invalid Command!\n");
                                                scanf("%c", &x); getchar();
                                            }while(x != 'X' && x != 'x');
                                            putchar('\n');
                                            putchar('\n');
                                            printf("***Computer Screen Closes***\n\n"); Sleep(3000); system("cls");
                                            printf("Accountant: \"Will that be all %s?\n\n", (a.gender == 'm' || a.gender == 'M')?("sir"): ("mam"));
                                             printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                             if(action != 1 && action != 2)
                                             {


                                            do
                                            {
                                                printf("\n\nAccountant: \"I couldn't understand that, can you repeat that?\"\n\n");
                                                printf("1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                            }while(action != 1 && action != 2);
                                             }
                                            if(action == 1)
                                            {
                                                printf("%s: \"That will be all for me. Thanks\"\n\n", a.fname);
                                                printf("Accountant: \"Sure, no problem. Have a good one\"\n\n");

                                                printf("***Exit Bank***\n\n");
                                                exit(0);

                                            }
                                             else if(action ==2)
                                            {
                                                action = '\0';
                                                printf("%s: \n\n\"No, I would like to \n\n", a.fname);
                                                printf("1. Withdraw\n2. Deposit\n3. Transfer\n4. View\n\nAction: ");
                                                scanf("%d", &action); getchar();
                                                if((action != 1 && action != 2) && (action != 3 && action != 4))
                                                {


                                                    do
                                                    {
                                                    printf("Accountant: \"Don't understand what you are requesting. Please repeat that\"\n\n");
                                                    printf("\n\n1. Yes\n2. No\n\nAction: "); scanf("%d", &action); getchar();
                                                    }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                                }
                                                        switch(action)
                                                            {
                                                                case(1): action = '\0';
                                                                printf("Accountant: \"Give me one moment while I bring up your account\"\n");
                                                                Sleep(5000); system("cls"); goto op1; break;

                                                                case(2): action = '\0'; goto dep1; break;

                                                                case(3): action = '\0'; goto trans; break;

                                                                case(4): action = '\0';
                                                                         printf("%s: \"I would like a summary of my account if you don't mind?\"\n\n",a.fname);
                                                                         printf("Accountant: \"Sure no problem....give me a moment\"\n\n");
                                                                         Sleep(5100); system("cls"); goto view;

                                                            }
                                            }


                                        }







     else if(c != CC && c!= DC)
     {
         printf("Accountant:\"Don't understand your demand. Try again\"");
         goto again3;
     }







}
         }
     }

         return Bank1;
     }

        char x;

     int ATM1(struct info a, char bank[30], pick b, card c)
     {
         int d = 0;
         do
         {
             system("cls");
             printf("\t\t\t\t  Welcome\n\n\n");
             printf("\t\t\t\t ENTER PIN\n");printf("\t\t\t\t    ");scanf("%d", &pin2); getchar();
             if(pin2 != a.pin1)
             {  d++;
                 if(d == 3)
                    {
                 system("cls");
                 printf("\t\t\t\t  Welcome\n\n\n");
                 printf("\t\t\t    TOO MANY ATTEMPTS!!\n");printf("\t\t\t  YOU ARE NOW LOCKED OUT!!\n"); exit(0);
                    }
                    system("cls"); printf("\t\t\t\t  Welcome\n\n\n");
                printf("\t\t\t\tINCORRECT PIN\n");printf("\t\t\t\tTRY AGAIN!!\n\n\n"); Sleep(2000);

             }

         }while(pin2!=a.pin1);


                        do
                         {
                         atmmenu:
                         system("cls");
                         printf("\t\t\t\t   %s\n", bank);
                         printf("_______________________________________________________________________________\n\n\n");
                         printf("::::::::::::::::::::::::\n");
                         printf(":     1.CREDIT CARD    :\n");
                         printf("::::::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf("::::::::::::::::::::::::\n");
                         printf(":     2.DEBIT CARD     :\n");
                         printf("::::::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":     3.EXIT        :\n");
                         printf(":::::::::::::::::::::\n");

                         printf("\n\nAction: "); scanf("%d", &action); getchar();
                         }while(action != 1 && action != 2 && action != 3);
        if(action == 1)
        {       credbal2:
                do
                        {
                         action = '\0';
                         system("cls");
                         printf("\t\t\t\t   CREDIT CARD\n", bank);
                         printf("_______________________________________________________________________________\n\n\n");
                         printf("::::::::::::::::::::::::\n");
                         printf(":   1.BALANCE INQUIRY  :\n");
                         printf("::::::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf("::::::::::::::::::::::::\n");
                         printf(":        2.BACK        :\n");
                         printf("::::::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::::\n");
                         printf(":        3.EXIT       :\n");
                         printf(":::::::::::::::::::::::\n");

                         printf("\n\nAction: "); scanf("%d", &action); getchar();
                         }while(action != 1 && action != 2 && action != 3);
                         switch(action)
                         {
                         case(1): credbal: do{

                          printf("One Moment Please..."); Sleep(3000);system("cls");action = '\0';
                          printf("\t\t\t      BALANCE INQUIRY\n");
                          printf("_______________________________________________________________________________\n\n\n");
                          printf(":::::::::::::::::::::\n");
                          printf(":     1.VIEW        :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');
                          putchar('\n');
                          printf(":::::::::::::::::::::\n");
                          printf(":     2.PRINT       :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');
                          putchar('\n');
                          printf(":::::::::::::::::::::\n");
                          printf(":     3.BACK        :\n");
                          printf(":::::::::::::::::::::\n");
                           putchar('\n');
                          putchar('\n');
                          printf(":::::::::::::::::::::\n");
                          printf(":     4.EXIT        :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');putchar('\n');
                          printf("Action: "); scanf("%d", &action); getchar();
                         }while((action != 1 && action != 2) && (action != 3 && action != 4));
                          if(action == 1)
                          {
                          do{
                                system("cls");
                          action = '\0';
                          printf("\t\t\t      BALANCE INQUIRY\n");
                          printf("_______________________________________________________________________________\n\n\n");
                          printf("CARD NUMBER: ");
                          for(int i = 0; i < strlen(a.crednum)-4; i++)
                            {
                            printf("X");
                            }

                          for(int i = strlen(a.crednum)-4; i< strlen(a.crednum); i++)
                            {
                            printf("%c",a.crednum[i]);
                            }
                            putchar('\n'); putchar('\n');putchar('\n');
                            printf("CREDIT CARD AMOUNT    =      $%.2f\n", a.credit);

                            putchar('\n'); putchar('\n');putchar('\n');
                            printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                            printf("\n: 1.PRINT RECEIPT    :       :       2.BACK       :      :       3.EXIT       :\n");
                            printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                            putchar('\n');putchar('\n');putchar('\n');
                            printf("Action: "); scanf("%d", &action); getchar();
                            }while((action != 1 && action !=2) && action != 3);
                                if(action == 1)
                                {

                                    printf("\t\t\t\tPRINTING RECEIPT");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", bank);
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.crednum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.crednum)-4; i< strlen(a.crednum); i++)
                                            {
                                                printf("%c",a.crednum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("CREDIT CARD AMOUNT: $%.2f",a.credit);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);
                                           }

                                            if(action == 2)
                                            {
                                                goto credbal;
                                            }
                                            if(action == 3)
                                            {
                                                 system("cls");
                                                 printf("\t\t\t      BALANCE INQUIRY\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                 {
                                                     Sleep(1500);
                                                     printf(".");
                                                 }

                                                 Sleep(1500);system("cls");
                                                 printf("\t\t\t      BALANCE INQUIRY\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                            Please Collect Card\n"); exit(0);

                                            }
                          }
                                if(action == 2) {

                                    printf("\t\t\t\tPRINTING RECEIPT");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", bank);
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.crednum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.crednum)-4; i< strlen(a.crednum); i++)
                                            {
                                                printf("%c",a.crednum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("CREDIT CARD AMOUNT: $%.2f",a.credit);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);}
                                if(action == 3)
                                {
                                        action = '\0'; goto credbal2;
                                    }
                                    if(action == 4)
                                    {
                                       system("cls");
                                                 printf("\t\t\t      BALANCE INQUIRY\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                 {
                                                     Sleep(1500);
                                                     printf(".");
                                                 }

                                                 Sleep(1500);system("cls");
                                                 printf("\t\t\t      BALANCE INQUIRY\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                            Please Collect Card\n"); exit(0);
                                    }






                         case(2):action = '\0'; goto atmmenu;


                         case(3):
                                      system("cls");
                                        printf("\t\t\t\t   CREDIT CARD\n", bank);
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t   CREDIT CARD\n", bank);
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);





                            }
        }



        if(action == 2){ action = '\0';
         mainmenu:
         menu(bank);
         putchar('\n');
         putchar('\n');
         printf("Action: "); scanf("%d", &action); getchar();
         if((action != 1 && action != 2) && (action != 3 && action != 4) && (action != 5) && action != 6)
         {
             do
             {
                 goto mainmenu;
             }while((action != 1 && action != 2) && (action != 3 && action != 4) && (action != 5) && action != 6);
         }
         switch(action)
         {        menu2: //Withdraw Menu
                case(1): printf("Loading");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500);
                         do
                         {
                         system("cls");
                         printf("\t\t\t\t      WITHDRAWAL\n");
                         printf("_______________________________________________________________________________\n\n\n");
                         printf(":::::::::::::::::::::\n");
                         printf(":     1.CHECKING    :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":     2.SAVINGS     :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":       3.BACK      :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":       4.EXIT      :\n");
                         printf(":::::::::::::::::::::\n");

                         printf("\n\nAction: "); scanf("%d", &action); getchar();
                         }while((action != 1 && action != 2) && (action != 3 && action != 4));
                            if(action == 1)
                            {   CheckWith: //Checking Withdraw Page
                                do
                                {
                                action = '\0';
                                printf("\nOne Moment Please........");Sleep(5000); system("cls");
                                printf("\t\t\t\t WITHDRAWAL(CHECKING)\n");
                                printf("_______________________________________________________________________________\n\n\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      1. $20         :");printf("                                 :      2. $40         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      3. $60         :");printf("                                 :      4. $80         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      5. $100        :");printf("                                 :     6. OTHER AMOUNT :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      7. BACK        :");printf("                                 :      8. EXIT        :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n\nAction: "); scanf("%d", &action); getchar();
                                }while((action != 1 && action != 2)&&(action != 3 && action != 4)&&(action != 5 && action != 6)&&(action != 7 && action != 8));
                                    switch(action)
                                    { //Checking Fast Withdraw
                                        case(1): checktotal = a.check - 20; with = 20.00;
                                                 if(checktotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto CheckWith;
                                                 }
                                                 a.check = checktotal;
                                                 break;
                                        case(2): checktotal = a.check - 40; with = 40.00;
                                                 if(checktotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto CheckWith;
                                                 }
                                                 a.check = checktotal;
                                                 break;
                                        case(3): checktotal = a.check - 60; with = 60.00;
                                                 if(checktotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto CheckWith;
                                                 }
                                                 a.check = checktotal;
                                                 break;
                                        case(4): checktotal = a.check - 80; with = 80.00;
                                                 if(checktotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto CheckWith;
                                                 }
                                                 a.check = checktotal;
                                                 break;
                                        case(5): checktotal = a.check - 100; with = 100.00;
                                                 if(checktotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto CheckWith;
                                                 }
                                                 a.check = checktotal;
                                                 break;
                                        case(6): system("cls");
                                                 printf("\t\t\t\t   WITHDRAWAL(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("CHECKING AMOUNT: $%.2f\n\n",a.check);
                                                 printf("WITHDRAWAL AMOUNT: $");scanf("%f", &with); getchar();

                                                 checktotal = a.check - with;
                                                 if(checktotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto CheckWith;
                                                 }
                                                 a.check = checktotal;
                                                 break;
                                        case(7): action = '\0'; Sleep(5000); system("cls"); goto menu2; break;

                                        case(8): system("cls");
                                                 printf("\t\t\t\t   WITHDRAWAL(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   WITHDRAWAL(CHECKING)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                    }
                                    if(action >= 1 && action <=6)
                                    {
                                     printf("Loading");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500); system("cls");
                                     printf("\t\t\t\t   WITHDRAWAL(CHECKING)\n");
                                     printf("_______________________________________________________________________________\n\n\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           ::::                                                 :\n");
                                        printf(":         : : : :                    TRANSACTION COMPLETED       :\n");
                                        printf(":        :  : :  :                                               :\n");
                                        printf(":       :   : :    :                                             :\n");
                                        printf(":         : : :                       PLEASE COLLECT MONEY       :\n");
                                        printf(":           :::                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : : :                                                :\n");
                                        printf(":           : :   :                                              :\n");
                                        printf(":      :    : :     :                                            :\n");
                                        printf(":       :   : :     :                                            :\n");
                                        printf(":         : : :   :                                              :\n");
                                        printf(":           :::  :                                               :\n");
                                        printf(":           : :                                                  :\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        putchar('\n');putchar('\n');
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                                        printf("\n: 1.PRINT RECEIPT    :       :       2.BACK       :      :       3.EXIT       :\n");
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::\n");
                                        printf("Action: ");
                                        scanf("%d", &action); getchar();
                                 }while((action != 1 && action != 2) && action != 3);
                                        if(action == 1)
                                        {   printf("\t\t\t\tPRINTING RECEIPT");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("TRANSACTION TYPE: WITHDRAW");
                                            printf("\nAMOUNT WITHDREW: $%.2f\n", with);
                                            printf("\nACCOUNT: CHECKING\n");

                                            printf("CHECKING BALANCE: $%.2f",a.check);

                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);

                                        }
                                        if(action == 2)
                                        {
                                        Sleep(2000); goto CheckWith;
                                        }
                                        if(action == 3)
                                        {
                                                 system("cls");
                                                 printf("\t\t\t\t   WITHDRAWAL(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   WITHDRAWAL(CHECKING)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                        }


                                 }
                            if(action == 2)
                            {
                               SaveWith:
                                do
                                {
                                action = '\0';
                                printf("Loading");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500); system("cls");
                                printf("\t\t\t\t WITHDRAWAL(SAVING)\n");
                                printf("_______________________________________________________________________________\n\n\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      1. $20         :");printf("                                 :      2. $40         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      3. $60         :");printf("                                 :      4. $80         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      5. $100        :");printf("                                 :     6. OTHER AMOUNT :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      7. BACK        :");printf("                                 :      8. EXIT        :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n\nAction: "); scanf("%d", &action); getchar();
                                }while((action != 1 && action != 2)&&(action != 3 && action != 4)&&(action != 5 && action != 6)&&(action != 7 && action != 8));
                                    switch(action)
                                    {
                                        case(1): savetotal = a.save - 20; with2 = 20.00;
                                                 if(savetotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(3000); system("cls"); goto SaveWith;
                                                 }
                                                 a.save = savetotal;
                                                 break;
                                        case(2): savetotal = a.save - 40; with2 = 40.00;
                                                 if(savetotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(3000); system("cls"); goto SaveWith;
                                                 }
                                                 a.save = savetotal;
                                                 break;
                                        case(3): savetotal = a.save - 60; with2 = 60.00;
                                                 if(savetotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(3000); system("cls"); goto SaveWith;
                                                 }
                                                 a.save = savetotal;
                                                 break;
                                        case(4): savetotal = a.save - 80; with2 = 80.00;
                                                 if(savetotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(3000); system("cls"); goto SaveWith;
                                                 }
                                                 a.save = savetotal;
                                                 break;
                                        case(5): savetotal = a.save - 100; with2 = 100.00;
                                                 if(savetotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto SaveWith;
                                                 }
                                                 a.save = savetotal;
                                                 break;
                                        case(6): system("cls");
                                                 printf("\t\t\t\t   WITHDRAWAL(SAVINGS\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("SAVINGS AMOUNT: $%.2f\n\n",a.save);
                                                 printf("WITHDRAWAL AMOUNT: $");scanf("%f", &with2); getchar();

                                                 savetotal = a.save - with2;
                                                 if(savetotal < 0)
                                                 {
                                                     printf("WARNING!!\nOVERDRAFT\n\n"); Sleep(5000); system("cls"); goto SaveWith;
                                                 }
                                                 a.save = savetotal;
                                                 break;
                                        case(7): action = '\0'; Sleep(5000); system("cls"); goto menu2; break;

                                        case(8):  system("cls");
                                                 printf("\t\t\t\t   WITHDRAWAL(SAVINGS)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   WITHDRAWAL(SAVINGS)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                    }
                                 if(action >= 1 && action <=6)
                                 {
                                     do{
                                            action = '\0';
                                     printf("Loading");
                                    for(int i = 0; i < 3; i++)
                                    {
                                       Sleep(1200);printf(".");
                                    }

                                        Sleep(500); system("cls");

                                     printf("\t\t\t\t   WITHDRAWAL(SAVINGS)\n");
                                     printf("_______________________________________________________________________________\n\n\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           ::::                                                 :\n");
                                        printf(":         : : : :                    TRANSACTION COMPLETED       :\n");
                                        printf(":        :  : :  :                                               :\n");
                                        printf(":       :   : :    :                                             :\n");
                                        printf(":         : : :                       PLEASE COLLECT MONEY       :\n");
                                        printf(":           :::                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : : :                                                :\n");
                                        printf(":           : :   :                                              :\n");
                                        printf(":      :    : :     :                                            :\n");
                                        printf(":       :   : :     :                                            :\n");
                                        printf(":         : : :   :                                              :\n");
                                        printf(":           :::  :                                               :\n");
                                        printf(":           : :                                                  :\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        putchar('\n');putchar('\n');
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                                        printf("\n: 1.PRINT RECEIPT    :       :       2.BACK       :      :       3.EXIT       :\n");
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::\n");
                                        printf("Action: ");
                                        scanf("%d", &action); getchar();
                                 }while((action != 1 && action != 2) && action != 3);
                                        if(action == 1)
                                        {
                                             printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("TRANSACTION TYPE: WITHDRAW");
                                            printf("\nAMOUNT WITHDREW: $%.2f\n", with2);
                                            printf("\nACCOUNT: SAVING\n");

                                            printf("SAVING BALANCE: $%.2f",a.save);

                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);

                                        }
                                        if(action == 2)
                                        {
                                        Sleep(2000); goto SaveWith;
                                        }
                                        if(action == 3)
                                        {
                                             system("cls");
                                                 printf("\t\t\t\t   WITHDRAWAL(SAVINGS)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   WITHDRAWAL(SAVINGS)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                        }


                                }
                            }
                            if(action == 3)
                            {
                                action = '\0'; goto mainmenu; break;
                            }
                            if(action == 4)
                            {
                               system("cls");

                                        printf("\t\t\t\t WITHDRAWAL\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t WITHDRAWAL\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);
                            }


                                    break;

                case(2): printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                         menu3:
                         do
                         {
                         system("cls");
                         printf("\t\t\t\t      DEPOSIT\n");
                         printf("_______________________________________________________________________________\n\n\n");
                         printf(":::::::::::::::::::::\n");
                         printf(":     1.CHECKING    :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":     2.SAVINGS     :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":       3.BACK      :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":       4.EXIT      :\n");
                         printf(":::::::::::::::::::::\n");

                         printf("\n\nAction: "); scanf("%d", &action); getchar();
                         }while(action != 1 && action != 2 && action != 3);
                            if(action == 1)
                            {   CheckDep:
                                do
                                {
                                action = '\0';
                                printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                                printf("\t\t\t\t DEPOSIT(CHECKING)\n");
                                printf("_______________________________________________________________________________\n\n\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      1. $20         :");printf("                                 :      2. $40         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      3. $60         :");printf("                                 :      4. $80         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      5. $100        :");printf("                                 :     6. OTHER AMOUNT :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      7. BACK        :");printf("                                 :      8. EXIT        :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n\nAction: "); scanf("%d", &action); getchar();
                                }while((action != 1 && action != 2)&&(action != 3 && action != 4)&&(action != 5 && action != 6)&&(action != 7 && action != 8));
                                    switch(action)
                                    {
                                        case(1): checktotal = a.check + 20; dep = 20.00;
                                                 a.check = checktotal;
                                                 break;
                                        case(2): checktotal = a.check + 40; dep = 40.00;
                                                 a.check = checktotal;
                                                 break;
                                        case(3): checktotal = a.check + 60; dep = 60.00;
                                                 a.check = checktotal;
                                                 break;
                                        case(4): checktotal = a.check + 80; dep = 80.00;
                                                 a.check = checktotal;
                                                 break;
                                        case(5): checktotal = a.check + 100; dep = 100.00;
                                                 a.check = checktotal;
                                                 break;
                                        case(6): system("cls");
                                                 printf("\t\t\t\t   DEPOSIT(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("CHECKING AMOUNT: $%.2f\n\n",a.check);
                                                 printf("DEPOSIT AMOUNT: $");scanf("%f", &dep); getchar();

                                                 checktotal = a.check + dep;
                                                 a.check = checktotal;
                                                 break;
                                        case(7): action = '\0'; Sleep(5000); system("cls"); goto menu3; break;

                                        case(8):   system("cls");
                                                 printf("\t\t\t\t   DEPOSIT(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   DEPOSIT(CHECKING)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                    }
                                 if(action >= 1 && action <=6)
                                 {  do{
                                     action = '\0';
                                     printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                                     printf("\t\t\t\t   DEPOSIT(CHECKING)\n");
                                     printf("_______________________________________________________________________________\n\n\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           ::::                                                 :\n");
                                        printf(":         : : : :               PLEASE INSERT MONEY FACE UP      :\n");
                                        printf(":        :  : :  :                                               :\n");
                                        printf(":       :   : :    :                                             :\n");
                                        printf(":         : : :                        THANK YOU                 :\n");
                                        printf(":           :::                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : : :                                                :\n");
                                        printf(":           : :   :                                              :\n");
                                        printf(":      :    : :     :                                            :\n");
                                        printf(":       :   : :     :                                            :\n");
                                        printf(":         : : :   :                                              :\n");
                                        printf(":           :::  :                                               :\n");
                                        printf(":           : :                                                  :\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        putchar('\n');putchar('\n');
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                                        printf("\n: 1.PRINT RECEIPT    :       :       2.BACK       :      :       3.EXIT       :\n");
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::\n");
                                        printf("Action: ");
                                        scanf("%d", &action); getchar();
                                 }while((action != 1 && action != 2) && (action != 3 && action != 4));
                                        if(action == 1)
                                        {
                                            printf("PRINTING RECEIPT");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("TRANSACTION TYPE: DEPOSIT");
                                            printf("\nAMOUNT DEPOSITED: $%.2f\n", dep);
                                            printf("\nACCOUNT: CHECKING\n");

                                            printf("CHECKING BALANCE: $%.2f",a.check);

                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);

                                        }
                                        if(action == 2)
                                        {
                                        Sleep(2000); goto CheckDep;
                                        }
                                        if(action == 3)
                                        {
                                            system("cls");
                                                 printf("\t\t\t\t   DEPOSIT(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   DEPOSIT(CHECKING)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);
                                        }

                                 }
                            }else if(action == 2)
                            {


                               SaveDep:
                                do
                                {
                                action = '\0';
                               printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                                printf("\t\t\t\t DEPOSIT(SAVINGS)\n");
                                printf("_______________________________________________________________________________\n\n\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      1. $20         :");printf("                                 :      2. $40         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      3. $60         :");printf("                                 :      4. $80         :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      5. $100        :");printf("                                 :     6. OTHER AMOUNT :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                putchar('\n');
                                putchar('\n');
                                putchar('\n');
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n:      7. BACK        :");printf("                                 :      8. EXIT        :\n");
                                printf(":::::::::::::::::::::::\t\t\t\t\t:::::::::::::::::::::::");
                                printf("\n\nAction: "); scanf("%d", &action); getchar();
                                }while((action != 1 && action != 2)&&(action != 3 && action != 4)&&(action != 5 && action != 6)&&(action != 7 && action != 8));
                                    switch(action)
                                    {
                                        case(1): savetotal = a.save + 20; dep = 20.00;
                                                 a.save = savetotal;
                                                 break;
                                        case(2): savetotal = a.save + 40; dep = 40.00;
                                                 a.save = savetotal;
                                                 break;
                                        case(3): savetotal = a.save + 60; dep = 60.00;
                                                 a.save = savetotal;
                                                 break;
                                        case(4): savetotal = a.save + 80; dep = 80.00;
                                                 a.save = savetotal;
                                                 break;
                                        case(5): savetotal = a.save + 100; dep = 100.00;
                                                 a.save = savetotal;
                                                 break;
                                        case(6): system("cls");
                                                 printf("\t\t\t\t   DEPOSIT(SAVINGS)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("SAVING AMOUNT: $%.2f\n\n",a.save);
                                                 printf("DEPOSIT AMOUNT: $");scanf("%f", &dep); getchar();

                                                 savetotal = a.save + dep;
                                                 a.save = savetotal;
                                                 break;
                                        case(7): action = '\0'; Sleep(2000); system("cls"); goto menu3; break;

                                        case(8):  system("cls");
                                                 printf("\t\t\t\t   DEPOSIT(SAVINGS)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   DEPOSIT(SAVINGS)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                    }
                                 if(action >= 1 && action <=6)
                                 {
                                     do{
                                            action = '\0';
                                     printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                                     printf("\t\t\t\t   DEPOSIT(SAVINGS)\n");
                                     printf("_______________________________________________________________________________\n\n\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           ::::                                                 :\n");
                                        printf(":         : : : :               PLEASE INSERT MONEY FACE UP      :\n");
                                        printf(":        :  : :  :                                               :\n");
                                        printf(":       :   : :    :                                             :\n");
                                        printf(":         : : :                        THANK YOU                 :\n");
                                        printf(":           :::                                                  :\n");
                                        printf(":           : :                                                  :\n");
                                        printf(":           : : :                                                :\n");
                                        printf(":           : :   :                                              :\n");
                                        printf(":      :    : :     :                                            :\n");
                                        printf(":       :   : :     :                                            :\n");
                                        printf(":         : : :   :                                              :\n");
                                        printf(":           :::  :                                               :\n");
                                        printf(":           : :                                                  :\n");
                                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                                        putchar('\n');putchar('\n');
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                                        printf("\n: 1.PRINT RECEIPT    :       :       2.BACK       :      :       3.EXIT       :\n");
                                        printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::\n");
                                        printf("Action: ");
                                        scanf("%d", &action); getchar();
                                 }while((action != 1 && action != 2) && action != 3);
                                        if(action == 1)
                                        {
                                            printf("PRINTING RECEIPT");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("TRANSACTION TYPE: DEPOSIT");
                                            printf("\nAMOUNT DEPOSITED: $%.2f\n", dep);
                                            printf("\nACCOUNT: SAVINGS\n");

                                            printf("CHECKING BALANCE: $%.2f",a.save);

                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);

                                        }
                                        if(action == 2)
                                        {
                                        Sleep(2000); goto SaveDep;
                                        }
                                        if(action == 3)
                                        {
                                             system("cls");
                                                 printf("\t\t\t\t   DEPOSIT(SAVINGS)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   DEPOSIT(SAVINGS)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);

                                        }



                                 }
                            }
                            if(action == 3)
                            {
                                action = '\0'; goto mainmenu; break;
                            }
                            if(action == 4)
                            {
                               system("cls");

                                        printf("\t\t\t\t DEPOSIT\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t DEPOSIT\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);
                            }
                                 break;
                case(3):  //Transfer
                        printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                         transmenu:
                         do
                         {
                         system("cls");
                         printf("\t\t\t\t   TRANSFER\n");
                         printf("_______________________________________________________________________________\n\n\n");
                         printf(":::::::::::::::::::::\n");
                         printf(":     1.CHECKING    :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":     2.SAVINGS     :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":       3.BACK      :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');
                         putchar('\n');
                         printf(":::::::::::::::::::::\n");
                         printf(":       4.EXIT      :\n");
                         printf(":::::::::::::::::::::\n");
                         putchar('\n');putchar('\n');
                         printf("Action: "); scanf("%d", &action); getchar();
                         }while((action != 1 && action != 2) && (action != 3 && action != 4));
                            if(action == 1)
                            {   checktrans:
                                do{
                               action = '\0';
                                printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                                printf("\t\t\t\t TRANSFER(CHECKING)\n");
                                printf("_______________________________________________________________________________\n\n\n");

                                printf("          ::::::::::::::::::::::::\n");
                                printf("FROM --->     SAVINGS: $%.2f \n",a.save);
                                printf("          ::::::::::::::::::::::::\n");

                                    putchar('\n'); putchar('\n');

                                printf("          ::::::::::::::::::::::::\n");
                                printf("TO   --->     CHECKING: $%.2f \n",a.check);
                                printf("          ::::::::::::::::::::::::\n");
                                putchar('\n'); putchar('\n');

                                printf("AMOUNT TRANFERRED: $");scanf("%f", &trans);getchar();
                                }while(trans > a.save);
                                 savetotal = a.save - trans;
                                 a.save = savetotal;
                                 checktotal = a.check + trans;
                                 a.check = checktotal;

                                 printf("One Moment Please");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);putchar('\n');putchar('\n'); printf("TRANSFER COMPLETED!"); Sleep(4000);
                                 do{
                                        system("cls");

                                 printf("\t\t\t\t TRANSFER(CHECKING)\n");
                                printf("_______________________________________________________________________________\n\n\n");


                                printf("          ::::::::::::::::::::::::\n");
                                printf("FROM --->     SAVINGS: $%.2f \n",a.save);
                                printf("          ::::::::::::::::::::::::\n");

                                    putchar('\n'); putchar('\n');

                                printf("          ::::::::::::::::::::::::\n");
                                printf("TO   --->    CHECKING: $%.2f \n",a.check);
                                printf("          ::::::::::::::::::::::::\n");
                                putchar('\n'); putchar('\n');putchar('\n');
                                printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                                printf("\n: 1. TRANSFER AGAIN  :       :       2.BACK       :      :       3.EXIT       :\n");
                                printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::"); putchar('\n'); putchar('\n');
                                printf("                             ::::::::::::::::::::::\n");
                                printf("                             :   4.PRINT RECEIPT  :\n");
                                printf("                             ::::::::::::::::::::::");



                                printf("\n\nAction: "); scanf("%d", &action); getchar();
                                }while((action != 1 && action != 2)&&(action != 3 && action != 4 ));
                                    if(action == 1)
                                    {
                                      system("cls");  goto checktrans;
                                    }
                                    if(action == 2)
                                    {
                                        goto transmenu;
                                    }
                                    if(action == 3)
                                    {
                                      system("cls");
                                                 printf("\t\t\t\t   TRANSFER(CHECKING)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   TRANSFER(CHECKING)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);
                                    }
                                    if(action == 4)
                                    {
                                         printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("TRANSACTION TYPE: TRANSFER");
                                            printf("\nAMOUNT TRANSFERRED: $%.2f\n\n", trans);
                                            printf("FROM ACCOUNT: SAVINGS");
                                            printf("\nTO ACCOUNT: CHECKING\n\n");
                                            printf("SAVINGS BALANCE: $%.2f\n",a.save);
                                            printf("CHECKING BALANCE: $%.2f\n",a.check);


                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);

                                    }

                            }if(action == 2)
                            {   savetrans:
                                do{
                                action = '\0';
                                printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");
                                printf("\t\t\t\t TRANSFER(SAVINGS)\n");
                                printf("_______________________________________________________________________________\n\n\n");

                                printf("          ::::::::::::::::::::::::\n");
                                printf("FROM --->     CHECKING: $%.2f \n",a.check);
                                printf("          ::::::::::::::::::::::::\n");

                                    putchar('\n'); putchar('\n');

                                printf("          ::::::::::::::::::::::::\n");
                                printf("TO   --->     SAVINGS: $%.2f \n",a.save);
                                printf("          ::::::::::::::::::::::::\n");
                                putchar('\n'); putchar('\n');

                                printf("AMOUNT TRANFERRED: $");scanf("%f", &trans);getchar();
                                }while(trans > a.check);
                                 savetotal = a.save + trans;
                                 a.save = savetotal;
                                 checktotal = a.check - trans;
                                 a.check = checktotal;

                                 printf("One Moment Please");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);putchar('\n');putchar('\n'); printf("TRANSFER COMPLETED!"); Sleep(4000);
                                 do{
                                        system("cls");
                                 printf("\t\t\t\t TRANSFER(SAVINGS)\n");
                                printf("_______________________________________________________________________________\n\n\n");

                                printf("          ::::::::::::::::::::::::\n");
                                printf("FROM --->     CHECKING: $%.2f \n",a.check);
                                printf("          ::::::::::::::::::::::::\n");

                                    putchar('\n'); putchar('\n');

                                printf("          ::::::::::::::::::::::::\n");
                                printf("TO   --->     SAVINGS: $%.2f \n",a.save);
                                printf("          ::::::::::::::::::::::::\n");
                                putchar('\n'); putchar('\n');putchar('\n');
                                printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                                printf("\n: 1. TRANSFER AGAIN  :       :       2.BACK       :      :       3.EXIT       :\n");
                                printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::"); putchar('\n'); putchar('\n');
                                printf("                             ::::::::::::::::::::::\n");
                                printf("                             :   4.PRINT RECEIPT  :\n");
                                printf("                             ::::::::::::::::::::::");


                                printf("\n\nAction: "); scanf("%d", &action); getchar();
                                }while((action != 1 && action != 2)&&(action != 3 && action != 4 ));
                                    if(action == 1)
                                    {
                                        system("cls");goto savetrans;
                                    }
                                    if(action == 2)
                                    {
                                        goto transmenu;
                                    }
                                    if(action == 3)
                                    {
                                        system("cls");
                                                 printf("\t\t\t\t   TRANSFER(SAVINGS)\n");
                                                 printf("_______________________________________________________________________________\n\n\n");
                                                 printf("                                Logging Off");
                                                 for(int dot = 0; dot < 3; dot++)
                                                  {
                                                   Sleep(1500); printf(".");
                                                  }
                                                Sleep(1500);system("cls");
                                                printf("\t\t\t\t   TRANSFER(SAVINGS)\n");
                                                printf("_______________________________________________________________________________\n\n\n");
                                                printf("                            Please Collect Card\n"); exit(0);
                                    }
                                    if(action == 4)
                                    {
                                         printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("TRANSACTION TYPE: TRANSFER");
                                            printf("\nAMOUNT TRANSFERRED: $%.2f\n\n", trans);
                                            printf("FROM ACCOUNT: CHECKING");
                                            printf("\nTO ACCOUNT: SAVINGS\n\n");

                                            printf("CHECKING BALANCE: $%.2f\n",a.check);
                                            printf("SAVINGS BALANCE: $%.2f\n",a.save);

                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);

                                    }
                            }
                            if(action == 3)
                            {
                                action = '\0'; goto mainmenu; break;
                            }
                            if(action == 4)
                            {
                               system("cls");

                                        printf("\t\t\t\t TRANSFER\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t TRANSFER\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);
                            }
                                break;
                case(4):
                          balance:
                              do{
                                printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);system("cls");action = '\0';
                          printf("\t\t\t      BALANCE INQUIRY\n");
                          printf("_______________________________________________________________________________\n\n\n");
                          printf(":::::::::::::::::::::\n");
                          printf(":     1.VIEW        :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');
                          putchar('\n');
                          printf(":::::::::::::::::::::\n");
                          printf(":     2.PRINT       :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');
                          putchar('\n');
                          printf(":::::::::::::::::::::\n");
                          printf(":      3.BACK       :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');
                          putchar('\n');
                          printf(":::::::::::::::::::::\n");
                          printf(":      4.EXIT       :\n");
                          printf(":::::::::::::::::::::\n");
                          putchar('\n');putchar('\n');
                         printf("Action: "); scanf("%d", &action); getchar();
                         }while((action != 1 && action != 2) && (action != 3 && action != 4));
                          if(action == 1)
                          {
                          do{
                                system("cls");
                          action = '\0';
                          printf("\t\t\t      BALANCE INQUIRY\n\n\n");
                          printf("_______________________________________________________________________________\n\n\n");
                          printf("CARD NUMBER: ");
                          for(int i = 0; i < strlen(a.debnum)-4; i++)
                            {
                            printf("X");
                            }

                          for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                            {
                            printf("%c",a.debnum[i]);
                            }
                            putchar('\n'); putchar('\n');putchar('\n');
                            printf("CHECKING AMOUNT    =      $%.2f\n", a.check);
                            printf("SAVINGS  AMOUNT    =      $%.2f\n", a.save);
                            putchar('\n'); putchar('\n');putchar('\n');
                            printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                            printf("\n: 1.PRINT RECEIPT    :       :       2.BACK       :      :       3.EXIT       :\n");
                            printf("::::::::::::::::::::::       ::::::::::::::::::::::      ::::::::::::::::::::::");
                            putchar('\n');putchar('\n');putchar('\n');
                            printf("Action: "); scanf("%d", &action); getchar();
                            }while((action != 1 && action !=2) && action != 3);
                                if(action == 1)
                                {
                                    printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                     int a1,b2,c3,d4,e5,f6,g7;
                                        a1=(rand() % 8) + 1;
                                        b2=(rand() % 8) + 1;
                                        c3=(rand() % 8) + 1;
                                        d4=(rand() % 8) + 1;
                                        e5=(rand() % 8) + 1;
                                        f6=(rand() % 8) + 1;
                                        g7=(rand() % 8) + 1;
                                        int ser; ser = (rand() % 7000) + 1;
                                        system("cls");

                                        printf("\t\t\t       %s\n\n\n", toupper(bank));
                                        printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                        printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                        putchar('\n');putchar('\n');putchar('\n');
                                        printf("\nLOCATION: %s", toupper(a.address1));
                                        printf("\nCARD NUMBER:");
                                        for(int i = 0; i < strlen(a.debnum)-4; i++)
                                        {
                                         printf("X");
                                        }

                                        for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                        {
                                            printf("%c",a.debnum[i]);
                                        }
                                        putchar('\n');putchar('\n');
                                        printf("Ser. No. %d\n", ser);
                                        printf("CHECKING AMOUNT: $%.2f",a.check);
                                        printf("\nSAVINGS AMOUNT: $%.2f",a.save);
                                        putchar('\n');putchar('\n');putchar('\n');
                                        printf("                          ************************\n");
                                        printf("                                 THANK YOU\n");
                                        printf("                             HAVE A GREAT DAY\n");
                                        printf("                          ************************\n");

                                        exit(0);

                                           }

                                            if(action == 2)
                                            {
                                                goto balance;
                                            }
                                            if(action == 3)
                                            {
                                                  system("cls");

                                        printf("\t\t\t\t BALANCE INQUIRY\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t BALANCE INQUIRY\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);

                                            }
                          }
                                    if(action == 2)
                                    {

                                       printf("Loading");
                                             for(int i = 0; i < 3; i++)
                                             {
                                              Sleep(1200);printf(".");
                                            }

                                           Sleep(500);
                                          int a1,b2,c3,d4,e5,f6,g7;
                                            a1=(rand() % 8) + 1;
                                            b2=(rand() % 8) + 1;
                                            c3=(rand() % 8) + 1;
                                            d4=(rand() % 8) + 1;
                                            e5=(rand() % 8) + 1;
                                            f6=(rand() % 8) + 1;
                                            g7=(rand() % 8) + 1;
                                            int ser; ser = (rand() % 7000) + 1;
                                            system("cls");

                                            printf("\t\t\t       %s\n\n\n", toupper(bank));
                                            printf("                        For Customer Service Call\n\t\t\t      1-800-%d%d%d-%d%d%d%d",a1,b2,c3,d4,e5,f6,g7);
                                            printf("\n\n\n                              %s\n\t\t\t   More Than 17,000 ATMs\n",bank);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("\nLOCATION: %s", toupper(a.address1));
                                            printf("\nCARD NUMBER:");
                                            for(int i = 0; i < strlen(a.debnum)-4; i++)
                                            {
                                             printf("X");
                                            }

                                            for(int i = strlen(a.debnum)-4; i< strlen(a.debnum); i++)
                                            {
                                                printf("%c",a.debnum[i]);
                                            }
                                            putchar('\n');putchar('\n');
                                            printf("Ser. No. %d\n", ser);
                                            printf("CHECKING AMOUNT: $%.2f",a.check);
                                            printf("\nSAVINGS AMOUNT: $%.2f",a.save);
                                            putchar('\n');putchar('\n');putchar('\n');
                                            printf("                          ************************\n");
                                            printf("                                 THANK YOU\n");
                                            printf("                             HAVE A GREAT DAY\n");
                                            printf("                          ************************\n");

                                            exit(0);
                                    }
                            if(action == 3)
                            {
                                action = '\0'; goto mainmenu; break;
                            }
                            if(action == 4)
                            {
                               system("cls");

                                        printf("\t\t\t\t BALANCE INQUIRY\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t BALANCE INQUIRY\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);
                            }
                                        break;
                case(5):   action = '\0';system("cls"); goto atmmenu; break;

                case(6):  system("cls");

                                        printf("\t\t\t\t  DEBIT CARD\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t  DEBIT CARD\n");
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);


         }

        }if (action == 3)
        {
            system("cls");

                                        printf("\t\t\t\t   %s\n", bank);
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                                Logging Off");
                                        for(int dot = 0; dot < 3; dot++)
                                         {
                                            Sleep(1500); printf(".");
                                         }

                                        Sleep(1500);system("cls");
                                        printf("\t\t\t\t   %s\n", bank);
                                        printf("_______________________________________________________________________________\n\n\n");
                                        printf("                            Please Collect Card\n"); exit(0);

        }




return ATM1;

}








