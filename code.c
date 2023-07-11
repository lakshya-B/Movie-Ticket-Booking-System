#include <stdio.h>
#include <stdlib.h>
int seats[4][3][10][9];
int l=0;

struct person{
	char name1[15];
	char name2[15];
	long int phone;
	int t;
	int y;
	int z;
	char seat[25][5];
	int ticketnum;
	float amount ;
};

struct person p[25];

void seatingPlan()
{	
	for(int i=0;i<10;i++)
	{
		if(i==0)
		{
			printf("\n");
			printf("---------------------------------------BOX1 300.00Rs/- ------------------------------------------\n");
			int Snum = 0;
			printf("A\t");
			for(int j=0;j<9;j++)
			{
				if(seats[p[l].y][p[l].z][i][j]==0)
				{
					Snum = Snum + 1;
					printf("|%d_|",Snum);
				}
			
				else if(seats[p[l].y][p[l].z][i][j]==7)
				{
					printf("\t");
				}
			
				else 
				{
					Snum = Snum + 1;
					printf("|*_|");
				}
			}	
		}
	
				if(i==1)
				{
					printf("\n");
					printf("---------------------------------------BOX2 300.00Rs/- ------------------------------------------\n");
					int Snum = 0;
					printf("B\t");
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
			
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
			
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}	
				}
	
				if(i==2)
				{
					printf("\n");
					printf("---------------------------------------DIAMOND 400.00Rs/- ------------------------------------------\n");
					printf("C\t");
					int Snum = 0;
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
			
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}	
				}
				
				if(i==3)
				{
					int Snum=0;
					printf("\n");
					printf("---------------------------------------PLATINUM 250.00Rs/- ------------------------------------------\n");
					printf("D\t");
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}	
				}
				
				if(i==4)
				{
					int Snum=0;
					printf("E\t");
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}	
				}
				
				if(i==5)
				{
					printf("\n");
					printf("---------------------------------------GOLD 200.00Rs/- ------------------------------------------\n");
					int Snum = 0;
					printf("F\t");
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}
						
				}
				
				if(i==6)
				{	int Snum=0;
					printf("G\t");
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}
						
				}
				
				if(i==7)
				{
					int Snum=0;
					printf("H\t");
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}
						
				}
				
				if(i==8)
				{
					printf("\n");
					printf("---------------------------------------SILVER 150.00Rs/- ------------------------------------------\n");
					printf("I\t");
					int Snum = 0;
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}	
				}
				
				if(i==9)
				{   
					printf("J\t");
					int Snum=0;
					for(int j=0;j<9;j++)
					{
						if(seats[p[l].y][p[l].z][i][j]==0)
						{
							Snum = Snum + 1;
							printf("|%d_|",Snum);
						}
						
						else if(seats[p[l].y][p[l].z][i][j]==7)
						{
							printf("\t");
						}
						
						else 
						{
							Snum = Snum + 1;
							printf("|*_|");
						}
					}	
				}
				
			printf("\n");
			}
		printf("\n");
		printf("\t\t\t\t ALL EYES THIS WAY PLEASE\n");
}

