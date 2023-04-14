#include<stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>

int d,m,y;
int d1,m1,y1;
int n2,ni,nd;

void destination();
void mh();
void ka();
void gj();
void rj();
void goa();
void as();
void ap();
void pb();
void kl();
void tn();

void italy();
void france();
void london();
void sydney();
void newyork();
void tokyo();
void DUBAI();
void print_details();
void print_ticket(int [],int);
void input(int,int );
int check(int);
void flights(int );
void hotels();
int menu();

struct info
{
	int age;
	int cost;
	int days;
	char hname[30];
	char destination[15];
	char name[30];
	char gender;
	float time;
	char fname[30];
	char shift[2];
} i;


void print_details()
{
	system("cls");
	int id,no,flag=0;
	printf("\n\t TRAVELLERS DETAILS :\n");
	printf(" \nEnter your ID details :  ");
	scanf("%d", &id);
		FILE *f;
  	f=fopen("info.txt", "r");
	while (!feof(f))
	{
			fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);

		if(id==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tName : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
		printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
		printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
        printf("\n\tDESTINATION : %s",i.destination);
        printf("\n\tFLIGHT NAME : %s",i.fname);
        printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
        printf("\nPress enter to continue ");
	flag=1;
		}
     if(flag==1)
     break;
           }
	fclose(f);
	if(flag==0)
	{
		printf("\nNo bill exists.");
		printf("\nPress enter to continue ");

	}
}


void print_ticket(int a[],int cnt)
{
	system("cls");
	int z,no,flag;
		FILE *f;
  		printf("\n\n\t YOUR TICKET:");
  for(z=0;z<cnt;++z)
  {   flag=0;
  f=fopen("info.txt", "r");
	while (!feof(f))
	{
		fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);
			if(a[z]==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
		printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
		printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
        printf("\n\tDESTINATION : %s",i.destination);
        printf("\n\tFLIGHT NAME : %s",i.fname);
        printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
       flag=1;
			}
     if(flag==1)
     break;
           }
  fclose(f);
  }
   printf("\n\n\t\tTOTAL COST : %ld",i.cost);
printf("\n\n\t\tBOOKING SUCCESSFULL");
   printf("\n\n\t\t   press enter to go to main menu");
     getchar();
menu();
}


int check(int id)
{
   int fi;
	 FILE *f1;

        f1=fopen("checkid.txt","w");

fclose(f1);

 FILE *f;
	f=fopen("checkid.txt","r+");
   while(!feof(f))
{
	fscanf(f,"%d",&fi);
	if(fi==id)
	{
	printf("\n\t ID ALDREADY EXISTS!) !\n\t CHOOSE ANOTHER ID :\n");
	return 1;
	}
}
fclose(f);
return 0;
}


