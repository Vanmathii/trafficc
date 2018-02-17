#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
int t1,t2,t3,tuser;
int destiny,ch,d;
clrscr();
//getting input from user
printf("\t\t\t\tWELCOME TO AVADI");
printf("\n No of vehicles in the opposite signal ");
scanf("%d",&n1);
printf("\n No of vehicles present in the rightside ");
scanf("%d",&n2);
printf("\n No of vehicles present in the lestside ");
scanf("%d",&n3);
printf("\n\tkindly tell your destiny");
printf("\nsignal 1: Thiruvallur");
printf("\nsignal 2: Gandhi nagar");
printf("\nsignal 3: Ambattur");
printf("\nsignal 4: Poonamalle");
//getting user destiny place
scanf("%d",&destiny);
switch(destiny)
{
case 1:
printf("\t\t Thiruvallur welcomes you ");
break;
case 2:
printf("\t\t Gandhi nagarr welcomes you");
break;
case 3:
printf("\t\t Ambattur welcomes you");
break;
case 4:
printf("\t\t Poonamalle welcomes you");
break;
default:
printf("\n Kindly check your destiny");
break;
}
//calculating the time limit for clearing first signal
if(n1>100)
{
t1=5;
printf("\nFirst signal traffic is too heavy");
}
if(n1>=21 && n1<100)
{
t1=3;
printf("\nFirst signal traffic is heavy");
}
else if(n1>=1 && n1<=20)
{
t1=1;
printf("\nFirst signal traffic is moderate");
}
else if(n1==0)
{
t1=0;
printf("\nNo traffic in the first signal");
}
//calculating the time limit for clearing second signal
if(n2>100)
{
t2=5;
printf("\nSecond signal traffic is too heavy");
}
if(n2>=21 && n2<=100)
{
t2=3;
printf("\nSecond signal traffic is heavy ");
}
else if(n2>=1 && n2<=20)
{
t2=1;
printf("\nSecond signal traffic is moderate");
}
else if(n2==0)
{
t2=0;
printf("\nNo traffic in the second signal");
}
// calculating time limit for clearing third signal
if(n3>100)
{
t3=5;
printf("\n Third signal traffic is too heavy");
}
if(n3>=21 && n3<100)
{
t3=3;
printf("\nThird signal traffic is heavy");
}
else if(n3>=1 && n3<=20)
{
t3=1;
printf("\nThird signal traffic is moderate");
}
else if(n3==0)
{
t3=0;
printf("\nNo traffic in the third signal");
}
printf("\nsignal 1: Thiruvallur route");
printf("\nsignal 2: Gandhinagar route");
printf("\nsignal 3: Ambattur route");
printf("\nsignal 4: poonamalle route");
printf("\nenter the signal in which you are present");
scanf("%d",&ch);
printf("\n Enter the distance of your vehicle from the signal");
scanf("%d",&d);
switch (ch)
{
case 1:
if(d==1)
{
tuser=t1+0;
}
else if(d>=20)
{
tuser=t1+1;
}
break;
case 2:
if(d==1)
{
tuser=t1+t2+0;
}
else if(d>=20)
{
tuser=t1+t2+1;
}
break;
case 3:
if(d==1)
{
tuser=t1+t2+t3+0;
}
else if(d>=20)
{
tuser=t1+t2+t3+1;
}
break;
case 4:
if(d==1)
{
tuser=t1+0;
}
else if(d>=20)
{
tuser=t1+1;
}
}
//estimated time for the user signal to move
printf("\nDear user the traffic conjustion is analysed and you've to wait for %d mins",tuser);
getch();
}