void ticketCost(int l)
{
	p[l].amount = 0.00;
	p[l].ticketnum = l;
	printf("PLEASE ENTER YOUR FIRST NAME\n");
	scanf("%s",p[l].name1);
	printf("PLEASE ENTER YOUR LAST NAME\n");
	scanf("%s",p[l].name2);
	printf("PHONE NUMBER\n");
	scanf("%ld",&p[l].phone);
	
	FILE * fp;
	fp = fopen("MOVIES.txt","r");
	if (fp == NULL)
	{
		printf("SORRY FOR INCONVINIENCE! PLEASE TRY AGAIN AFTER EXITING\n");
	}
	else
	{
		char c;
		c = fgetc(fp);
		while(c!=EOF)
		{
			printf("%c",c);
			c=fgetc(fp);
		}
	}
	
	printf("WHICH MOVIE DO YOU WANT TO SEE\n");
	printf("ENTER THE MOVIE SERIAL NUMBER\n");
	scanf("%d",&p[l].y);
	printf("SELECT TIME SLOT\n");
	printf("ENTER THE SERIAL NUMBER BEFORE IT\n");
	scanf("%d",&p[l].z);
	
	char* movie[5]={"ONE-PIECE FILM RED","JUJUSTU KAISEN 0: THE MOVIE","FRUITS BASKET: PRELUDE","A SILENT VOICE"};
	char* duration[5][4]={{"9:00 AM - 11:00 AM" , "2:00 PM - 4:00 PM" , "7:00 PM - 9:00 PM" },{"9:00 AM - 10:00 AM" , "3:00 PM - 4:00 PM" , "6:00 PM - 7:00 PM"},{"9:00 AM - 10:30 AM" , "2:00 PM - 3:30 PM" , "6:00 PM - 7:30 PM"},{"9:00 AM - 11:30 AM" , "2:00 PM - 4:30 PM" , "7:00 PM - 9:30 PM" }};

	seatingPlan();
	printf("NO.OF TICKETS YOU WANT");
	scanf("%d",&p[l].t);
	printf("ENTER THE SEATS YOU WANT\n");
	printf("please enter in this format : row-alphabet(capital letter),seat number\n");
	printf("example : C7\n");
	for(int i=0;i<p[l].t;i++)
	{
		scanf("%5s",p[l].seat[i]);	
	}
	
	printf("YOU HAVE SELECTED : ");
	for(int i=0;i<p[l].t;i++)
	{
		printf("%5s,",p[l].seat[i]);
	}
	printf(" SEATS\n");
	
	char A,B,C,D,E,F,G,H,I,J;
	
	for(int i=0;i<p[l].t;i++)
	{
		if(p[l].seat[i][0]=='A')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i =0;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 300.00;
	
			}
			
		else if(p[l].seat[i][0]=='B')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i= 1;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 300.00;
			}
		else if(p[l].seat[i][0]=='C')	
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i= 2;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 400.00;
			}
			
		else if(p[l].seat[i][0]=='D')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i=3;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 250.00;
			}
		else if(p[l].seat[i][0]=='E')
			{	int j = ((p[l].seat[i][1]-1)-48);
				int i=4; 
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 250.00;
			}
			
		else if(p[l].seat[i][0]=='F')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i=5;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 200.00;
			}
			
		else if(p[l].seat[i][0]=='G')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i=6;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 200.00;
			}
			
		else if(p[l].seat[i][0]=='H')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i=7;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 200.00;
			}
			
		else if(p[l].seat[i][0]=='I')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i=8;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 150.00;
			}	
		else if(p[l].seat[i][0]=='J')
			{
				int j = ((p[l].seat[i][1]-1)-48);
				int i=9;
				seats[p[l].y][p[l].z][i][j]=1;
				p[l].amount = p[l].amount + 150.00;
			}	
		else
			{
				printf("PLEASE CHOOSE CAREFULLY");
				break;
			}
	}
	
	int a;
	printf("DO YOU WANT TO PRE-ORDER YOUR SNACKS?\n");
	printf("1.YES\n2.NO\n");
	scanf("%d",&a);
	
	

	
	
	 switch(a)
	{
		case 1:
				
					FILE * fp;
	fp = fopen("MENU.txt","r");
	if (fp == NULL)
	{
		printf("SORRY FOR INCONVINIENCE! PRE-ORDER IS CURRENTLY NOT AVAILABLE\n");
	}
	else
	{
		char c;
		c = fgetc(fp);
		while(c!=EOF)
		{
			printf("%c",c);
			c=fgetc(fp);
		}
	}
	
	char r;
	int snacks[20];
	int g=0;
	printf("SELECET THE ITEMS YOU WANT BY ENTERING THEIR RESPECTIVE SERIAL NUMBERS \n");
	printf("GIVE SPACE AFTER EACH NUMBER EXCEPT AFTER THE LAST ENTRY AND PRESS 'ENTER' IF YOUR ORDER IS COMPLETE\n");
	do
	{
		scanf("%d",&snacks[g]);
		g++;
		scanf("%c",&r);
		if(r=='\n')
		{
			break;
		}
	}while(g<20);
	
	printf("YOU HAVE SELECTED %d ITEMS\n",g);
	
				for(int i=0;i<g;i++)
				{
					if(snacks[i]==1)
					{
						p[l].amount = p[l].amount + 190;
					}
					
					else if(snacks[i]==2)
					{
						p[l].amount = p[l].amount + 160;
					}
					
					else if(snacks[i]==3)
					{
						p[l].amount = p[l].amount + 220;
					}
					
					else if(snacks[i]==4)
					{
						p[l].amount = p[l].amount + 110;
					}
					
					else if(snacks[i]==5)
					{
						p[l].amount = p[l].amount + 160;
					}
					
					else if(snacks[i]==6)
					{
						p[l].amount = p[l].amount + 90;
					}
					
					else if(snacks[i]==7)
					{
						p[l].amount = p[l].amount + 140;
					}
					
					else if(snacks[i]==8)
					{
						p[l].amount = p[l].amount + 80;
					}
					
					else if(snacks[i]==9)
					{
						p[l].amount = p[l].amount + 100;
					}
					
					else if(snacks[i]==10)
					{
						p[l].amount = p[l].amount + 100;
					}
					
					else if(snacks[i]==11)
					{
						p[l].amount = p[l].amount + 60;
					}
					
					else if(snacks[i]==12)
					{
						p[l].amount = p[l].amount + 40;
					}
					
					else if(snacks[i]==13)
					{
						p[l].amount = p[l].amount + 120;
					}
					
					else if(snacks[i]==14)
					{
						p[l].amount = p[l].amount + 70;
					}
					
					else if(snacks[i]==15)
					{
						p[l].amount = p[l].amount + 50;
					}
					
					else if(snacks[i]==16)
					{
						p[l].amount = p[l].amount + 60;
					}
					
					else if(snacks[i]==17)
					{
						p[l].amount = p[l].amount + 40;
					}
					
					else if(snacks[i]==18)
					{
						p[l].amount = p[l].amount + 80;
					}
					
					else if(snacks[i]==19)
					{
						p[l].amount = p[l].amount + 75;
					}
					
					else if(snacks[i]==20)
					{
						p[l].amount = p[l].amount + 90;
					}
					
					else
					{
						printf("CHOOSE CAREFULLY\n");
					}
				}
				
				break;
				
			case 2:
					printf("OK....DONT FORGET TO TRY OUR SNACKS AT THE THEATRE\n");
					break;
	}
		
	printf("......................................................................\n");
	printf(".............................SUPERRR THEATRE...........................\n");
	printf("...\tNAME:%s %s..................PHONE NO.:%ld\n",p[l].name1,p[l].name2,p[l].phone);
	printf("...\tMOVIE NAME:%s...........SCREEN NUMBER:%d\n",movie[(p[l].y)-1],p[l].y);
	printf("...\tSEAT NO.:");
	for(int i=0;i<p[l].t;i++)
	{
		printf("%5s ",p[l].seat[i]);
	}
	printf("\b\n");
	printf("...\tDURATION:%s\n",duration[(p[l].y)-1][(p[l].z)-1]);
	printf("...\tTOTAL AMOUNT:%f......TICKET NUMBER:%d\n",p[l].amount,p[l].ticketnum);
	printf("......................................................................\n");
}

