

#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<iomanip.h>
#include<conio.h>

void delay()
{
long  i;
for(i=0;i<2000000;i++)
{}
}
void longdelay()
{

long  i;
for(i=0;i<4000000;i++)
{}

}

void longestdelay()
{
long  i;
for(i=0;i<200000000;i++)
{}
}





void design()
{
clrscr();
int i,j;

for(i=39,j=40;j<80,i>0;i--,j++)
{
gotoxy(i,0)
cout<<"*";
gotoxy(j,0);
cout<<"*";
delaylong();
}
 for(j=0;j<=24;j++)
 {
 gotoxy(79,j);
 cout<<"*";
 delaylong();
 }
 for(i=79,j=25;i>0;i--)
 {
 gotoxy(i,25);
 cout<<"*";
 delaylong();
 }
 for(i=25;i>=0;i--)
 {
 goto(1,i);
 cout<<"*";
 delaylong();
 }
 }
 void cardesign()
 {
 for(int i=68;i<=73;i++)
 {
 gotoxy(i,3);
 cout<<"*";
 }
 for(int k=66;k<=75;k++);
 {
 gotoxy(k,4);
 cout<<"*";
 }
 for(int j=66;j<=76;j++)
 {
 gotoxy(j,6);
 cout<<"-";
 }
 }
  void wrongoption()
  {
  clrscr();
  design;
  cardesign();
  gotoxy(8,11);
  cout<<"Sorry wrong option selected please restart program to continue";
  }








void welcome_screen()
{int i,j;
gotoxy(16,3);cout<<"__";
gotoxy(15,4);cout<<"/";
gotoxy(15,5);cout<<"\\";
gotoxy(16,6);cout<<"\\";
gotoxy(17,7);cout<<"\\";
gotoxy(18,7);cout<<"__";
gotoxy(20,7);cout<<"/";
gotoxy(21,7);cout<<"\\";
gotoxy(22,8);cout<<"\\";
gotoxy(23,8);cout<<"/";
gotoxy(24,7);cout<<"/";
gotoxy(25,6);cout<<"/";
gotoxy(26,5);cout<<"/";
gotoxy(26,4);cout<<"\\";
gotoxy(24,3);cout<<"__";
gotoxy(23,4);cout<<"/";
gotoxy(22,5);cout<<"/";
gotoxy(21,5);cout<<"\\";
gotoxy(20,5);cout<<"/";
gotoxy(19,5);cout<<"\\";
gotoxy(18,4);cout<<"\\";
gotoxy(28,4);cout<<"___";
gotoxy(27,5);cout<<"/";
gotoxy(26,6);cout<<"\\";
gotoxy(27,7);cout<<"\\";
gotoxy(28,7);cout<"___";
gotoxy(31,8);cout<<"\\/";
gotoxy(33,7);cout<<">";
gotoxy(29,6);cout<<"__";





gotoxy(32,6);cout<<"/";
gotoxy(32,5);cout<<"\\";
gotoxy(29,5):cout<<"_";
gotoxy(34,3):cout<"_";
gotoxy(33,4):cout<"| |";
gotoxy(33,5):cout<<"| |";
gotoxy(33,6):cout<<"| |_";
gotoxy(34,7);cout<<"__/";
gotoxy(40,4);cout<<"__";
gotoxy(38,5);cout<<"_/  \\";
gotoxy(38,6);cout<<"\\";
gotoxy(39,7);cout<<"\\__";
gotoxy(43,8);cout<<"\\/";
gotoxy(45,7);cout<<">";
gotoxy(41,5):cout<<"__";
gotoxy(41,6):cout<"\\__";
gotoxy(46,4);cout<<"__";
gotoxy(45,5):cout<<"/ ||";
gotoxy(44,6):cout<<"(";
gotoxy(46,7);cout<<"_/|";
gotoxy(51,6);cout<<")";
gotoxy(47,6);cout<<"()";
gotoxy(53,4),cout<<"_";
gotoxy (52,5);cout<<"/";
gotoxy(52,7);cout<<"|| /";
gotoxy(57,8);cout<<"\\/";
gotoxy(59,6);cout<<"\\"
gotoxy (58,5):cout<"\\";
gotoxy(54,6);cout<": :"
gotoxy(61,4);cout<<"_"
gotoxy(59,5);cout<<"_/";
gotoxy(60,7),cout<<"\\___ >"
gotoxy(64,8);cout<<"\\/"
delay();
gotoxy(62,6); cout<<"__/";
gotoxy(i,5);cout<<"\\";
gotoxy(62,5);
cout<"_";
for(i=26;i<57;i++)
{
gotoxy(i, 12);
cout<"*";
delay();
}
for(j=12;j<20;j++)
{
gotoxy(25,j);
cout<<"*";
delay();
}
for(i=26;i<57;i++)
	 {

gotoxy(i,19);
cout<<"*";
delay();
}
for(j=12;j<20;j++)
{
	 gotoxy(56,j);
	 cout<<"*";
	 delay();
}
gotoxy(41,13);
cout<<"TO";
gotoxy(32,14);
cout<<"NATIONAL CAR RENTAL";
gotoxy(28,16);
cout<<"Email; CarRental@gmail.com";
gotoxy(28,17);
cout<<"CONTACT: 36500290";
}
void exit()
{
	 clrscr();
}
class customer
{
	 char name[20];
	 long phone_no;
	 int age;
	 int serial_no;
	 char car_name[30];
	 char ncolour[10];
	 char custtype[30];
	 int price;
	 int total;

public:

