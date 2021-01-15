#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
void main(void)
{
    char name[50],ch[11],id[20],pass[8],ch1;
    char asd1[]="\n\n			Press any key to continue.....";
    int x,choice,choice1,chc,i;
    clrscr();
	cout<<" \n\n\n\t\t\t Quiz Contest\n";
	cout<<"GENERAL INSTRUCTIONS\n";
	cout<<"This is a multiple choice quiz contest.\n";
	cout<<"5 points will be awarded for each correct answer and\n";
	cout<<"If more than one options are entered,";
	cout<<"\n\t FIRST OPTION to be entered will be considered\n";
	cout<<"Press any key to continue";
	getch();
	clrscr();
    randomize();
    do
    {
	x=0;
	gotoxy(30,9);
	char name[]="ENTER YOUR NAME:";
	for(i=0;name[i]!='\0';i++)
	{
		delay(80);
		cout<<name[i];
	}
	cin>>name;
		for(i=0;asd1[i]!='\0';i++)
	{
		delay(100);
		cout<<asd1[i];
	}
	getch();
	clrscr();
	gotoxy(33,9);
	char asd[]="WELCOME TO OUR QUIZSHOW";
	for(i=0;asd[i]!='\0';i++)
	{
		delay(100);
		cout<<asd[i];
	}
	cout<<"  "<<name;

	for(i=0;asd1[i]!='\0';i++)
	{
		delay(100);
		cout<<asd1[i];
	}

	getch();
xy:	clrscr();
	cout<<"1.Student";
	cout<<"\n2.Admin";
	cout<<"\n\nEnter you choice:";
	cin>>chc;
	for(i=0;asd1[i]!='\0';i++)
	{
		delay(100);
		cout<<asd1[i];
	}
	getch();clrscr();
	if(chc==2)
	{
		cout<<"ENTER YOUR ID:";
		cin>>id;
		cout<<"ENTER YOUR PASS:";
		for(i=0;i<8;i++)
		{
			ch1=getch();
			pass[i]=ch1;
			if(ch1!=13)
				cout<<"*";
			else if(ch1==13)
				break;

		}
		pass[i]='\0';
		if(strcmp(pass,"admin")==0)
		{
			cout<<pass;
			getch();
			clrscr();
			char load[]="LOADING.................";
			for(i=0;load[i]!='\0';i++)
			{
				delay(250);
				cout<<load[i];
			}
			clrscr();
			cout<<"WELCOME\n";
			cout<<"ENTER Qs \n";
			cout<<"press 1 to continue";
			cin>>choice1;
			if(choice1==1)
			{
				clrscr();
				ofstream file("CSE.txt",ios::app);
				char que[100],ans1[10],ans2[10],ans3[10],ans4[10];
				int cor_ans;
				cin.getline(que,100);
				cout<<"ENTER Q:";
				cin.getline(que,100);
				cout<<"\nENTER OPTION 1:";
				cin.getline(ans1,10);
				cout<<"\nENTER OPTION 2:";
				cin.getline(ans2,10);
				cout<<"\nENTER OPTION 3:";
				cin.getline(ans3,10);
				cout<<"\nENTER OPTION 4:";
				cin.getline(ans4,10);
				file<<que<<endl;
				file<<ans1<<endl<<ans2<<endl<<ans3<<endl<<ans4<<endl;
				cout<<"\nENTER THE ANS:";
				file<<"ANS:";
				cin>>cor_ans;
				file<<cor_ans;
				file.close();
				cout<<"\t\t\t\t\n\npress any key to continue";
				getch();
				goto xy;

			}

		}
		else
		{
			goto xy;
		}
	}							
	for(i=10;i>0;i--)
	{
	 int rndnum;
	 rndnum=random(i);
	 if(rndnum==1)
	 {

		 cout<<"\n Enter answer in form of 'a','b' and'c'only.";
		 cout<<"\n What is called as ' THE HOLY LAND'?";
		 cout<<"\n a.Jerusalem \t b.Mathura";
		 cout<<"\n c.Mecca  \td.New york";
		 cout<<"\nYour choice:";
		 cin>>ch[1];
		 if(ch[1]=='a')
		 {
		     x=x+10;
		     cout<<"\n Good Job.";
		     cout<<"\n Your score is "<<x;
		 }
		 else
		 {
		     cout<<"\n Sorry wrong answer.";
		     goto abc;
		 }
	 }
	 if(rndnum==2)
	 {
		 cout<<"\n What is called as ' THE ROOF OF THE WORLD'?";
		 cout<<"\n a.Nepal \t b.Rome";
		 cout<<"\n c.Tibet \t d.Itlay";
		 cout<<"\nYour choice:";
		 cin>>ch[2];
		 if(ch[2]=='c')
		 {
		     x=x+10;
		     cout<<"\n Good Job.";
		    cout<<"\n Your score is "<<x;
		 }
		 else
		 {
		     cout<<"\n Sorry wrong answer.";
		     goto abc;
		 }
	 }
	 if(rndnum==3)
	 {
		cout<<"\n What is called as ' THE LAND OF RISING SUN'?";
		cout<<"\n a.Chicago \t b.Japan";
		cout<<"\n c.Tibet \t d.North Korea";
		cout<<"\nYour choice:";
		 cin>>ch[3];
		if(ch[3]=='b')
		 {
		     x=x+10;
		    cout<<"\n Good Job.";
		     cout<<"\n Your score is "<<x;
		 }
		else
		{
		     cout<<"\nSorry wrong answer.";
		    goto abc;
		}
	 }
	 if(rndnum==4)
	 {

		cout<<"\n What is called as ' THE GIFT OF NILE'?";
		cout<<"\n a.Chicago \t b.Egypt";
		cout<< "c.Africa \t d.Mexico";
		cout<<"\nYour choice";
		cin>>ch[4];
		if(ch[4]=='b')
		{
		  x=x+10;
		  cout<<"\n Good Job.";
		  cout<<"\n Your score is "<<x;
		}
		 else
		{
		 cout<<"Sorry wrong answer.";
		 goto abc;
		}
	 }
	 if(rndnum==5)
	 {

		 cout<<"\n What is called as ' THE LAND OF MIDNIGHT SUN'?";
		 cout<<"\n a.Norway \t b.Japan";
		 cout<<"\n c.Australia \td.South korea";
		 cout<<"\nYour choice:";
		 cin>>ch[5];
		 if(ch[5]=='a')
		{
		     x=x+10;
		   cout<<"\n Good Job.";
		   cout<<"\n Your score is "<<x;
		}
		 else
		{
		     cout<<"\n Sorry wrong answer.";
		    goto abc;
		}
	 }
	}
	abc:
	if(x==100)
	{
	
	cout<<"THANK YOU FOR PLAYING\n";
	cout<<"No cheating"<<name<<"you have done this before";
	break;
	}
	if(x==90)
	{
	    cout<<"THANK YOU FOR PLAYING\n";
	    cout<<"\n"<<name<<"you are extremely intelligent";
	    cout<<"\nYpur score is 90";
	}
	if(x==80)
	{
	    cout<<"THANK YOU FOR PLAYING\n";
	    cout<<"\n "<<name<<" you are intelligent.";
	    cout<<"\n Your Score is 80";
	}
	if(50==x||x==70||x==60)
	{
	    cout<<"THANK YOU FOR PLAYING\n";
	    cout<<"\n "<<name<<" you are average";
	    cout<<"\n Your Score is "<<x<<".";
	    cout<<"\n Better luck next time";
	}
	else
	if(x<=40)
	{
		cout<<"THANK YOU FOR PLAYING\n";
		cout<<"\n No use........ Not even 5 questions right";
		cout<<"\n\n\n Do you want to play again?(y/n)";
		cin>>ch[11];
		clrscr();
	}


    }while(ch[11]=='Y'||ch[11]=='y');
    getch();
}