void cancellation()
{
	int Cseat;
	int stop = 0;
        printf("Please enter ID number of ticket: ");
        scanf("%d",&Cseat);
        for (int i=1;i<l+1;i++)
        {
		if(Cseat==p[i].ticketnum)
	  		{
	  			stop = 5;
		 		for(int j=0;j<p[i].t;j++)
		 		{
					printf("%s %s your seat %5s is cancelled\n",p[i].name1,p[i].name2,p[i].seat[j]);
					if(p[i].seat[j][0]=='A')
					{
						
						int k = ((p[i].seat[j][1]-1)-48);
						int j =0;
						seats[p[i].y][p[i].z][j][k]=0;	
					}
			
					else if(p[i].seat[j][0]=='B')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j= 1;
						seats[p[i].y][p[i].z][j][k]=0;
					}
				
					else if(p[i].seat[j][0]=='C')	
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j= 2;
						seats[p[i].y][p[i].z][j][k]=0;
					}
					
					else if(p[i].seat[j][0]=='D')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j=3;
						seats[p[i].y][p[i].z][j][k]=0;
					}
					
					else if(p[i].seat[j][0]=='E')
					{	int k = ((p[i].seat[j][1]-1)-48);
						int j=4; 
						seats[p[l].y][p[l].z][i][j]=0;
					}
			
					else if(p[i].seat[j][0]=='F')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j= 5;
						seats[p[i].y][p[i].z][j][k]=0;
					}
			
					else if(p[i].seat[j][0]=='G')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j=6;
						seats[p[i].y][p[i].z][j][k]=0;
					}
						
					else if(p[i].seat[j][0]=='H')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j=7;
						seats[p[i].y][p[i].z][j][k]=0;
					}
			
					else if(p[i].seat[j][0]=='I')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j=8;
						seats[p[i].y][p[i].z][j][k]=0;
					}	
					else if(p[i].seat[j][0]=='J')
					{
						int k = ((p[i].seat[j][1]-1)-48);
						int j=9;
						seats[p[i].y][p[i].z][j][k]=0;
					}	
					
							 
		  		}
	  			
	  			int r;
	  			r = (p[i].amount)*0.6;
	  			printf("AMOUNT OF %d HAS BEEN RETURNED\n",r);
	  			break;	
			}
			
		if(stop != 5)
		{
			printf("INCORRECT TICKET NUMBER\n");
		}
	}
	
}

int main()
{
	int seats[4][3][10][9];
	for(int g=0;g<4;g++)
	{
		for(int h=0;h<3;h++)
		{
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<9;j++)
				{
					if( j==5 || j==6)
					{
						seats[g][h][i][j] = 7;
					}
				
					else
					{
						seats[g][h][i][j]=0;
					}	
				}	
			}
		}
	}
	
	while(7)
	{	

		int x;
		printf("\n\n\n");
		printf(".............SUPERRR THEATRE.......................\n");
		printf("1.TICKET BOOKING\n2.TICKET CANCELLATION\n3.EXIT\n");
		printf("PLEASE NOTE THAT ON CANCELLATION OF YOUR TICKET ONLY 60 PERCENT OF YOUR AMOUNT WILL BE REFUNDED\n");
		printf("CHOOSE A NUMBER\n");
		scanf("%d",&x);
	
		if(x==3)
		{
			break;
		}
	
		else
		{
			switch(x)
			{
				case 1 :
							l = l + 1;
							ticketCost(l);
							break;
						
				case 2 :	
						  	cancellation();    
							break;
						
				default:
							printf("CHOOSE FROM GIVEN OPTIONS\n");
							break;
			}
		}
	}
		
	return 0;
}
