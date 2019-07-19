#include<iostream>
#include<ctime>
#include<conio.h>
#include<string.h>
using namespace std;
   int n,audi;
   char a[50]={'O','X','O','X','O','X','O','X','O','O',
               'X','O','O','O','O','X','O','O','O','O',
			   'O','X','X','O','X','O','O','X','O','O',
			   'O','O','O','O','O','O','O','O','O','O',
			   'X','X','O','X','O','O','X','X','X','O'};
   char	mo[10];
   int s[10],z=0;		  

   				  
void intro()
{ cout<<"\n                 *******************************   WELCOME   *******************************      ";
  getch();
  cout<<"\n                                                                                                  ";
  cout<<"\n                                            PVR CINEMAS BANGALORE                                 ";
  getch();
  cout<<"\n                                                                                                  ";
  cout<<"\n                 ***************************************************************************      ";
}
				  

class login
{ public:
	char name[50];
	char ph[50];
	char eid[50];
	
	void dlogin()
	{ cout<<"\n enter customer name: ";
	  cin>>name;
	  cout<<"\n enter customer mail id: ";
	  cin>>eid;
	  cout<<"\n enter customer phone number: ";
	  cin>>ph;
	}
	
   void validate()
  {int c=0;
   while(c==0)
   { if(strlen(ph)!=10)
     {c=0;cout<<"\ninvalid ph number\nplease enter again";
      cin>>ph;}
     else
   	{c=1;} 
   }
 }

};





class lang
{ public:
	int choice;
	int m;
	
	void dlang()
	{ cout<<"\n\n1.english\n2.hindi\n3.telugu\n";
	  cout<<"\n please select the language: ";
	  cin>>choice;
	}
};


class movie:public lang
{ public:
  void dmovie()
  {  int c=0;
	 while(c==0)
	 { if(choice==1)
	   { cout<<"\n\nHollywood movies";
	     cout<<"\n1.abc\n2.xyz\n3.pqr";c=1;}
	   else if(choice==2)
	   { cout<<"\n\nBollywood movies";
	     cout<<"\n1.Raid\n2.102 not out\n3.Bhaagi 2";c=1;}
   	   else if(choice==3)
	   {cout<<"\n\nTollywood movies";
	    cout<<"\n1.Bhaubali 2\n2.Spider\n3.Arjun reddy";c=1;}
       else
       {c=0;cout<<"please select a language from the given list: ";
	    cin>>choice;}
     }
    cout<<"\nplease select your movie: ";
    cin>>m;
  }
friend void validate(movie b);
};


void validate(movie b)
{ int c=0;
  if(b.choice==1)
  { audi=1;
    while(c==0)
    {  if(b.m==1)
       {strcpy(mo,"abc\0");c=1;}
       else if(b.m==2)
       {strcpy(mo,"xyz\0");c=1;}
       else if(b.m==3)
       {strcpy(mo,"xyz\0");c=1;}
       else
       {c=0;cout<<"please select a movie from the given list: ";
	    cin>>b.m;}
    }
  }
  
  else if(b.choice==2)
  {audi=2;
   while(c==0)
    {  if(b.m==1)
       {strcpy(mo,"Raid\0");c=1;}
       else if(b.m==2)
       {strcpy(mo,"102 not out\0");c=1;}
       else if(b.m==3)
       {strcpy(mo,"Bhaagi\0");c=1;}
       else
       {c=0;cout<<"please select a movie from the given list: ";
	    cin>>b.m;}
    }
  }
  
  else
  {audi=3;
   while(c==0)
    {  if(b.m==1)
       {strcpy(mo,"Bhaubali 2\0");c=1;}
       else if(b.m==2)
       {strcpy(mo,"Spider\0");c=1;}
       else if(b.m==3)
       {strcpy(mo,"Arjun Reddy\0");c=1;}
       else
       {c=0;cout<<"please select a movie from the given list: ";
	    cin>>b.m;}
    }
  }
}