void input(int cnt,int cno)
{
	int a[cnt];
	int pos=0,res;
        if (n2=1){
	switch(cno)
	{
		case 1:strcpy(i.destination,     "MAHARASHTRA");break;
		case 2:strcpy(i.destination,     "KARNATAKA");break;
		case 3:strcpy(i.destination,     "TAMIL NADU");break;
		case 4:strcpy(i.destination,    "GOA" );break;
		case 5:strcpy(i.destination,     "GUJARAT");break;
		case 6:strcpy(i.destination,     "PUNJAB");break;
		case 7:strcpy(i.destination,    "ANDHRA PRADESH" );break;
        case 8:strcpy(i.destination,    "RAJASTHAN" );break;
		case 9:strcpy(i.destination,    "ASSAM" );break;
		case 10:strcpy(i.destination,    "KERALA" );break;
	}}
	else{
        switch(cno)
	{
		case 1:strcpy(i.destination,     "ITALY");break;
		case 2:strcpy(i.destination,     "FRANCE");break;
		case 3:strcpy(i.destination,     "LONDON");break;
		case 4:strcpy(i.destination,    "SYDNEY" );break;
		case 5:strcpy(i.destination,     "NEW_YORK");break;
		case 6:strcpy(i.destination,     "TOKYO");break;
		case 7:strcpy(i.destination,    "DUBAI" );break;
	}}
	int x=0,id;
	int cnt;
	while(x<cnt)
		{
		system("cls");
			printf("\n\t\t ENTER %d PERSON DETAILS",x+1);
		a:
		printf("\n\n\t     CHOOSE YOUR TRAVEL ID (1-100) : ");
	scanf("%d",&id);
	res=check(id);
	if(res==1)
	goto a;
	printf("\n\t    ENTER  NAME , AGE , GENDER (M/F)  :\n\n");
	FILE *f;
	f=fopen("info.txt","a+");
	printf("\t    ");
	scanf("%s", &i.name);
	printf("\t    ");
	scanf("%d",&i.age);
	printf("\t    ");
	getchar();
    i.gender=getchar();
    printf("\n\n\t\t   press enter to continue .....");
     getchar();
	getchar();
	flights(id);
	hotels();
	fprintf(f,"%d %s %d %c %d %s %s %f %s ",id,i.name,i.age,i.gender,i.cost,i.destination,i.fname,i.time,i.shift);
	fprintf(f," %d %d %d %d %d %d %s\n",d,m,y,d1,m1,y1,i.hname);
      fclose(f);
      a[x]=id;
      ++x;
		}
	print_ticket(a,cnt);
}


void hotels()
{
	int n;

  system("cls");
	printf("\n\t\t HOTELS :");
	printf("\n\n\t1. EMIRATES PALACE\t PRICE : 20,000 PER DAY");
	printf("\n\n\t2. BURJ AL ARAB\t       PRICE : 19,500 PER DAY");
	printf("\n\n\t3. TOWN HOUSE GALLERIA\t PRICE : 17,000 PER DAY");
	printf("\n\n\t4. ROYAL MALWANE\t PRICE : 20,500 PER DAY");
	printf("\n\n\t5. AMANZOE\t    PRICE : 18,000 PER DAY");
	printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &n);
	printf("\n\n\t ENTER NO OF DAYS : ");
	scanf("%d",&i.days);
		switch (n)
	{
case 1: i.cost+=i.days*20000;
strcpy(i.hname,"EMIRATES");break;
case 2: i.cost+=i.days*19500;
strcpy(i.hname,"BURJ_AL_ARAB");break;
case 3: i.cost+=i.days*17000;
strcpy(i.hname,"TOWN_HOUSE_GALLERIA");break;
case 4: i.cost+=i.days*20500;
strcpy(i.hname,"ROYAL_MALWANE");break;
case 5: i.cost+=i.days*18000;
strcpy(i.hname,"AMANZOE");break;
	}
	printf("\n\t ENTER DATE OF CHECKIN : ");
	scanf("%d",&d);
	printf("\n\t ENTER MONTH OF CHECKIN : ");
	scanf("%d",&m);
	printf("\n\t ENTER YEAR OF CHECKIN : ");
	scanf("%d",&y);

	d1=d+i.days;
	m1=m;
	y1=y;
	if(d1>31)
	{
		d1=d1-31;
		m1+=1;
		if(m1>12)
		{
			m1=m1-12;
			y1+=1;
		}
	}
printf("\n\n\t\t   Press enter to continue");
	getchar();
	getchar();
}



