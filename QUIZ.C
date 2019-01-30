
#include<stdio.h>
#include<conio.h>
main()
{
int c[45],i,a[42],b,tot=0,d[45],j;
clrscr();
for(i=0;i<=20;i++)
{
textcolor(GREEN+BLINK);
gotoxy(28+i,1);
cprintf("\n*");
}
gotoxy(30,4);
textcolor(BLUE);
cprintf("Wel come to \"KBC\"");
for(i=0;i<=20;i++)
{
textcolor(GREEN+BLINK);
gotoxy(28+i,5);
cprintf("\n*");
}
{
textcolor(WHITE);
printf("\n\n\n\nInstructions :");
printf("\n1.You have to attempt all the question ,its compulsory.");
printf("\n2.There are 42 questions in this paper.");
printf("\n3.You have 45 minutes to copmlete your test.");
printf("\n4.Always press enter for next question.");
printf("\n5.You will get 2 marks for each correct answer.");
printf("\n6.you will get -1 marks for each incorrect answer.");
printf("\n7.Every question has only single correct option.");
printf("\n8.At the end of the test you will get your result.");
printf("\n9.You can't skip any question");
printf("\n\n\n\n\n\t\tTo start test press 1 or to cancel press 2 : ");
scanf("%d",&b);
}
if(b==1)
{
clrscr();
textcolor(WHITE);
printf("\n\n1.Matter written in printf() is known as...");
printf("\n\n\n1.escape sequence\t\t\t2.Displaying line\n3.format string\t\t\t\t4.Conversion string");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[1]);
if(c[1]==3)
{
a[0]=2;
}
else
{
a[0]=-1;
}
d[1]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n\n2.The word \"Computer Science\" is written in");
printf("\n\n\n1.Camel notation\t\t\t2.Special word\n3.Normal word\t\t\t\t4.Special notation");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[2]);
if(c[2]==1)
{
a[1]=2;
}
else
{
a[1]=-1;
}
d[2]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n\n3.\\n is known as");
printf("\n\n\n1.Format string\t\t\t\t2.Escape sequence\n3.letral text\t\t\t\t4.Conversion specifier");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[3]);
if(c[3]==2)
{
a[2]=2;
}
else
{
a[2]=-1;
}
d[3]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n\n4.printf() is a funtion of");
printf("\n\n\n1.stdio.h\t\t\t\t2.conio.h\n3.main()\t\t\t\t4.independent");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[4]);
if(c[4]==1)
{
a[3]=2;
}
else
{
a[3]=-1;
}
d[4]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n\n5.getch is a funtion of");
printf("\n\n\n1.stdio.h\t\t\t\t2.conio.h\n3.main()\t\t\t\t4.independent");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[5]);
if(c[5]==2)
{
a[4]=2;
}
else
{
a[4]=-1;
}
d[5]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n\n6.In nesteded if how many if can be used");
printf("\n\n\n1.  5\t\t\t\t2.  9\n3.  7\t\t\t\t4.  6");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[6]);
if(c[6]==3)
{
a[5]=2;
}
else
{
a[5]=-1;
}
d[6]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n7.Range of int is : ");
printf("\n\n\n1. -32768 to 32767\t\t\t\t2.  0 to 65535\n3. -2147483648 to 2147438647\t\t\t4.  0 to 4294967295");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[7]);
if(c[7]==1)
{
a[6]=2;
}
else
{
a[6]=-1;
}
d[7]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n8.Which of the following variable name is illegal");
printf("\n\n\n1.Percent\t\t\t\t\t2.y2x5_fg7h\n3.savings#account\t\t\t\t4.9winter");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[8]);
if(c[8]==3 || c[8]==4)
{
a[7]=2;
}
else
{
a[7]=-1;
}
d[8]=(3,4);
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n9.What is the size of an int variable");
printf("\n\n\n1.  1 bytes\t\t\t\t2.  2 bytes\n3.  4 bytes\t\t\t\t4.  8 bytes");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[9]);
if(c[9]==2)
{
a[8]=2;
}
else
{
a[8]=-1;
}
d[9]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n10.What do you mean by block ?");
printf("\n\n\n1.null statement\t\t\t\t2.compound statement\n3.single statement\t\t\t\t4.set of statements");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[10]);
if(c[10]==2)
{
a[9]=2;
}
else
{
a[9]=-1;
}
d[10]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n11.Which function is used to input value");
printf("\n\n\n1.printf()\t\t\t\t2.puts()\n3.scanf()\t\t\t\t4.int");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[11]);
if(c[11]==3)
{
a[10]=2;
}
else
{
a[10]=-1;
}
d[11]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n12.\\b is used for");
printf("\n\n\n1.Bell alert\t\t\t\t2.Backslash\n3.Question mark\t\t\t\t4.Backspace");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[12]);
if(c[12]==4)
{
a[11]=2;
}
else
{
a[11]=-1;
}
d[12]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n13.How many datatype are there in c programming.");
printf("\n\n\n1. 2\t\t\t\t\t2. 4\n3. 5\t\t\t\t\t4. 6");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[13]);
if(c[13]==1)
{
a[12]=2;
}
else
{
a[12]=-1;
}
d[13]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("14.Which operator has first precedence ?");
printf("\n\n\n1. -\t\t\t\t\t2.--\n3.++\t\t\t\t\t4.+");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[14]);
if(c[14]==3 || c[14]==2)
{
a[13]=2;
}
else
{
a[13]=-1;
}
d[14]=(2,3);
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n15.How many keywords are there in C language ?");
printf("\n\n\n1. 28\t\t\t\t\t2. 38\n3. 32\t\t\t\t\t4. 42");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[15]);
if(c[15]==3)
{
a[14]=2;
}
else
{
a[14]=-1;
}
d[15]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n16.Which relation operator has first precedence ?");
printf("\n\n\n1.<=\t\t\t\t\t2.==\n3.!=\t\t\t\t\t4.>=");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[16]);
if(c[16]==1 || c[16]==4)
{
a[15]=2;
}
else
{
a[15]=-1;
}
d[16]=(1,4);
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n17.How many values can be assinged in one dimentional array");
printf("\n\n\n1. 355\t\t\t\t\t2. 255\n3. 356\t\t\t\t\t4. 256");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[17]);
if(c[17]==4)
{
a[16]=2;
}
else
{
a[16]=-1;
}
d[17]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n18.The array \"arr[2][2][2]\" is...");
printf("\n\n\n1.one dimentional\t\t\t\t2.three dimentional\n3.two dimentional\t\t\t\t4.Multi dimentional");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[18]);
if(c[18]==4)
{
a[17]=2;
}
else
{
a[17]=-1;
}
d[18]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n19.How many type of array are there in C language");
printf("\n\n\n1. 4\t\t\t\t\t2. 3\n3. 2\t\t\t\t\t4. 1");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[19]);
if(c[19]==2)
{
a[18]=2;
}
else
{
a[18]=-1;
}
d[19]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n20.How many cases can a switch have(including default) in C language ?");
printf("\n\n\n1. 8\t\t\t\t\t2. 7\n3. 6\t\t\t\t\t4. as I want");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[20]);
if(c[20]==1)
{
a[19]=2;
}
else
{
a[19]=-1;
}
d[20]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n21.IF can be written in __ types in C laguage");
printf("\n\n\n1. 4\t\t\t\t\t2. 3\n3. 5\t\t\t\t\t4. 2");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[21]);
if(c[21]==1)
{
a[20]=2;
}
else
{
a[20]=-1;
}
d[21]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n22.How many operator are there in C language ?");
printf("\n\n\n1. 8\t\t\t\t\t2. 7\n3. 9\t\t\t\t\t4. 6");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[22]);
if(c[22]==1)
{
a[21]=2;
}
else
{
a[21]=-1;
}
d[22]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n23.Datatypes are denoted by.....");
printf("\n\n\n1.Format string\t\t\t\t\t2.Space sequence\n3.Conversion specifier\t\t\t\t4.none of these");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[23]);
if(c[23]==3)
{
a[22]=2;
}
else
{
a[22]=-1;
}
d[23]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n24.In which datatype switch does not work properly ?");
printf("\n\n\n1.int\t\t\t\t\t2.float\n3.char\t\t\t\t\t4.none of these");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[24]);
if(c[24]==2)
{
a[23]=2;
}
else
{
a[23]=-1;
}
d[24]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n25.How many loops are there in C language");
printf("\n\n\n1. 0\t\t\t\t\t2. 1\n3. 2\t\t\t\t\t4. 3");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[25]);
if(c[25]==4)
{
a[24]=2;
}
else
{
a[24]=-1;
}
d[25]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n26.Do while loop gives output __ times without checking conditions.");
printf("\n\n\n1. 0\t\t\t\t\t2. 1\n3. 2\t\t\t\t\t4. 3");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[26]);
if(c[26]==2)
{
a[25]=2;
}
else
{
a[25]=-1;
}
d[26]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n27.How many ascii codes are there in C language ?");
printf("\n\n\n1. 256\t\t\t\t\t2. 255\n3. 356\t\t\t\t\t4. 355");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[27]);
if(c[27]==1)
{
a[26]=2;
}
else
{
a[26]=-1;
}
d[27]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n28.Which is known as conditional operator ?");
printf("\n\n\n1. <=\t\t\t\t\t2. ==\n3. ++,--\t\t\t\t4. ?,:");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[28]);
if(c[28]==4)
{
a[27]=2;
}
else
{
a[27]=-1;
}
d[28]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n29.How many colors are there in C language ?");
printf("\n\n\n1. 10\t\t\t\t\t2. 12\n3. 14 \t\t\t\t\t4. 16");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[29]);
if(c[29]==4)
{
a[28]=2;
}
else
{
a[28]=-1;
}
d[29]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n30.Which command is not used in cprintf ?");
printf("\n\n\n1.Escape sequence\t\t\t2.Format string\n3.Conversion specifier\t\t\t4.None of these");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[30]);
if(c[30]==1)
{
a[29]=2;
}
else
{
a[29]=-1;
}
d[30]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n31.How many work can be performed in textcolor() ?");
printf("\n\n\n1. 4\t\t\t\t\t2. 3\n3. 2\t\t\t\t\t4. 1");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[31]);
if(c[31]==3)
{
a[30]=2;
}
else
{
a[30]=-1;
}
d[31]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n32.gotoxy command is used to printf line at ");
printf("\n\n\n1.Right\t\t\t\t2.Up\n3.Down\t\t\t\t4.My choice");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[32]);
if(c[32]==4)
{
a[31]=2;
}
else
{
a[31]=-1;
}
d[32]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n33.How many type of variable are there in C language");
printf("\n\n\n1. 2\t\t\t\t\t2. 4\n3. 6\t\t\t\t\t4. 8");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[33]);
if(c[33]==2)
{
a[32]=2;
}
else
{
a[32]=-1;
}
d[33]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n34.How many register variable can be decleared in C language ?");
printf("\n\n\n1. 14\t\t\t\t\t2. 12\n3. 16\t\t\t\t\t4. 10");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[34]);
if(c[34]==1)
{
a[33]=2;
}
else
{
a[33]=-1;
}
d[34]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n35.Associativity of functiuon call '()' is...");
printf("\n\n\n1.Left to right\t\t\t2.Right to left\n3.Up to down\t\t\t4.Down to up");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[35]);
if(c[35]==1)
{
a[34]=2;
}
else
{
a[34]=-1;
}
d[35]=1;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n36.Associativity of Logical negation '!' is...");
printf("\n\n\n1.Left to right\t\t\t2.Right to left\n3.Up to down\t\t\tDown to up");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[36]);
if(c[36]==2)
{
a[35]=2;
}
else
{
a[35]=-1;
}
d[36]=2;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n37.Associativity of Modulus '%' is...");
printf("\n\n\n1.Down to up\t\t\t2.Up to down\n3.Right to left\t\t\t4.Left to right");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[37]);
if(c[37]==4)
{
a[36]=2;
}
else
{
a[36]=-1;
}
d[37]=4;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n38.Associativity of increment and decrement operator '++,--' is...");
printf("\n\n\n1.Down to up\t\t\t2.Up to down\n3.Right to left\t\t\t4.Left to right");
printf("\n\n\nEnter your choice : ");
scanf("%d",&c[38]);
if(c[38]==3)
{
a[37]=2;
}
else
{
a[37]=-1;
}
d[38]=3;
printf("\nPress enter for next question");
getch();
clrscr();
printf("\n39.A variable name can be up to...");
printf("\n\n\n1. 31\t\t\t\t\t2. 32\n3. 33\t\t\t\t\t4.34");
printf("\n\nEnter your choice : ");
scanf("%d",&c[39]);
if(c[39]==2)
{
a[38]=2;
}
else
{
a[38]=-1;
}
d[39]=2;
printf("\npress enter for next question.");
getch();
clrscr();
printf("\n40.In C language white space refers to...");
printf("\n\n\n1.Spaces\t\t\t\t2.Tabs\n3.Blank lines\t\t\t\t4.All of the above");
printf("\n\nEnter your choice : ");
scanf("%d",&c[40]);
if(c[40]==4)
{
a[39]=2;
}
else
{
a[39]=-1;
}
d[40]=4;
printf("\npress enter for next question.");
getch();
clrscr();
printf("\n41.Which operator will have first precedence");
printf("\n\n\n1. +\t\t\t\t\t2. /\n3. ++\t\t\t\t\t4. *");
printf("\n\nEnter your choice : ");
scanf("%d",&c[41]);
if(c[41]==3)
{
a[40]=2;
}
else
{
a[40]=-1;
}
d[40]=3;
printf("\npress enter for next question.");
getch();
clrscr();
printf("\n42.How many type of logical operator are in C language");
printf("\n\n\n1. 2\t\t\t\t\t2. 3\n3. 4\t\t\t\t\t4. 5");
printf("\n\nEnter your choice : ");
scanf("%d",&c[42]);
if(c[42]==2)
{
a[41]=2;
}
else
{
a[41]=-1;
}
d[42]=2;
printf("\npress enter for next question.");
getch();
clrscr();
{
clrscr();
printf(" no.   Corect     you entered ³\n");
for(i=1;i<=11;i++)
{
printf(" %d\t ",i);
printf("%d\t\t",d[i]);
printf(" %d\t\t \n",c[i]);
}
getch();
}
{
clrscr();
printf(" no.   Corect     you entered \n");
for(i=12;i<=23;i++)
{
printf(" %d\t ",i);
printf("%d\t\t",d[i]);
printf(" %d\t\t \n",c[i]);
}
getch();
}
{
clrscr();
printf(" no.   Corect     you entered \n");
for(i=24;i<=35;i++)
{
printf(" %d \t",i);
printf("%d\t\t",d[i]);
printf(" %d\t\t \n",c[i]);
}
getch();
}
{
clrscr();
printf(" no.   Corect     you entered \n");
for(i=36;i<=47;i++)
{
printf(" %d\t   ",i);
printf("%d\t\t",d[i]);
printf(" %d\t\t \n",c[i]);
}
getch();
}

{
clrscr();
gotoxy(30,12);
textcolor(BLUE);
printf("your cut off is 70 marks");
getch();
}
{
clrscr();
textcolor(GREEN);
gotoxy(30,12);
cprintf("Thanks for giving test\n");
gotoxy(30,13);
cprintf("press enter for your result");
getch();
}
{
clrscr();
for(i=0;i<=41;i++)
{
tot=tot+a[i];
}
gotoxy(30,12);
printf("You obtain %d marks in this test",tot);
printf("\n\t\tpress enter to check you are qualified or not");
getch();
}
if(tot>=60)
{
clrscr();
gotoxy(30,12);
textcolor(BLUE);
cprintf("You are qualified in this test");
}
else
{
clrscr();
gotoxy(30,12);
textcolor(RED);
cprintf("You are not qualified in this test");
}
}
else
{
clrscr();
textcolor(RED);
gotoxy(36,12);
cprintf("thank you");
}
getch();
return 0;
}