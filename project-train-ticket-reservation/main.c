/*The project is about the railway ticket booking system. This will include three
destinations: Dhaka,Chittagong and Panchagarh. It takes passengers name and
age . It will use
different functions for booking, payment and printing of the ticket. It accepts
payment  with mobile banking in bKah,Rocket and Nagad and cash . It will use filling to save the price of the tickets and to
save the passenger information. At the end it prints the ticket. . The programming
language of the system is C. The program has been created on Visual Studio Code
and the operating system is Linux.*/


#include <stdio.h>
#include <string.h>

 
int option();
int location();
int travel_class();
int count_ticket();
int payment();
int ticket_price(int class, int location, int count);
void try();
 
struct passenger_details
{
 char first_name[30];
 char last_name[30];
 int age;
};
 
 
 
int main () {
 int opt, loc, class, ticket_count, paid, price = 0;
 char destination[20];
 FILE *fp;
 printf("=============WELCOME TO BANGLADESH RAILWAY============= \n");
 opt = option();
 if (opt == 0)
   return 0;
 loc = location();
 if (loc == 0)
   return 0;
 if (loc == 1) {
   strcpy(destination, "Dhaka");
 } else if (loc == 2)
 {
   strcpy(destination, "Chittagong");
 } else if (loc == 3)
 {
   strcpy(destination, "Panchagarh");
 }
 
 class = travel_class();
 if (class == 0)
   return 0;
 ticket_count = count_ticket();
 if (ticket_count == 0)
   return 0;
  paid = payment();
 
 if (paid == 0) {
   return 0;
 }
  price = ticket_price(class, loc, ticket_count);
  struct passenger_details passenger[ticket_count];
 
 for (int i = 0; i < ticket_count; i++)
 {
   printf("Enter first name of passenger %d: ", i+1);
   scanf("%s", passenger[i].first_name);
   printf("\n");
   printf("Enter last name of passenger %d: ", i+1);
   scanf("%s", passenger[i].last_name);
   printf("\n");
   printf("Enter age of passenger %d: ", i+1);
   scanf("%d", passenger[i].age);
   printf("\n");
   if (passenger[i].age < 1 || passenger[i].age > 120) {
     try();
     return 0;
   }
 }
 
  char filename[30] = "Ticket.txt";
 
 fp = fopen(filename, "w+");
 
 fprintf(fp, "From: Khulna To: %s \n", destination);
 fprintf(fp, "Fair: %d \n", price);
 fprintf(fp, "Passangers: %d \n", ticket_count);
 for (int i = 0; i < ticket_count; i++)
 {
   fprintf(fp, "\n");
   fprintf(fp, "Name: %s %s \n", passenger[i].first_name, passenger[i].last_name);
   fprintf(fp, "Age %d \n", passenger[i].age);
 }
 fclose(fp);
 printf("Your ticket is confirmed :D \n");
}
 
int option () {
 int opt = 0;
 printf("Select an option: \n");
 printf("1.Book a ticket.\n");
 printf("2.Exit.\n");
 scanf("%d", &opt);
 if (opt == 1)
   return opt;
 try();
 return 0;
}
 
int location () {
 int loc = 0;
 printf("Where you want to travel: \n");
 printf("1. Dhaka \n");
 printf("2. Chittagong \n");
 printf("3. Panchagarh \n");
 scanf("%d", &loc);
 if (loc == 1 || loc == 2 || loc == 3)
   return loc;
 try();
 return 0;
}
 
int travel_class () {
 int class = 0;
 printf("Which class you want to journey?: \n");
 printf("1. Business \n");
 printf("2. Economy \n");
 scanf("%d", &class);
 
 if (class == 1 || class == 2)
   return class;
 try();
 return 0;
}
 
int count_ticket () {
 int count = 0;
 printf("How many tickets do you want? (max: 4): \n");
 scanf("%d", &count);
 if (count == 1 || count == 2 || count == 3 || count == 4)
   return count;
 try();
 return 0;
}
 
int payment () {
 int m, mobile_banking, mobile_number = 0;
 char password[20];
 printf("Please choose your payment method \n");
 printf("1. Cash \n");
 printf("2. Mobile Banking \n");
 scanf("%d", &m);
 printf("\n");
 if (m == 1) {
   return m;
 }
 else if (m == 2) {
   printf("Which mobile banking you want to use?: \n");
   printf("1. BKASH \n");
   printf("2. Rocket \n");
   printf("3. Nogad \n");
   scanf("%d", &mobile_banking);
   printf("\n");
   if (mobile_banking == 1 || mobile_banking == 2 || mobile_banking == 3) {
     printf("Please Enter Your Mobile Banking Number: \n");
     scanf("%d", &mobile_number);
     printf("Please Enter Your Mobile Banking Password: \n");
     scanf("%s", password);
     return 1;
   }
   try();
   return 0;
 } 
 try();
 return 0;
}
 
int ticket_price(int class, int location, int count) {
 // business, dhaka
 if(class == 1 && location == 1)
   return 450 * count;
 // business, chittagong
 if(class == 1 && location == 2)
   return 450 * count;
 // business, panchagarh
 if(class == 1 && location == 3)
   return 560 * count;
 // economy, dhaka
 if(class == 2 && location == 1)
   return 850 * count;
 // economy, chittagong
 if(class == 2 && location == 2)
   return 850 * count;
 // economy, panchagarh
 if(class == 2 && location == 3)
   return 1500 * count;
}
 
void try () {
 printf("Please Try again... \n");
}