void flights(int id)
	{
		int choice;
	printf("\n\n\t\t FLIGHTS AVAILABLE : ");
	printf("\n\n    1. LUFTHANSA:       DEPARTURE : 6.00 AM  PRICE : 68,000 RS");
	printf("\n    2. JET AIRWAYS:     DEPARTURE : 9.00 AM  PRICE : 40,000 RS");
			printf("\n    3. QATAR AIRWAYS :  DEPARTURE : 1.00 PM  PRICE : 55,000 RS");
		printf("\n    4. EMIRATES:        DEPARTURE : 5.00 PM  PRICE : 75,000 RS");
		printf("\n    5. AIR ASIA :       DEPARTURE : 9.00 PM  PRICE : 42,000 RS");
		printf("\n\n\t ENTER CHOICE :  ");
		scanf("%d",&choice);
		switch(choice)
		{
case 1: i.cost+=68000;
i.time=6.00;
strcpy(i.shift,"AM");
strcpy(i.fname,"LUFTHANSA");break;
case 2: i.cost+=40000;
i.time=9.00;
strcpy(i.shift,"AM");
strcpy(i.fname,"JET_AIRWAYS");break;
case 3: i.cost+=55000;
i.time=1.00;
strcpy(i.shift,"PM");
strcpy(i.fname,"QATAR_AIRWAYS");break;
case 4: i.cost+=75000;
i.time=5.00;
strcpy(i.shift,"PM");
strcpy(i.fname,"EMIRATES");break;
case 5: i.cost+=42000;
i.time=9.00;
strcpy(i.shift,"PM");
strcpy(i.fname,"AIR_ASIA");break;
}
	  FILE *p;
       p=fopen("checkid.txt","a+");      fprintf(p,"%d \n",id);
        fclose(p);
        printf("\n\n\t\t   Press enter to continue ");
	getchar();
	getchar();

}


void destination()
{
	system("cls");

	printf("\n\t1.DOMESTIC TOUR PACKAGES \n\t2.INTERNATIONAL TOUR PACKAGES");
	printf("\n\tCHOOSE PACKAGE: ");
	scanf("%d",&n2);
	if(n2==1)
{
        system("cls");
	printf("\t\tWELCOME TO DOMESTIC TOURS!!!");
printf("\n\tCHOOSE YOUR DESTINATION:");
	printf("\n\t1.MAHARASHTRA");
        printf("\n\t2.KARNATAKA");
printf("\n\t3.TAMIL NADU");
printf("\n\t4.GOA");
printf("\n\t5.GUJARAT");
printf("\n\t6.PUNJAB");
printf("\n\t7.ANDHRA PRADESH");
printf("\n\t8.KERALA");
printf("\n\t9.RAJASTHAN");
printf("\n\t10.ASSAM");
printf("\n\n\t ENTER YOUR CHOICE :  ");
scanf("%d", &nd);
switch (nd)
	{
	case 1:mh();break;
	case 2:ka();break;
	case 3:tn();break;
	case 4:goa();break;
	case 5:gj();break;
	case 6:pb();break;
	case 7:ap();break;
	case 8:kl();break;
	case 9:rj();break;
	case 10:as();break;
	}

	printf("\n\t DESTINATION :");
	printf("\n\n\t 1. ITALY");
	printf("\n\n\t 2. FRANCE");
	printf("\n\n\t 3. LONDON");	printf("\n\n\t 4. SYDNEY");
	printf("\n\n\t 5. NEW YORK");
	printf("\n\n\t 6. TOKYO");
	printf("\n\n\t 7. DUBAI");
		printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &ni);
	switch (ni)
	{
	case 1:italy();break;
	case 2:france();break;
	case 3:london();break;
	case 4:sydney();break;
	case 5:newyork();break;
	case 6:tokyo();break;
	case 7:DUBAI();break;
	}
}


void mh()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO MAHARASHTRA TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.MAHABALESHWAR");
printf("\n\t2.SHIRDI");
printf("\n\t3.MUMBAI");
printf("\n\t4.LONAVALA");
printf("\n\t5.KHANDALA");
printf("\n\t6.NASHIK");
printf("\n\t7.AURANGABAD");
printf("\n\t8.PANCHGANI");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void ka()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO KARNATAKA TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.MYSORE PALACE");
printf("\n\t2.COORG");
printf("\n\t3.HUMPI");
printf("\n\t4.UDUPI");
printf("\n\t5.JOG FALLS");
printf("\n\t6.SHIMOGGA");
printf("\n\t7.NANDI HILLS");
printf("\n\t8.BIJAPUR");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}
void tn()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO TAMIL NADU TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.OOTY");
printf("\n\t2.MADURAI");
printf("\n\t3.KODAIKANAL");
printf("\n\t4.CHENNAI");
printf("\n\t5.RAMESHWARAM");
printf("\n\t6.KANYAKUMARI");
printf("\n\t7.TIRUCHIRAPALLI");
printf("\n\t8.MAHABALIPURAM");
printf("\n\t9.COIMBATORE");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void goa()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO GOA TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.PANAJI");
printf("\n\t2.BARDEZ");
printf("\n\t3.CALANGUTE");
printf("\n\t4.CANACONA");
printf("\n\t5.VASCO DA GAMA");
printf("\n\t6.MAPUSA");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void as()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO ASSAM TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.GUWAHATI");
printf("\n\t2.JORHAT");
printf("\n\t3.TEZPUR");
printf("\n\t4.DIGBOI");
printf("\n\t5.DIPHU");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}