	 void create_record1();
	 void show_record();
	 void clist();
	 void all_list();
	 int retserial_no();

};

int customer::retserial_no()
{
	 return serial_no;
}

class details
{
public:
	 int srno;
	 char CarName[40];
	 char type[20];
	 char colour[10];
	 char car_code[40];
	 int cprice;
	 char status[40];
	 int editcar();
	 int retsrno();
	 char retstatus();
	 char retcarname();
	 char rettype();
	 void reportcar();
	 void dispone();
	 void incar();
};
int details::retsrno()
{
	 return Srno;
}
void customer::clist()
{
	 cout<<setw(5)<<"Ecode"<<setw(7)<<"Name"<<setw(8)<<"Tel.no"<<setw(4)<<"Age"<<setw(10)<<"Car name"<<setw(8)<<"Model"<<setw(8)<<"Colour"<<setw(8)<<"Total";
	 cout<<endl;
	 cout<<setw(5)<<serial_no<<setw(7)<<name<<setw(8)<<phone_no<<setw(4)<<age<<setw(10)<<car_name<<setw(8)<<custtype<<setw(8)<<ncolour<<setw(8)<<"BD"<<total;
}
void details::dispone()
{
	 gotoxy(4,4);
	 cout<<setw(5)<<"Srno."<<setw(12)<<"Car Name"<<setw(12)<<"Model"<<setw(12)<<"Colour"<<setw(12)<<"Price"<<setw(10)<<"Status"<<endl;
	 gotoxy(4,6);
	 cout<<setw(5)<<Srno<<setw(12)<<CarName<<setw(12)<<type<<setw(12)<<colour<<setw(12)<<cprice<<setw(10)<<status<<endl;

}
void details::incar()
{
	 gotoxy(4,8);
	 cout<<"Serial no;";
	 cin>>Srno;

	 gotoxy(4,10);
	 cout<<"Car Name;";
	 cin>>CarName;


	 gotoxy(4,12);
	 cout<<"Model;";
	 cin>>type;

	 gotoxy(4,14);
	 cout<<"Colour;";
	 cin>>colour;

	 gotoxy(4,16);
	 cout<<"Price:BD";
	 cin>>cprice;
	 strcpy(status,"Available");
	 gotoxy(9,19);
	 cout<<"CAR MODIFIED.";
}
void mainmenu();
void customer::create_record1()
	{

	 details d;
	 int SRno;
	 int n;
	 int count=0;
	 char ch;
	 fstream fin("1.dat",ios::in|ios::out|ios::binary);
	 fin.read((char*)&d,sizeof(d));
	 fstream fin1("1.dat",ios::in|ios::out|ios::binary)
	 cout<<endl;
	 cout<<"Enter serial number of car you wish to rent \n";
	 cin>>SRno;
	 clrscr();
	 while(fin1.read((char*)&d,sizeof(d)))
	 {
		  count++;
		  if(d.retsrno()==SRno)
				break;
	 }
	 if(d.resrno()!=SRno)
	 {
		  gotoxy(4,10);
		  cout<<"Sorry this record does not exist \n"
		  return;
		  fin1.close();
	 }
	 cout<<endl;
	 fin1.seekg((count-1)*sizeof(d),ios::beg);
	 d.dispone();
	 gotoxy(3,8);
	 cout<<"Is this the car you want to rent(Y/N)???";
	 cin>>ch;
	 if(ch=='Y'||ch=='y' && strcmp(d.status,"Available")==0)
	 {
		  serial_no=SRno;
		  gotoxy(3,10);
				cout<<serial_no;
		  gotoxy(10,10);
				cout<<"Name:";
				cin>>name;
		  gotoxy(32,10);
				cout<<"Tel no;";
				cin>>phone_no;
		  gotoxy(52,10);
				cout<<"Age:";
				cin>>age;
				if(age<18)
				{
					 cout<<"Sorry you are too young to drive:";
					 mainmenu();
				}
		  for(int i=20;i<45;i++)
		  {
				gotoxy(i,12);
				cout<<"-";
		  }
		  gotoxy(28,13);
		  cout<<"Car;";
		  strcpy(car_name,d.CarName);
				cout<<car_name;
		  gotoxy(28,15);
		  cout<<"Model";
		  strcpy(custtype,d.type);
		  cout<<custtype;
		  gotoxy(28,17);
		  cout<<"Colour;";
		  strcpy(ncolour,d.colour);
		  cout<<ncolour;
		  gotoxy(28,19);
		  cout<<"price:";
		  price=d.cprice;
		  cout<<"BD"<<price;
		  for(int j=20;j<45;j++)
		  {
				gotoxy(j,20);
				cout<<"-";
		  }
		  gotoxy(3,22);
		  cout<<"Enter the number of days you wish to rent this car for: \n";
		  cin>>n;
		  if(n<=15)
				total=n*price;
		  else if (n<=30)
				total=n*0.05*price;
		  else if (n<=45)
				total=n*0.15*price;
		  else if (n<=60)
				total=n*0.20*price;
		  else if (n<=100)
				total=n*0.25*price;
		  else total=n*0.35*price;
		  cout<<total;
		  strcpy(d.status,"On Rent");
		  fin1.write((char*)&d,sizeof(d));
		  fin1.close();
		  fin.close();
		  delay();
		  clrscr();
	 }
	 else
	 {
		  mainmenu();
		  fin.close();
		  fin1.close();
	 }
 gotoxy(33,2);
 cout<<"BILLING";
 for(int k=32;k<41;k++)
 {
	  gotoxy(k,3);
	  cout<<"-"
	  gotoxy(k,1);
	  cout<<"-"

 }
 cardesign();
 gotoxy(15,7);
 cout<<"Ecode    ";
 cout<<serial_no;
 gotoxy(15,9);
 cout<<"Customer name:";
 cout<<name;
 gotoxy(40,7);
 cout<<"Tel.no:";
 cout<<phone_no;
 gotoxy(40,9);
 cout<<"Age";
 cout<<age;
 gotoxy(30,11);
 cout<<"Car Name";
 cout<<car_name;
 gotoxy(30,13);
 cout<<"Model Name:";
 cout<<custtype;
 gotoxy(30,15);
 cout<<"Colour:";
 cout<<ncolour;
 gotoxy(28,20);
 cout<<"GRAND TOTAL:BD";
 cout<<total;
 cout<<endl;
 for(int i=0;i<80;i++)
 {
	  gotoxy(i,21);
	  cout<<"-";
	  gotoxy(i,23);
	  cout<<"-";
 }
 fin1.close();
 fin.close();
	}
	void writerecord()
{
	 customer c;
	 ofstream fout("c.dat,ios::app|ios::binary");
	 c.create_record1();
	 fout.write((char*)&c,sizeof(c));
	 fout.close();
}
void customer::show_record()
{
	 cout<<setw(5)<<serial_no<<setw(7)<<name<<setw(15)<<phone_no<<setw(10)<<age<<setw(10)<<car_name<<setw(10)<<custtype<<setw(10)<<price<<setw(10)<<"BD"<<total<<endl;
}
void disprecord()
{
	 clrscr();
	 customer c;
	 ifstream fin;
	 cout<<setw(5)<<"Ecode"<<setw(7)<<"Name"<<setw(15)<<"Tel.no"<<setw(10)<<"Age"<<setw(10)<<"Car name"<<setw(10)<<"Model"<<setw(10)<<"Price"<<setw(10)<<"Total"<<endl;
	 cout<<endl;
	 for(int i=1;i<79;i++)
	 {
		  gotoxy(i,2);
		  cout<<"-";
	 }
	 cout<<endl;
	 fin.open("c.dat,ios::in|ios::binary");
	 while(fin.read((char*)&c,sizeof(c)));
	 {
		  c.show_record();
		  cout<<endl;
	 }
	 fin.close();
	 int ch;
	 gotoxy(4,18);
	 cout<<"Press 1 to return to Mainmenu:";
	 cin>>ch;
	 if(ch==1)
		  mainmenu();
}
int details::editcar()
{
	 clrscr();
	 int SR,flag=0;
	 design();
	 details d;
	 ifstream fin("1.dat",ios::in|ios::binary);
	 gotxy(5,3);
	 cout<<"Enter serial no of vehicle: \n";
	 cin>>SR;
	 while(fin.read((char*)&d,sizeof(d)))
	 {
		  if(d.retsrno()==SR)
		  {
				flag=1;
		  }
		  if (flag==0)
		  {
				gotoxy(4,6);
				cout<<"Enter the details of the car: \n";
				srno=SR;
				gototxy(4,8);
				cout<<"Serial no:";
				cout<<srno;
				gototxy(4,10);
				cout<<"Car Name";
				cout<<CarName;
				gototxy(4,12);
				cout<<"Model Name:";
				cout<<type;
				gototxy(4,14);
				cout<<"Colour";
				cout<<colour;
				gototxy(4,16);
				cout<<"Price perday: BD";
				cin>>cprice;
				strcpy(status,"Available");
				gotoxy(10,19);
				cout<<"Car inputed;";
				delaylong();
				return 1;
		  }
	 }
}
void modifycar()
{
	 details d;
	 clrscr();
	 int srno;
	 int flag=0;
	 int count=0;
	 fstream file("1.dat,ios::in|ios::out|ios::binary");
	 gotoxy(4,4);
	 cout<<"Enter the serial no of the car you wish to modify \n";
	 cin>>srno;
	 while(fin.read((char*)&d,sizeof(d)))
	 {
		  count++;
		  if(d.srno==srno && strcmp(d.status,"Available")==0)
		  {
				flag=1;
				file.seekg((count-1)*sizeof(d));
				d.dispone();
				d.incar();
				file.seekp((count-1)*sizeof(d));
				file.write((char*)&d,sizeof(d));
				break;
		  }
	 }
	 file.close();
	 if(flag==0)
	 {
		  gotoxy(4,15);
		  cout<<"Sorry this serial number cannot be rented \n";
		  file.close();
	 }
	 delaylong();
	 mainmenu();

	 }
	 void inputcar()
{
	 details d;

	 ofstream fout;
	 fout.open("1.dat",ios::applios:binary);
	 if(d.editcar()==1 )
	 {
	 fout.write((char*)&d,sizeof(d));
	 fout.close() ;}
mainmenu();

}
void details::reportcar()
{
	 cout<<setw(5)<<srno<<setw(12)<<Carname<<setw(12)<<type<<setw(12)<<colour<<setw(10)<<"BD."<<cprice<<setw(12)<<status<<endl;
}
void displaycar()
{

	 clrscr();
	 char ch;
	 customer c;
	 details d;
	 ifstream fin1;
	 fin1.open("1.dat".ios::in|ios::binary);
	 if(!fin1)
	 {
		  cout<<"File not found";
		  return;
	 }
	 cout<<setw(5)<<"srno."<<setw(12)<<"Car name"<<setw(12)<<"Type"<<setw(12)<<"Colour"<<setw(10)<<"Price"<<setw(10)<<"Status"<<endl;
	 for(int i=0;i<80;i++)
	 {
		  gotoxy(i,2);
		  cout<<"-";
		  delay();
	 }
	 cout<<endl;
	 while(fin1.read(char*)&d,sizeof(d));
	 {
		  d.reportcar();
		  cout<<endl;
	 }
	 writerecord();
	 fin1.close();

  }
  void returncar()
  {
		clrscr();
		details d;
		customer c;
		int code;
		int ch;
		int flag=0;
		int count=0;
		int a=0;
  fstream carfile("1.dat",ios::in|ios::out|ios::binary);
		ofstream outfile("Del.dat",ios::binary);
		fstream file("c.dat",ios::in|ios::binary);
		gotoxy(3,3);
		cout<<"Please enter your Ecode \n";
		cin>>code;
		file.seekg(0.ios::beg);
		while(file.read(char*)&c,sizeof(c))
		{
			 count++;
			 if(c.retserial_no() ==code)
	 flag=1;
	 gotoxy(4,7);
	 cout<<"Record Deleted!!!";
	 break;
else outfile.write((char*) &d,sizeof(d));
}
outfile.close();
file.close();
if(flag==1)
{
	 remove("c.dat");
rename("Del.dat","c.dat");
}
if(flag==0)
{
gotoxy(4,20);
cout<<"Sorry this Ecode does not appear in the records list.";
}
if(flag==1 )
while(carfile.read((char*)&d,sizeof(d)))
{
if(d.retsrno()==code && strcmp(d.status,"On Rent")==0)
{
carfile.seekp ((a-1)*sizeof(d));
strcpy(d.status, "Available");
carfile.write((char*)&d,sizeof(d));
break;
}
carfile.close();
gotoxy(4,18);
cout<<"Press 1 to return to Mainmenu:";
cin>>ch;
if(ch==1)
	 mainmenu();
}

  }
  void display_all_vehicles()
{
clrscr();
char ch;
customer c;
details d;
int choice;
ifstream fin1;
fin1.open("1.dat",ios::binary);
if(!fin1)
{
cout<<"file not found";
return;
}
cout<<setw(5)<"Srno."<<setw(12)<"Car
Name"<<setw(12)<<"Model"<<setw(12)"Colour"<<setw(12)<"Price"<<setw(10)<<"Status"<<endl;
for(int i=0;i<76;i++)
{
gotoxy(i,2);
cout<<"-";
}
cout<<"\n";
while(fin1.read((char*) &d,sizeof(d)))
{
d.reportcar();
cout<<"\n";
}
fin1.close();
gotoxy(4,20);
cout«<"Press 1 to return to mainmenu:"
cin>>choice;
if(choice==1)
mainmenu();
}
void search_car(int n)
{
clrscr();
int ch;
details d;
}
int srno,count-0;
fstream fin;
int flag=0;
fin.open("1.dat",ios::out|ios::inlios:binary);
while(fin.read(char*)&d ,sizeof(d)))
{
count++
if(d. retsrno()==n)
{
flag=1;
fin.seekg((count-1)*sizeof(d));
d.dispone();
fin.close();
}
}
if(flag==0)
clrscr();
gotoxy(2,7);
cout<<"Sorry the serial no. inputed doesn't exist.Please restart program to
continue.";
}
gotoxy(10,16);
cout<<"To return to the Mainmenu press 1:";
cin>>ch;
if(ch==1)
mainmenu();
fin.close();
}
void delete_car(int n)
{
int ch;
details d;
int flag=0;
ifstream inFile;
ofstream outFile;
inFile.open("1.dat",ios::binary);
if(!inFile)
{
cout<<" File could not be open !! Press any Key...";
return;
}
outFile.open("Temp.dat",ios::binary);
inFile.seekg(0,ios:beg);
while(inFile.read(char*) &d, sizeof(d)))
{
	 if(d. retsrno()!=n)
outFile.write((char*)&d, sizeof(d));
else
flag=1;
if(flag==1)
{
inFile.close():
outFile.close();
remove("1.dat");
rename( Temp.dat","1.dat");
gotoxy(4,21);
cout<<"Record Deleted.";
}
if(flag==0)
{
gotoxy(4,21);
cout<<"Sorry this Serial no. does not appear in the vehicles list.";
}
gotoxy(3,23);
cout<<"To return to the Mainmenu press 1:";
cin>>ch;
if(ch==1)
mainmenu();
}
void chooseoptions()
{
clrscr();
int ch;
cardesign();
int num;
int n;
gotoxy(7,4);
cout<<" 1.Add a Vehicle";
gotoxy(7,6);
cout<<"2.Search for a Vehicle";
gotoxy(7,8);
coutss"3.Delete a Vehicle";
gotoxy(7,10);
cout<<"4.Modify a vehicle";
gotoxy(7,12);
cout<<"5" Return main menu";
gotoxy(7,13);
cout<<"\n \n Please enter your prefered option:";
cin>>ch;
switch(ch)
{
case 1:inputcar();
break;
case 2:
gotoxy(3,19);
cout<<"Enter the serial no. of the vehicle";
cin>>n;
search_car(n);
break;
case 3:
gotoxy(3,19);
cout<<"Enter the serial no. of the vehicle:";
cin>>n;
delete_car(n);
break;
case 4:modifycar();
break;
case 5:mainmenu();
break;
default:wrongoption();
}
}
void customeroptions()
{
clrscr();
design();
cardesign();




customer c;
gotoxy(10,10);
cout<<"1.Display customer records";
gotoxy(10,12);
cout<<"2.Return a car";
gotoxy(10,14);
cout<<"3.Return to main menu";
gotoxy(10,17);
cout<<"Enter your choice ";
cin>>ch;

switch(Ch)
{
case 1: disprecord();
break;
case 2: returncar();
break;
case 3: mainmenu();
break;
default : wrongoption();
}
}
void option()
{
clrscr();
details d;
design();
cardesign();
int ch;
gotoxy(7,6);
cout<<"1.Administrator options:";
gotoxy(7,8);
cout<<"2.Customer options :";
gotoxy(7,10);
cout<<"3.Return to main menu:";
gotoxy(5,14);
cout<<"Enter you viewership type(1/2):";
cin>>ch;
switch(ch);
{
case 1 : chooseoptions();
break;
case 2 : customeroptions();
break;
case 3 : mainmenu();
break;
default : wrongoption();
}
}
void typesofcars()
{
clrscr();
int ch;
design();
gotoxy(8,7);
cout<<"1. Rent a car";
gotoxy(8,9);
cout<<"2.Return to mainmenu";
gotoxy(7,13);
cout<<"Please Enter your car type :";
cin>ch;
switch(ch)
{
case 1:displaycar();
break;
case 2: mainmenu();
break;
default:wrongoption();
}
}
void loginsucess()
{
clrscr();
design();
welcome_screen();
gotoxy(5,22);
cout<"Login Successful!!";
gotoxy(53,22);
cout<<"Processing";

for(int i=63;i<70;i++)
{
gotoxy(i,22);
cout<<".";
delay1();
}
mainmenu();
}
void terms()
{
clrscr();
gotoxy(30,1);
cout<<"National car rentals";
gotoxy(7,5);
cout<<"Terms & conditions :-";
gotoxy(2,8);
cout<<"1.Those only above the age of 18 are permitted to rent a car.";
gotoxy(2,10);
cout<<"2.Under National Car Rental Services the price value alloted to a specific car is based only on its brand and current market value.";
gotoxy(2,13);
cout<<"3.Cars rented for a period between 15-30 days receive a discount of 5%";
gotoxy(2,15);
cout<<"4.Cars rented for a period between 30-45 days receive a discount of 15%";
gotoxy(2,17);
cout<<"5.Cars rented for a period between 45-60 days receive a discount of 20%";
gotoxy(2,19);
cout<<"6.Cars rented for a period between 60-100 days receive a discount of 25%";
gotoxy(2,21);
cout<<"7.Whereas cars rented for a period extending 100 days receive a discount of 35%";
gotoxy(56,23);
cout<<"T&C Apply";
}

void mainmenu()
{
delay1();
clrscr();
int ch;
design(0;
cardesign();
gotoxy(35,6);
cout<<"Main menu";
gotoxy(33,9);
cout<<"1.Rent a car";
gotoxy(33,11);
cout<<"2.Search and modify";
gotoxy(33,15);
cout<<"3.Display all vehicle";
gotoxy(33,15);
cout<<"4.Terms & conditions";
gotoxy(30,18);
cout<<"Please enter your option(1-4)";
cin>>ch;
switch (ch)
{
case 1 : typesofcars();
break;
case 2:option();
break;
case 3 : display_all_vehicles();
break;
case 4 : terms();
break;
default : gotoxy(8,20);
cout<<"Sorry invalid option";
}
}
void password()
{
int i;
char ch,usrnm[10]={"csproject"},pswrd[10]={"smile"},u[10],p[10];
for(i=0;i<5;i++)
{
gotoxy(30,13);
clreol();
cout<<"Username: ";
gotoxy(30,15);
gets(u);
gotoxy(39,15);
for(int i=0;i<10;i++)
{
ch=getch();
p[i]=ch;
if(ch==13)
{
P[i]='\0';
break;
}
cout<<'*';
}
if ((strcmp(usrnm,u)==0)&&(strcmp(p,pswrd)==0))
{
gotoxy(30,20);
cout<<"You may proceed...";
for (int i=0;i<4;i++)
delay1();
loginsucess();
break;
}
else continue;
}
if (i==5)
{
cout<<"\n\t\t\t You have entered the wrong password";
exit(0);
}
}

void welcome()
{
char ch;
int i,j;
for(i=39,j=40;j<80,i>0;i--,j++)
{
gotoxy(i,0);
cout<<"*";
gotoxy(j,0);
cout<<"*";
delaylong();
}
for(j=0;j<=24;j++)
{
gotoxy(79,j);
cout<<"*";
delaylong();
}
for(i=79,j=25;i>0;i--)
{
gotoxy(i,25);
cout<<"*";
delaylong();
}
for(i=25;i>=0;i--)
{
gotoxy(1,i);
cout<<"*";
delaylong();
}
gotoxy(33,5);
cout<<"________";
gotoxy(32,6);cout<<"/";
gotoxy(31,7);cout<<"/";
gotoxy(25,7);cout<<"_____";
gotoxy(24,8);cout<<"/";
gotoxy(23,9);cout<<"|>";
gotoxy(22,10);cout<<"{";
gotoxy(23,10);cout<<"___";
gotoxy(28,10);cout<<"/";
gotoxy(29,9);cout<<"__";
gotoxy(28,11);cout<<"\\";
gotoxy(29,11);cout<<"___";
gotoxy(31,11);cout<<"/";
gotoxy(31,10);cout<<"\\";
gotoxy(32,10);cout<<"______";
gotoxy(41,10);cout<<"/";
gotoxy(42,9);cout<<"__";
gotoxy(41,11);cout<<"\\";
gotoxy(42,11);cout<<"__";
gotoxy(44,11);cout<<"/";
gotoxy(44,10);cout<<"\\";
gotoxy(45,10);cout<<"_____";
gotoxy(52,10);cout<<"}";
gotoxy(50,9);cout<<"<)";
gotoxy(50,8.9);cout<<"\\";
gotoxy(44,7);cout<<"____";
gotoxy(41,6);cout<<"\\";
gotoxy(42,7);cout<<"\\";
gotoxy(32,7);cout<<"____";
gotoxy(38,7);cout<<"|";
gotoxy(38,6);cout<<";";
gotoxy(40,8);cout<<":";
gotoxy(40,9);cout<<":";
gotoxy(38,9);cout<<"^^";
gotoxy(29,10);cout<<"::";
gotoxy(42,10);cout<<"::";
gotoxy(33,6);cout<<"~";
gotoxy(53,10);cout<<"(#)";
gotoxy(55,9);cout<<"(#)";
gotoxy(57,8);cout<<"(#)";
gotoxy(7,17);
cout<<"Press any key to continue: ";
cin>>ch;
}
void main()
{
welcome();
design();
password();
}