void display()
{ cout<<"\n=====================================  SCREEN  ======================================";
  cout<<"\n ";
  cout<<"\n                                       SILVER                                        ";
  cout<<"\n                          1    2    3    4    5    6    7    8    9    10 ";  
  cout<<"\n                          "<<a[0]<<"    "<<a[1]<<"    "<<a[2]<<"    "<<a[3]<<"    "<<a[4]<<"    "<<a[5]<<"    "<<a[6]<<"    "<<a[7]<<"    "<<a[8]<<"    "<<a[9];
  cout<<"\n ";
  cout<<"\n                          11   12   13   14   15   16   17   18   19   20 ";
  cout<<"\n                          "<<a[10]<<"    "<<a[11]<<"    "<<a[12]<<"    "<<a[13]<<"    "<<a[14]<<"    "<<a[15]<<"    "<<a[16]<<"    "<<a[17]<<"    "<<a[18]<<"    "<<a[19];
  cout<<" \n";
  cout<<"\n                          21   22   23   24   25   26   27   28   29   30 "; 
  cout<<"\n                          "<<a[20]<<"    "<<a[21]<<"    "<<a[22]<<"    "<<a[23]<<"    "<<a[24]<<"    "<<a[25]<<"    "<<a[26]<<"    "<<a[27]<<"    "<<a[28]<<"    "<<a[29];
  cout<<"\n ";
  cout<<"\n                          31   32   33   34   35   36   37   38   39   40 ";
  cout<<"\n                          "<<a[30]<<"    "<<a[31]<<"    "<<a[32]<<"    "<<a[33]<<"    "<<a[34]<<"    "<<a[35]<<"    "<<a[36]<<"    "<<a[37]<<"    "<<a[38]<<"    "<<a[39];
  cout<<"\n ";
  cout<<"\n                          41   42   43   44   45   46   47   48   49   50 ";
  cout<<"\n                          "<<a[40]<<"    "<<a[41]<<"    "<<a[42]<<"    "<<a[43]<<"    "<<a[44]<<"    "<<a[45]<<"    "<<a[46]<<"    "<<a[47]<<"    "<<a[48]<<"    "<<a[49];
}


class seat
{ private:
  int s;
  			  
 public:
         void seatselect()
	        { int c=0;
	          while(c==0)
			  {cout<<"\nenter seat number: ";
	           cin>>s;
	           if(s>=51)
	           {c=0;cout<<"\n   invalid seat number\nchoose another";}
	           else
			   {s=s-1;c=1;}
	          }
	          while(a[s]=='X')
	          { cout<<"   sorry seat occupied..........!!!\n please choose another seat.....\n";
	            seatselect();
			  }
		}
			  
friend void display(seat c);					  
};

 
void display(seat c)
{ a[c.s]='X';	
  c.s=c.s+1;
  s[z]=c.s;
  z++;	
  cout<<"\n\n\n=====================================  SCREEN  ======================================";
  cout<<"\n ";
  cout<<"\n                                       SILVER                                        ";
  cout<<"\n                          1    2    3    4    5    6    7    8    9    10 ";  
  cout<<"\n                          "<<a[0]<<"    "<<a[1]<<"    "<<a[2]<<"    "<<a[3]<<"    "<<a[4]<<"    "<<a[5]<<"    "<<a[6]<<"    "<<a[7]<<"    "<<a[8]<<"    "<<a[9];
  cout<<"\n ";
  cout<<"\n                          11   12   13   14   15   16   17   18   19   20 ";
  cout<<"\n                          "<<a[10]<<"    "<<a[11]<<"    "<<a[12]<<"    "<<a[13]<<"    "<<a[14]<<"    "<<a[15]<<"    "<<a[16]<<"    "<<a[17]<<"    "<<a[18]<<"    "<<a[19];
  cout<<"\n ";
  cout<<"\n                          21   22   23   24   25   26   27   28   29   30 "; 
  cout<<"\n                          "<<a[20]<<"    "<<a[21]<<"    "<<a[22]<<"    "<<a[23]<<"    "<<a[24]<<"    "<<a[25]<<"    "<<a[26]<<"    "<<a[27]<<"    "<<a[28]<<"    "<<a[29];
  cout<<"\n ";
  cout<<"\n                          31   32   33   34   35   36   37   38   39   40 ";  
  cout<<"\n                          "<<a[30]<<"    "<<a[31]<<"    "<<a[32]<<"    "<<a[33]<<"    "<<a[34]<<"    "<<a[35]<<"    "<<a[36]<<"    "<<a[37]<<"    "<<a[38]<<"    "<<a[39];
  cout<<"\n ";
  cout<<"\n                          41   42   43   44   45   46   47   48   49   50 ";
  cout<<"\n                          "<<a[40]<<"    "<<a[41]<<"    "<<a[42]<<"    "<<a[43]<<"    "<<a[44]<<"    "<<a[45]<<"    "<<a[46]<<"    "<<a[47]<<"    "<<a[48]<<"    "<<a[49];
} 

class date
{public:int x,tdate,tmon,tyear;
        int date,mon,year;
        char t1[10]="10:10",t2[10]="14:40",t3[10]="17:20";
		char t4[10]="18:45",t5[10]="22:50",tc[10];
		
