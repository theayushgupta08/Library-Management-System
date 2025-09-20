/*Automobiles Management
BY- Ayush Gupta*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Address  //Stucture for Address Input
{
	char city[20];
	char state[20];
	char country[20];
	int pincode;
	
};

struct Customer //Stucture for Customer Info Input
{
	char first_name[30];
	char last_name[30];
	char email[40];
	char email1[40];
	char pwd[40];
	char phone[10];
	Address a;
};


	Customer c[500];
	Address a[500];
	
	void purchase();  //Function for purchase Definition
	void feedback();  //Function for Feedback Definition
    void books();   //Function for Servicing Definition
    void login();    //Function for Login in Software Definition
    void registers();    //Function for Register in Software Definition
    void contact();   //Function for Contact Info Definition
    void aboutus();   //Fuction for About Us Definition
    void userinfo();    //Fuction for User Info Definition
    void rateus();    //Function for Rating the Software
    
    int z=0,j=0;  //Global identofiers to run MAIN MENU multiple times

int main()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLIBRARY MANAGEMENT\n\t\t\t\t\t\tBY Ayush Gupta";
	getch();
while(1)   //Loop to return to the MAIN MENU after Each Operation
{

	int op,op1,op2,op3,op4;
	system("cls");
	
		cout<<"\n********************************************************************************************************";
        cout<<"\n\t\t\t    Indian Library\n\t\t\tRead || Learn || Innovate";
		cout<<"\n********************************************************************************************************";
        cout<<"\n\t\t\tMAIN MENU";   //MAIN MENU 
		cout<<"\n********************************************************************************************************";
        cout<<"\n\t\t\t1- My Profile\n\t\t\t2- Books\n\t\t\t3- Feedback\n\t\t\t4- Buy Books Online\n\t\t\t5- Contact Us\n\t\t\t6- Dealer Locator\n\t\t\t7- About Us\n\t\t\t8- Rate Us\n\t\t\t9- Exit";
		cout<<"\n********************************************************************************************************";
        cout<<"\nEnter the option:";
		cin>>op;   //Option entry for Main Menu
		switch(op)  //Switch for Main Menu Options
		{
			case 1:    //Main Menu Option
			{
			system("cls");
		    cout<<"\n********************************************************************************************************";
			cout<<"\n\t\t\tMy Profile";
			cout<<"\n********************************************************************************************************";
            cout<<"\n\t\t\t1-Log In\n\t\t\t2-Register\n\t\t\t3-User Info";
			cout<<"\n********************************************************************************************************";
            cout<<"\nEnter the option:";
		    cin>>op1;  //Option Entry for the Profile of Main Menu
				switch(op1)  //Switch for Profile Options
				{
					case 1:     //My Profile Option
					{
						login();  //Fuction Call for login
					}
					break;
					case 2:     //My Profile Option
					{
						registers();   //Fuction Call for Register
					}
					break;
					case 3:
					{
							userinfo();       //Fuction Call for User Info
					}
					break;	
					default:    //My Profile Option
					{
						cout<<"\nInvalid Input!";
					    exit;
					}
					break;
					
			    }
		    }
		    break;
		    case 2:    //Main Menu Option
		    	{
		    		system("cls");
		    		books();   //Fuction Call for Service
				}
			break;
			case 3:    //Main Menu Option
			    {
			    	system("cls");
		     		feedback();   //Fuction Call for feedback
				}
			break;
			case 4:   //Main Menu Option
			    {
			    	system("cls");
			        purchase();      //Function Call for Purchase
			    }
			break;
			case 5:  //Main Menu Option
				{
					system("cls");
					contact();  //Function Call for contact info
				}
			break;
			case 6:  //Main Menu Option
				{
					system("cls");
					     //Function Call for Dealer Locator
				}
			break;	
			case 7:   //Main Menu Option
				{
					system("cls");
					aboutus();
				}
			break;
			case 8:
				{
					system("cls");
					rateus();
				}
			case 9:   //Main Menu Option
				{
					exit(0);
				}
			break;	
			default:    //Main Menu Option
			    {
			    	cout<<"\nINVALID OPTION!";
			    	exit;
				}
			break;						
		}
	
}

getch();
return 0;
}

void login()     //Fuction Definition for Login Operation
{

	system("cls");
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\tLogin";
	cout<<"\n********************************************************************************************************";
	cout<<"\nEnter your Email Id:";
	cin.get();
	cin.clear();
	cin.getline(c[z].email,40);
	cout<<"\nEnter your Password:";
	cin.get();
	cin.clear();
	cin.getline(c[z].pwd,40);
	cout<<"\nLogin Successful!";
    z++;    //It is a Global Variable, incremented after each operation.
	cout<<"\n********************************************************************************************************";
	cout<<"\n PRESS ANY KEY !!!";
    getch();
}

void registers()   //Fuction Definition for Registration Operation
{
	system("cls");
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\tRegistration";
	cout<<"\n********************************************************************************************************";
	cout<<"\nFirst Name:";
	cin.get();
	cin.clear();
	cin.getline(c[z].first_name,30);
	cout<<"\nLast Name:";
	cin.get();
	cin.clear();
	cin.getline(c[z].last_name,30);
	cout<<"\nE-Mail:";
	cin.get();
	cin.clear();
	cin.getline(c[z].email,40);
	cout<<"\nPassword:";
	cin.get();
	cin.clear();
	cin.getline(c[z].pwd,40);
	cout<<"\nConfirm Password:";
	cin.get();
	cin.clear();
	cin.getline(c[z].pwd,40);
	cout<<"\nMobile Number:";
	cin>>c[z].phone;
	cout<<"\nCity:";
	cin.get();
	cin.clear();
	cin.getline(c[z].a.city,40);
	cout<<"\nState:";
	cin.get();
	cin.clear();
	cin.getline(c[z].a.state,40);
	cout<<"\nCountry:";
	cin.get();
	cin.clear();
	cin.getline(c[z].a.country,40);
	cout<<"\nPincode:";
	cin>>c[z].a.pincode;
	cout<<"\nRegitration Successful!";
	z++;    //It is a Global Variable, incremented after each operation.
	cout<<"\n********************************************************************************************************";
	cout<<"\n PRESS ANY KEY !!!";
    getch();
}

void userinfo()
{
	
	for(int i=0;i<z;i++)
	{
	system("cls");
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\tUser Info";
	cout<<"\n********************************************************************************************************";
	cout<<"\n\nFIRST NAME: "<<c[i].first_name;
	cin.clear();
	cout<<"\n\nLAST NAME: "<<c[i].last_name;
	cin.clear();
	cout<<"\n\nE-MAIL ID: "<<c[i].email;
	cin.clear();
	cout<<"\n\nMOBILE NO.: "<<c[i].phone;
	cin.clear();
	cout<<"\n\nCITY: "<<c[i].a.city;
	cin.clear();
	cout<<"\n\nSTATE: "<<c[i].a.state;
	cin.clear();
	cout<<"\n\nCOUNTRY: "<<c[i].a.country;
	cin.clear();
	cout<<"\n\nPINCODE: "<<c[i].a.pincode;
	i++;
	cout<<"\n********************************************************************************************************";
	cout<<"\nPRESS ANY KEY !!!";
	}
	getch();
}

void books()
{
	int books,f,f1,f2,f3,f4;
	system("cls");
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\tBooks";
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\t1-Fiction\n\t\t\t2-Non-Fiction\n\t\t\t3-Biography\n\t\t\t4-Autobiography\n\t\t\t5-Drama";
	cout<<"\n********************************************************************************************************";
	cout<<"\nEnter the Option:";
	cin>>books;
	switch(books)
	{
		case 1:
			{
				cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tFiction";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tBook No. |\t\tBook Name";
	            cout<<"\n________________________________________________________________________________________________________";
	            cout<<"\n\t\t\t1 \t | To Kill a Mockingbird by Harper Lee\n\t\t\t2 \t | 1984 by George Orwell\n\t\t\t3 \t | The Great Gatsby by F. Scott Fitzgerald\n\t\t\t4 \t | The Catcher in the Rye by J.D. Salinger\n\t\t\t5 \t | The Hunger Games by Suzanne Collins\n\t\t\t6 \t | Animal Farm by George Orwell\n\t\t\t7 \t | Harry Potter and the Sorcerer's Stone by J.K. Rowling\n\t\t\t8 \t | The Da Vinci Code by Dan Brown\n\t\t\t9 \t | The Kite Runner by Khaled Hosseini\n\t\t\t10 \t | Lord of the Flies by William Golding";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\nEnter the Book no. you want to purchase:";
	            cin>>f;
	            switch(f)
	            {
	            	case 1:
	            	case 2:
	            	case 3:
	            	case 4:
	            	case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					goto purchase;
					break;
					default:
					exit;
					break;	
				}
			}
		break;
		case 2:
			{
				cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tNon-Fiction";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tBook No. |\t\tBook Name";
	            cout<<"\n______________________________________________________________________________________________________";
	            cout<<"\n\t\t\t1 \t | The Diary of a Young Girl by Anne Frank\n\t\t\t2 \t | The Immortal Life of Henrietta Lacks by Rebecca Skloot\n\t\t\t3 \t | Bossypants by Tina Fey\n\t\t\t4 \t | Outliers: The Story of Success by Malcolm Gladwell\n\t\t\t5 \t | Into the Wild by Jon Krakauer \n\t\t\t6 \t | A Short History of Nearly Everything by Bill Bryson\n\t\t\t7 \t | Night by Elie Wiesel\n\t\t\t8 \t | In Cold Blood by Truman Capote\n\t\t\t9 \t | Stiff: The Curious Lives of Human Cadavers by Mary Roach \n\t\t\t10 \t | The Glass Castle by Jeannette Walls";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\nEnter the Book no. you want to purchase:";
	            cin>>f1;
	            switch(f1)
	            {
	            	case 1:
	            	case 2:
	            	case 3:
	            	case 4:
	            	case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					goto purchase;
					break;
					default:
					exit;
					break;
				}
			}
		break;
		case 3:
			{
				cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tBiography";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tBook No. |\t\tBook Name";
	            cout<<"\n________________________________________________________________________________________________________";
	            cout<<"\n\t\t\t1 \t | Steve Jobs by Walter Isaacson\n\t\t\t2 \t | John Adams by David McCullough\n\t\t\t3 \t | Alexander Hamilton by Ron Chernow\n\t\t\t4 \t | Into the Wild by Jon Krakauer\n\t\t\t5 \t | Einstein: His Life and Universe by Walter Isaacson \n\t\t\t6 \t | Elon Musk: Tesla, SpaceX, and the Quest for a Fantastic Future by Ashlee Vance \n\t\t\t7 \t | Benjamin Franklin: An American Life by Walter Isaacson\n\t\t\t8 \t | Cleopatra: A Life by Stacy Schiff \n\t\t\t9 \t | Yes Please by Amy Poehler\n\t\t\t10 \t | Catherine the Great: Portrait of a Woman by Robert K. Massie  ";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\nEnter the Book no. you want to purchase:";
	            cin>>f2;
	            switch(f2)
	            {
	            	case 1:
	            	case 2:
	            	case 3:
	            	case 4:
	            	case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					goto purchase;
					break;
					default:
					exit;
					break;
				}
			}
		break;
		case 4:
			{
				cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tAutobiography";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tBook No. |\t\tBook Name";
	            cout<<"\n________________________________________________________________________________________________________";
	            cout<<"\n\t\t\t1 \t | The Autobiography of Malcolm X by Malcolm X\n\t\t\t2 \t | Eat, Pray, Love by Elizabeth Gilbert \n\t\t\t3 \t | When Breath Becomes Air by Paul Kalanithi\n\t\t\t4 \t | The Autobiography of Benjamin Franklin by Benjamin Franklin\n\t\t\t5 \t | Narrative of the Life of Frederick Douglass by Frederick Douglass\n\t\t\t6 \t | Long Walk to Freedom by Nelson Mandela  \n\t\t\t7 \t | A Child Called 'It' by Dave Pelzer\n\t\t\t8 \t | Just Kids by Patti Smith \n\t\t\t9 \t | Educated by Tara Westover\n\t\t\t10 \t | On Writing: A Memoir of the Craft by Stephen King (";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\nEnter the Book no. you want to purchase:";
	            cin>>f3;
	            switch(f3)
	            {
	            	case 1:
	            	case 2:
	            	case 3:
	            	case 4:
	            	case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					goto purchase;
					break;
					default:
					exit;
					break;
				}
			}
		break;
		case 5:
			{
				cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\tDrama";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\n\t\t\t1-\n\t\t\t2-\n\t\t\t3-\n\t\t\t4-\n\t\t\t5-\n\t\t\t6-\n\t\t\t7-\n\t\t\t8-\n\t\t\t9-\n\t\t\t10-";
	            cout<<"\n********************************************************************************************************";
	            cout<<"\nEnter the option:";
	            cin>>f4;
	            switch(f4)
	            {
	            	case 1:
	            		{
	            			
						}
				}
			}
		break;
		default:
			{
				cout<<"\nInvalid Input";
				exit;
			}
		break;	
	}
}
void feedback()      //Fuction Definition for Feedback Operation
{
	char fb[500];
	system("cls");
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\tFeedback";
	cout<<"\n********************************************************************************************************";
	cout<<"\nE-Mail:";
	cin.get();
	cin.clear();
	cin.getline(c[z].email,40);
	cout<<"\nFeedback:";
	cin.get();
	cin.clear();
	cin.getline(fb,500);
	cout<<"\nFeedback Submitted!";
	z++;  //It is a Global Variable, incremented after each operation.
	cout<<"\n********************************************************************************************************";
	cout<<"\n PRESS ANY KEY !!!";
    getch();
}

void contact()    //Fuction Definition for Contact Info Operation
{
	system("cls");
	cout<<"\n********************************************************************************************************";
	cout<<"\n\t\t\tContact Us";
	cout<<"\n********************************************************************************************************";
	cout<<"\n\nCUSTOMER CARE";
	cout<<"\n\nTEL: 2200114";
	cout<<"\nPhone: 9546281267";
	cout<<"\nEmail: indianlibrary90@gmail.com";
	cout<<"\nWebsite: www.IndianLibrary.com/Home";
	cout<<"\n********************************************************************************************************";
	cout<<"\nPRESS ANY KEY !!!";
	getch();
}

void aboutus()     //Fuction Definition for About Us Operation
{
	int op5;
	cout<<"\n********************************************************************************************************";	
	cout<<"\n\t\t\tAbout Us";
    cout<<"\n********************************************************************************************************";
    cout<<"\n\t\t1- About the Company \n\t\t2- Safety India ";
    cout<<"\n********************************************************************************************************";
    cout<<"\nEnter the option:";
    cin>>op5;  //Option Entry for About Us
                    
    switch(op5)   //Switch for options of About us
    {
        case 1:       //About Us Option
           	{
               	system("cls");
           		cout<<"\n********************************************************************************************************";
          		cout<<"\n\t\t\t\t\tCompany Info";
           		cout<<"\n********************************************************************************************************";
                cout<<"\nAyush Automobiles India is an undisputed leader in the Indian automobile industry. Started its journey in\nFebruary 1981 as Ayush Industry Limited, the company created history in the Indian automobile market with its hugely popular \nfour-wheeler and two-wheeler models. The company became the first Indian automobile company to manufacture one million vehicles in 1994.\nThe company became Ayush Automobiles India Limited on September 17, 2007.\n\nAyush's average revenue for the year ending 2010-11 is US$7.13 billion. Ayush sold 83,306 units of vehicles in September 2009, \ncomparing to 71,000 units in the same month in the previous year (with a growth rate of 17.3%). It also exported 11,712 units during\nSeptember 2009, comparing to 6,318 units in the same month in the previous year (with a growth rate of 85.4%).";
                cout<<"\n********************************************************************************************************";
				cout<<"\n\n\nPRESS ANY KEY !!!";
				getch();
            } 
        break;
		case 2:        //About Us Option
			{
			    system("cls");
				cout<<"\n********************************************************************************************************";
                cout<<"\n\t\t\t\t\tSafety India";
                cout<<"\n********************************************************************************************************";
				cout<<"\nEnhancing safety on the roads is one of Ayush's top priorities. We firmly believe that the realization of a \ncomfortable and an enjoyable mobile society depends on the mutual trust that automobile manufacturers like us, share with the \nconsumers and society. At Ayush, we use a three prong approach, based on preventing accidents from happening in the first place,\nminimizing injury in the unlikely event of an accident and our Driving Safety Promotion operations. Ayush's safety philosophy emphasizes \nthe development of appropriate technologies for its products, so as to ultimately achieve maximum riding comfort for its customers. \nAyush was the first manufacturer in Japan to develop and apply the anti-lock brake system. Educating the world, Ayush is actively \ninvolved with driving education across the world for promoting traffic safety.";
				cout<<"\n********************************************************************************************************";
				cout<<"\n\n\nPRESS ANY KEY !!!";
				getch();
			}	
		break;
		default:        //About Us Option
			{
				cout<<"\nInvalid Option!";
				exit;
			}
		break;	
	}
}


void employeeinformation()     //Fuction Definition for Employee Record Operation
{
	int erm;
	char pwd[40];
	system("cls");
	show(line)
	cout<<"\n\t\t\tEmployees Record";
	show(line)
    cout<<"\nEnter the Password:";
    cin.get();
	cin.getline(pwd,40);
	if((strcmp(pwd,"ayush")==0) || (strcmp(pwd,"AYUSH")==0))
	{
	system("cls");
	show(line)
	cout<<"\n\t\t\tEmployees Record";
	show(line)
	cout<<"\n\t\t\t1-Create a Record of New Book\n\t\t\t2-View a Record of New Book";
	show(line)
	cout<<"\nEnter the Option:";
	cin>>erm;     //Option Entry for Book Record of Main Menu
	
	switch(erm)     //Switch for Book Record Options
	{
		case 1:    //Employees Book Option
			{
				system("cls");
				show(line)
	            cout<<"\n\t\t\tCreate a Record of new Book";
            	show(line)
            	cout<<"\nBook Number           : ";
            	cin.get();
            	cin.clear();
            	cin>>b[m].bookno;
				cout<<"\nBookName                      : ";
				cin.get();
            	cin.clear();
            	cin.getline(b[m].bname,40);
				cout<<"\nBook Publisher                       : ";
                cin.get();
            	cin.clear();
            	cin.getline(b[m].bpublisher,40);
				cout<<"\nAuthor's Name             : ";
				cin.get();
            	cin.clear();
            	cin.getline(b[m].authorname,40);
				cout<<"\nBook Type             : ";
            	cin.getline(b[m].booktype,11);
				cout<<"\nBook Price (per copy)             : ";
            	cin>>b[m].price;
				cout<<"\nPublish Year       : ";
            	cin>>b.[m].year;
            	cout<<"\Number of Printed Copies                    : ";
            	cin>>b[m].copies;
				cout<<"\n                  : ";
				cin.get();
            	cin.clear();
            	cin.getline(er[m].a.street,60);
				cout<<"\nCity                      : ";
            	cin.getline(er[m].a.city,40);
				cout<<"\nState                     : ";
            	cin.getline(er[m].a.state,40);
				cout<<"\nPincode                   : ";
            	cin>>er[m].a.pincode;
				cout<<"\nNationality               : ";
            	cin.get();
            	cin.clear();
            	cin.getline(er[m].a.country,40);
            	cout<<"\n\nRecord Created !!!";
                m++;
            	show(line)
            	cout<<"\nPRESS ANY KEY !!!";
            	getch();
			}
		break;
		case 2:       //Employees Record Option
			{
				system("cls");
				show(line)
	            cout<<"\n\t\t\tView a Record";
            	show(line)
            	cout<<"\nEnter the Employee Number:";
            	cin.clear();
            	cin>>er[m].empno;
            	for(int i=1;i<m;i++)
            	{
				
            	system("cls");
				show(line)
	            cout<<"\n\t\t\tDetails of Emp No."<<er[m].empno;
            	show(line)
            	cout<<"\nName                      : "<<er[i].ename;
				cout<<"\nAge                       : "<<er[i].age;
				cout<<"\nFather's Name             : "<<er[i].efname;
				cout<<"\nMobile Number             : "<<er[i].mno;
				cout<<"\nQualification             : "<<er[i].qualification;
				cout<<"\nPosition in Company       : "<<er[i].position;
            	cout<<"\nSalary                    : "<<er[i].sal;
				cout<<"\nLocality                  : "<<er[i].a.street;
				cout<<"\nCity                      : "<<er[i].a.city;
				cout<<"\nState                     : "<<er[i].a.state;
				cout<<"\nPincode                   : "<<er[i].a.pincode;
				cout<<"\nNationality               : "<<er[i].a.country;
				show(line)
				cout<<"\nPRESS ANY KEY !!!";
				getch();
				
			   }
			}
		default:     //Employees Record Option
			{
				cout<<"\nINVALID INPUT";
				exit;
			}
		break;	
	}
	
    }
    else
    {
    	cout<<"\nWrong Password Entered!!!";
    	show(line)
    	cout<<"\n\nPRESS ANY KEY !!!";
    	getch();
	}
}

void rateus()
{
	int stars;
	char few,rec[10],con[10],inter[10];
	system("cls");
	show(line)
	cout<<"\n\t\t\tRate Us";
	show(line)
	cout<<"\nEnter the no. of Stars (1-5):";
	cin>>stars;
	
	if(stars==1)
	cout<<"\nWe are very sorry to give you bad expirience. We will try to improve it. Thank You! ";
	
	else if(stars==2)
	cout<<"\nWe are very sorry to give you bad expirience. We will try to improve it. Thank You! ";
	
	else if(stars==3)
	cout<<"\nWe are very sorry to give you bad expirience. We will try to improve it. Thank You! ";
	
	else if(stars==4)
	cout<<"\nWe will try to improve it more. Thank You! ";
	
	else if(stars==5)
	cout<<"\nThank You so much! ";
	show(line)
	cout<<"\nWould you like to take a survey about the software (y/n):";
	cin>>few;
	if(few=='y' || few=='Y')
	{
		cout<<"\nDo you recommend this software:";
		cin>>rec;
		cout<<"\nDo you like the control of this software:";
		cin>>con;
		cout<<"\nDo you like the interface of this software:";
		cin>>inter;
		cout<<"\n\nThank You!";
		show(line)
		cout<<"\nPRESS ANY KEY !!!";
		getch();
	}
	else
	{
		show(line)
		cout<<"\nPRESS ANY KEY !!!";
	    getch();
	}
	
}

void purchase()
{
	LABEL: purchase
	{
		
	}
}