void rj()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO RAJASTHAN TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.JAIPUR");
printf("\n\t2.UDAIPUR");
printf("\n\t3.JODHPUR");
printf("\n\t4.JAISALMAR");
printf("\n\t5.PUSHKAR");
printf("\n\t6.BIKANER");
printf("\n\t7.NAGAUR");
printf("\n\t8.BUNDI");
printf("\n\t9.MOUNT ABU");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void kl()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO KERALA TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.KOCHI");
printf("\n\t2.MUNNAR");
printf("\n\t3.WAYANAD");
printf("\n\t4.KANNUR");
printf("\n\t5.KOVALAM");
printf("\n\t6.TRIVANDRUM");
printf("\n\t7.KOLLAM");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}


void ap()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO ANDHRAPRADESH TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.TIRUPATI");
printf("\n\t2.VIZAG");
printf("\n\t3.SRISAILAM");
printf("\n\t4.VIJAYWADA");
printf("\n\t5.MANTRALAYAM");
printf("\n\t6.AMARAVATI");
printf("\n\t7.LEPAKSHI");
printf("\n\t8.AHOBILAM");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void pb()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO PUNJAB TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.AMRITSAR");
printf("\n\t2.CHANDIGARH");
printf("\n\t3.PATIALA");
printf("\n\t4.LUDHIANA");
printf("\n\t5.BATHINDA");
printf("\n\t6.JALANDHAR");
printf("\n\t7.PATHANKOT");
printf("\n\t8.ANANDPUR SAHIB");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}


void gj()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO GUJARAT TOURISM  !!!\n");
printf("\n\tBROCHURE:- ");
printf("\n\t1.AHMEDABAD");
printf("\n\t2.BARODA");
printf("\n\t3.KEVADIA");
printf("\n\t4.MODHERA");
printf("\n\t5.PATAN");
printf("\n\t6.SIDHPUR");
printf("\n\t7.SABARKANTHA");
printf("\n\t8.DWARKA");
printf("\n\t9.JUNAGADH");
printf("\n\t10.KUTCH");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void italy()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO ITALY TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void france()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO FRANCE TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,2);
}

void london()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO LONDON TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,3);
}

void sydney()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO SYDNEY TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,4);
}

void newyork()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO NEW YORK TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,5);
}

void tokyo()
{
	int  cnt;
system("cls");
	printf("\n\t\tWELCOME TO TOKY0 TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,6);
}

void DUBAI()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO DUBAI TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,7);
}


int menu()
{
	int n;
system("cls");
	printf("\n\tMENU :");
	printf("\n\n\t1. BOOK PACKAGE \n\n\t2. GENERATE BILL\n\n\t3. EXIT\n\n\tENTER CHOICE :  ");
	scanf("\n%d", &n);
	switch (n)
	{
	case 1:destination();break;
	case 2:print_details();break;
	case 3: return 0;
}
getch();
menu();
return 0;
}


int main()
{

	printf("\n\n\n\n\n\n\t\t\t   WELCOME \n\n\t\t      Golden wings  TRAVEL AGENCY");
	printf("\n\n\t\t   press enter to continue .....");
	getchar();
	menu();
	return 0;
}