 void datetime()
 {
    
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
  tdate=timePtr->tm_mday;
  tmon=timePtr->tm_mon +1;
  tyear=timePtr->tm_year -100;
  
 ds:	
 cout<<"\nenter date: ";
 cin>>date;
 if(date>31 || date<tdate)	
 {cout<<"\nsorry movie not screened on this date...........";
  cout<<"\nplease enter again...!!";
  goto ds;
 }
 
 ms:
 cout<<"\nenter month: ";
 cin>>mon;
 if(mon!=tmon)	
 {cout<<"\nsorry movie not screened on this month...........";
  cout<<"\nplease enter again...!!";
  goto ms;
 }
 
 ys:
 cout<<"\nenter year ";
 cin>>year;
 if(year!=tyear)	
 {cout<<"\nsorry movie not screened on this year...........";
  cout<<"\nplease enter again...!!";
  goto ys;
 }
 
 cout<<date<<"-"<<mon<<"-"<<year;
 
 cout<<"\n\n\n";
 cout<<"\nmovie timings";
 cout<<"\n     1."<<t1<<"\n     2."<<t2<<"\n     3."<<t3<<"\n     4."<<t4<<"\n     5."<<t5;
 st:
 cout<<"\nenter movie timings prefered: ";
 cin>>x;
 if(x==1)
 strcpy(tc,t1);
 else if(x==2)
 strcpy(tc,t2);
 else if(x==3)
 strcpy(tc,t3);
 else if(x==4)
 strcpy(tc,t4);
 else if(x==5)
 strcpy(tc,t5);
 else
 {cout<<"\ninvalid option\nenter again:";
 goto st;}
 cout<<tc;
}

};

class payment
{ public: 
     int pid,cost;
     int c,an,pin,tt;
     float tax;
  public:
  	   void pay()
  	   { pid=2033;
  	     cost=300;
  	     tax=30.5;
		cout<<"\nenter mode of payement\n1.cedit card\n2.debit card\n\n";
  	    cin>>c;
  	    tt=n*(cost+tax);
  	    cout<<"\ntotal cost:"<<tt;
		cout<<"\nenter acc no:"; 
	    cin>>an;
	    cout<<"\nenter pin:";
	    cin>>pin;
	    cout<<"\n   PAYMENT SUCESSFULL !!!!";
	    pid++;
       }     
};


class ticket:public login,public payment,public date
{ public:
    void bill()
    { cout<<"\n\n\n\n\n";
	  cout<<"\n===========================E-TICKET===========================";
      cout<<"\n";
      cout<<"\n                   PVR CINEMAS BANGALORE                      ";
      cout<<"\n";
      cout<<"\n==============================================================";
      cout<<"\n";
      cout<<"\n MOVIE : "<<mo;
      cout<<"\n DATE: "<<date<<"-"<<mon<<"-"<<year<<"                   time: "<<tc;                                 
      cout<<"\n AUDI: "<<audi;
      cout<<"\n SEAT NOS: ";
      for(z=0;z<n;z++)
      {cout<<s[z]<<"\t"; }
      cout<<"\n";
      cout<<"\n--------------------------------------------------------------";
      cout<<"\n CUSTOMER NAME: "<<name;
      cout<<"\n CONTACT NUMBER: "<<ph;
      cout<<"\n--------------------------------------------------------------";
      cout<<"\nMODE OF PAYEMENT: ";
      if(c==1)
      cout<<"credit card"<<"\nacc no:"<<an;
      else
      cout<<"debit card"<<"\nacc no:"<<an;
      cout<<"\npayment id: "<<pid;
      cout<<"\n1 seat: "<<cost;
      cout<<"\nNUMBER OF SEATS: "<<n;
	  cout<<"\ntax: "<<tax;      
	  cout<<"\n--------------------------------------------------------------";
	  cout<<"\ntotal:                                                "<<tt;
	  cout<<"\n";
	  cout<<"\n               ----- THANK YOU  -----                         ";
	  cout<<"\n                ENJOY YOUR MOVIE !!!!!                         ";         
	}
};

int main()
{ int i=0;
  
  intro();
  ticket a;
  a.dlogin();
  a.validate();
  
  movie b;
  b.dlang();
  b.dmovie();
  validate(b);
  
  a.datetime();
  cout<<"\n please enter number of seats required: ";
  cin>>n;
  
  display();
  seat c;
  for(i=0;i<n;i++)
  { c.seatselect();
    display(c);
  }
  
  a.pay();
  a.bill();
  
}

