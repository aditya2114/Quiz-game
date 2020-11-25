/*This is the quiz buster game program
developed by aditya sangave as the project for object oriented programming in c++*/
 
#include<iostream>
#include<conio.h>
using namespace std;

class Quiz
{										//start of class quiz
	public:
		int topics();
		int technical(int);
		int non_technical(int);
};										//End of class quiz
int Quiz::topics()
{										//start of function topics
	int choice,ch;
	cout<<"\t---------Press 1 for technical topic and 2 For non-technical topic------------\n";
	cout<<"\t\t\t-----------------\n";
	cout<<"\t\t\t|1.Technical    |\n";
	cout<<"\t\t\t|2.Non-Technical|\n";
	cout<<"\t\t\t-----------------\n";
	cout<<"Enter your choice\n";
	cin>>choice;
	return choice;
}										//end of function topics

int Quiz::technical(int ch)
{														//start of function technical
	int count1 = 0, score[2],i,choice;
	string ans;
	if(ch==1)
	{
		cout<<"\t------------------You have chosen Artificial Intelligence Quiz----------------------------\n";
		cout<<"Select Your Level\n";
		cout<<"1.Begginer\t 2.Expert\n";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			cout<<"You have chosen Begginer\n";
			cout<<"Are you ready? \nBest Of Luck\n";
			cout<<"Press Enter to start\n";
			getch();
			system("cls");	
				cout<<"1.What is Artificial intelligence?\n";
				cout<<"a.Putting your intelligence into Computer\n";
				cout<<"b.Programming with your own intelligence\n";
				cout<<"c.Making a Machine intelligent\n";
				cout<<"d.Putting more memory into Computer\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"2.Artificial Intelligence has its expansion in the following application.\n";
				cout<<"a.Planning and Scheduling\n";
				cout<<"b.Game Playing\n";
				cout<<"c.Robotics\n";
				cout<<"d.All of above\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"3.The characteristics of the computer system capable of thinking, reasoning and learning is known is\n";
				cout<<"a.machine intelligence\n";
				cout<<"b.human intelligence\n";
				cout<<"c.artificial intelligence\n";
				cout<<"d.virtual intelligence\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"4.The first AI programming language was called:\n";
				cout<<"a.BASIC\n";
				cout<<"b.FORTRAN\n";
				cout<<"c.IPL\n";
				cout<<"d.LISP\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"5.What was originally called the imitation game by its creator?\n";
				cout<<"a.The Turing Test\n";
				cout<<"b.LISP\n";
				cout<<"c.The Logic Theorist\n";
				cout<<"d.Cybernetics\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Your score is "<<count1<<"\n";
				return count1;
			}
			if(choice==2)
			{
				cout<<"You have chosen Expert\n";
				cout<<"Are you ready? \nBest Of Luck\n";
				cout<<"Press Enter to start\n";
				getch();
				system("cls");
				cout<<"1.Which instruments are used for perceiving and acting upon the environment\n";
				cout<<"a.Sensors and Actuators\n";
				cout<<"b.Sensors\n";
				cout<<"c.Perceiver\n";
				cout<<"d.None of the mentioned\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"2.What is meant by agent’s percept sequence?\n";
				cout<<"a.Used to perceive the environment\n";
				cout<<"b.Complete history of actuato\n";
				cout<<"c.Complete history of perceived things\n";
				cout<<"d. None of the mentioned\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"3.How many types of agents are there in artificial intelligence\n";
				cout<<"a.1\n";
				cout<<"b.2\n";
				cout<<"c.3\n";
				cout<<"d.4\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="d")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"4.What is the rule of simple reflex agent\n";
				cout<<"a.Simple-action rule\n";
				cout<<"b.Condition-action rule\n";
				cout<<"c.Simple & Condition-action rule\n";
				cout<<"d.None of the mentioned\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="b")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"5.Which element in the agent are used for selecting external actions?\n";
				cout<<"a.Perceive\n";
				cout<<"b.Performance\n";
				cout<<"c.Learning\n";
				cout<<"d.Actuator\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Your score for level 1 is "<<count1<<"\n";
				return count1;
			}
	}
	else if(ch==2)
	{
		cout<<"\t--------------------------You have chosen 'C Programming' Quiz------------------------------------\n";
		cout<<"Select Your Level\n";
		cout<<"1.Begginer\t 2.Expert\n";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			cout<<"You have chosen Begginer\n";
			cout<<"Are you ready? \nBest Of Luck\n";
			cout<<"Press Enter to start\n";
			getch();
			system("cls");	
				cout<<"1.Which of the following is not a valid variable name declaration\n";
				cout<<"a.int __a3;\n";
				cout<<"b.int __3a;\n";
				cout<<"c.int __A3\n";
				cout<<"d.None of the mentioned\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"2.Is it possible to run program without main() function?\n";
				cout<<"a.Yes\n";
				cout<<"b.No\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="b")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"3.What is sizeof() in C?\n";
				cout<<"a.Operator\n";
				cout<<"b.Function\n";
				cout<<"c. Macro\n";
				cout<<"d.None of these\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"4.Is it true that a function may have several declaration, but only one definition.\n";
				cout<<"a.True\n";
				cout<<"b.False\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"5.Is the following statement a declaration or definitio\n";
				cout<<"a. Declaration\n";
				cout<<"b.Defination\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Your score is "<<count1<<"\n";
				return count1;
			}
			if(choice==2)
			{
				cout<<"You have chosen Expert\n";
				cout<<"Are you ready? \nBest Of Luck\n";
				cout<<"Press Enter to start\n";
				getch();
				system("cls");
				cout<<"1.An exception is __\n";
				cout<<"a.Runtime Error\n";
				cout<<"b.Compile time error\n";
				cout<<"c.Logical Error\n";
				cout<<"d.None of above\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"2.Prior to using a pointer variable it should be\n";
				cout<<"a.Declared\n";
				cout<<"b.Initialized\n";
				cout<<"c.Both declared and initalized\n";
				cout<<"d. None of the mentioned\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="c")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
					
				cout<<"3. In C a pointer variable to an integer can be created by the decalaration\n";
				cout<<"a.int p*;\n";
				cout<<"b.int *p;\n";
				cout<<"c.int +p\n";
				cout<<"d.int $p;\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="b")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"4.Which of the following is most appropriate?\n";
				cout<<"a.int*matrix; .....; free(void) matrix\n";
				cout<<"b.int*matrix; .....; free (matrix);\n";
				cout<<"c.int*matrix; .....; if(matrix!=null) free(void*)matrix;\n";
				cout<<"d.None of the mentioned\n\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="d")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Press Enter for next question\n";
				getch();
				system("cls");
				cout<<"5.Which of the following statements is incorrect \n";
				cout<<"a.C provides no input-output features\n";
				cout<<"b.C provides no file access features\n";
				cout<<"c.Provides no features to manipulate composite\n";
				cout<<"d.All of these\n";
				cout<<"Enter your answer\n";
				cin>>ans;
				if(ans=="a")
				{
					cout<<"Right answer\n";
					count1+=5;
				}
				else
				{
					cout<<"Wrong answer\n";
				}
				cout<<"Your score for level 1 is "<<count1<<"\n";
				return count1;
			}
	}
}																	//End of function Technical

int Quiz::non_technical(int ch)
{														//start of function non_technical
	int choice;
	string ans;
	int count1=0;
	if(ch==1)
	{
		cout<<"\t--------------------------------You have chosen 'Science' Quiz---------------------------------------\n";
		cout<<"Select Your Level\n";
		cout<<"1.Begginer\t 2.Expert\n";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			cout<<"You have chosen Begginer\n";
			cout<<"Are you ready? \nBest Of Luck\n";
			cout<<"Press Enter to start\n";
			getch();
			system("cls");	
			cout<<"1.The force that binds the neutrons and protons in a nucleus is called as:\n";
			cout<<"a.Weak Nuclear Force\n";
			cout<<"b.Strong Nuclear Force\n";
			cout<<"c.Electromagnetic Force\n";
			cout<<"d.Gravitational Force\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="b")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"2.Who among the following is credited for the Corpuscular theory of light?\n";
			cout<<"a.Isaac Newton\n";
			cout<<"b.Christiaan Hyugens\n";
			cout<<"c.Albert Einstein\n";
			cout<<"d.James Clerk Maxwel\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="a")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"3.Which one of the following has ‘ohm’ as its unit?\n";
			cout<<"a.Resistivity\n";
			cout<<"b.Conductivity\n";
			cout<<"c.Conductance\n";
			cout<<"d.Inductive Reactance\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="d")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"4.What is the S.I unit of Pressure Energy?\n";
			cout<<"a.Nm\n";
			cout<<"b.Watt\n";
			cout<<"c.Joule\n";
			cout<<"d.No units\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"5.Which of the following conditions is true for two vectors to be collinear?\n";
			cout<<"a.Equal magnitude\n";
			cout<<"b.Same Direction\n";
			cout<<"c.Acting along the parallel straight lines\n";
			cout<<"d.Both a and c\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			return count1;
		}
		else if(choice==2)
		{
			system("cls");
			cout<<"You have chosen Expert\n";
			cout<<"Are you ready? \nBest Of Luck\n";
			cout<<"Press Enter to start\n";
			getch();
			system("cls");
			cout<<"1.What is the core objective of World Bank supported STRIVE project in India?\n";
			cout<<"a.Elimination of Malaria\n";
			cout<<"b.Elimination of HIV/ AIDS\n";
			cout<<"c.Skill Development\n";
			cout<<"d.Rural Infrastructure Development\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"2.From which among the following parts of a plant Cinnamon is obtained?\n";
			cout<<"a.Leaves\n";
			cout<<"b.Seeds\n";
			cout<<"c.Bark\n";
			cout<<"d.Buds\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"3.Which among the following is the most important role played by Ribosome in the cells?\n";
			cout<<"a.Synthesis of RNA\n";
			cout<<"b.Synthesis of DNA\n";
			cout<<"c.Synthesis of Proteins\n";
			cout<<"d.Metabolism of Carbohydrates\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="a")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"4.Which of the following treatment is used for removal of biological impurities?\n";
			cout<<"a.Sedimentation\n";
			cout<<"b.Boiling\n";
			cout<<"c.Sterilization\n";
			cout<<"d.distillation\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			cout<<"5.Which of the following conditions is true for two vectors to be collinear?\n";
			cout<<"a.EBT\n";
			cout<<"b.Phenolphthalein\n";
			cout<<"c. Methyl orange\n";
			cout<<"d.Both a and c\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="a")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			return count1;	
		}
}
else if(ch==2)
{
		cout<<"\t-----------------------You have chosen 'General Knowledge Quiz' Quiz------------------------\n";
		cout<<"Select Your Level\n";
		cout<<"1.Begginer\t 2.Expert\n";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			cout<<"You have chosen Begginer\n";
			cout<<"Are you ready? \nBest Of Luck\n";
			cout<<"Press Enter to start\n";
			getch();
			system("cls");	
				
			cout<<"1.National Income estimates in India are prepared by\n";
			cout<<"a.Planning Commission\n";
			cout<<"b.Reserve Bank of India\n";
			cout<<"c.Central statistical\n";
			cout<<"d.Indian statistical Institute\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"2.The staple food of the Vedic Aryan was\n";
			cout<<"a.Barley and rice\n";
			cout<<"b.Milk and its products\n";
			cout<<"c.Rice and pulses\n";
			cout<<"d.Vegetables and fruit\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="b")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"3.The tropic of cancer does not pass through which of these Indian states ?\n";
			cout<<"a.Madhya Pradesh\n";
			cout<<"b.West Bengal\n";
			cout<<"c.Rajasthan\n";
			cout<<"d.Odisha\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="d")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"4.The purest form of iron is \n";
			cout<<"a.wrought iron	\n";
			cout<<"b.steel\n";
			cout<<"c.pig iron\n";
			cout<<"d.nickel steel\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="a")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"5.Fathometer is used to measure\n";
			cout<<"a.Earthquakes\n";
			cout<<"b.Rainfall\n";
			cout<<"c.Ocean depth\n";
			cout<<"d.Sound intensity\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="c")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			return count1;
		}
		else if (choice==2)
		{
			system("cls");
			cout<<"You have chosen Begginer\n";
			cout<<"Are you ready? \nBest Of Luck\n";
			cout<<"Press Enter to start\n";
			getch();
			system("cls");
			
			cout<<"1.In which of the following festivals are boat races a special feature?\n";
			cout<<"a.Rongali Bihu\n";
			cout<<"b.Onam\n";
			cout<<"c.Pongal\n";
			cout<<"d.Navratri\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="b")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"2.The paintings in the Ajanta and Ellora caves are indicative of the development of art under the -\n";
			cout<<"a.Pallavas\n";
			cout<<"b.Chalukyas\n";
			cout<<"c.Pandyas\n";
			cout<<"d.Rashtrakutas\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="b")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"3.Tansen, a great musician of his time, was in the court of –\n";
			cout<<"a.Akbar\n";
			cout<<"b.Shahjahan\n";
			cout<<"c.Bahadur Shah\n";
			cout<<"d.Jahangir\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="d")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"4.Who put up the most stiff resistance against the British in India?\n";
			cout<<"a.The Rajputs\n";
			cout<<"b.The Marathas\n";
			cout<<"c.The Moghals\n";
			cout<<"d. The Sikh\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="b")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			cout<<"Press Enter for next question\n";
			getch();
			system("cls");
			
			cout<<"5.D.D.T. was invented by\n";
			cout<<"a.Paul Muller\n";
			cout<<"b.John Dalton\n";
			cout<<"c. Rudolf\n";
			cout<<"d.None of these\n";
			cout<<"Enter your answer\n";
			cin>>ans;
			if(ans=="a")
			{
				cout<<"Right answer\n";
				count1+=5;
			}
			else
			{
				cout<<"Wrong answer\n";
			}
			return count1;	
		}
	}
}														//End of function non_technical
class Play:public Quiz
{													//start of class Play
	private:
		string name1, name2;
	public:
		void rules();
		void introduction()
		{
			cout<<"\t------------------------------------------------------------------------------------------\n";
			cout<<"\t--------------------------------WELCOME TO QUIZ BUSTER------------------------------------\n";
			cout<<"\t------------------------------------------------------------------------------------------\n\n";
			cout<<"Enter name of player 1\n";
			cin>>name1;
			cout<<"Enter name of player 2\n";
			cin>>name2;
		}
		int winner(int score[1])
		{
			int choice,i;
			cout<<name1<<" score is "<<score[0]<<"\n";
			cout<<name2<<" score is "<<score[1]<<"\n";
			if(score[0] > score[1])
			{
				cout<<"\t\t\t___________________________________________________\n";
				cout<<"\t\t\t"<<name1<<" is winner!\n";
				cout<<"\t\t\t___________________________________________________\n";
			}
			else if(score[0]==score[1])
			{
				cout<<"\t\t\t___________________________________________________\n";
				cout<<"\t\t\t"<<"There is tie!\n";
				cout<<"\t\t\t___________________________________________________\n";
			}
			else
			{	
				cout<<"\t\t\t___________________________________________________\n";
				cout<<"\t\t\t"<<name2<<" is winner!\n";
				cout<<"\t\t\t___________________________________________________\n";
			}	
			cout<<"Press Enter\n";
			getch();
			return 0;
		}
};											//End of class Play

void Play::rules()
{											//Start of function rules
	cout<<"\t----------------------RULES---------------------\n";
	cout<<"\t1.Following Questions will be related with your chosen topic \n";
	cout<<"\t2.Each player have to choose their level Begginer or Expert\n";
	cout<<"\t3.Each player have to solve 5 questions \n";
	cout<<"\t4.For Each question solved correct player will get 5 points \n";
	cout<<"\t5.Total there are 25 points \n";
	cout<<"\t6.Player with highest point will win \n\n";
	cout<<"------------------------------------------------------------------------------------------\n\n";
	cout<<"Press Enter to start\n";
	getch();
	system("cls");
}												//end of function rules	
int main()
{												//start of main
	Play p;
	p.introduction();
	label:	
	system										//("cls");
	Play p1[1];
	int score[1],ch,choice;
	p.rules();
	int x = p.topics();
	if(x == 1)
	{
		cout<<"\t---------Press 1 for technical topic and 2 For non-technical topic------------\n\n";
		cout<<"\t\t\t-----------------\n";
		cout<<"\t\t\tTechnical contain following options\n";
		cout<<"\t\t\t1.Artificial Intelligence (AI)\n";
		cout<<"\t\t\t2.C Programming\n";
		cout<<"\t\t\t-----------------\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		system("cls");
		for(int i=0;i<=1;i++)
		{
			cout<<"Player "<<i+1<<" turn\n";
			score[i]=p1[i].technical(ch);
			system("cls");
		}	
	}
	else if(x==2)
	{
		cout<<"\t---------Press 1 for technical topic and 2 For non-technical topic------------\n\n";
		cout<<"\t\t\t-----------------\n";
		cout<<"\t\t\tNon-Technical contain following options\n";
		cout<<"\t\t\t1.Science\n";
		cout<<"\t\t\t2.General Knowledge\n";
		cout<<"\t\t\t-----------------\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		system("cls");
		for(int i=0;i<=1;i++)
		{
			cout<<"Player "<<i+1<<" turn\n";
			score[i]=p1[i].non_technical(ch);
			system("cls");
		}	
	}
	p.winner(score);
	getch();
	system("cls");
	cout<<"Do you want to play again (1-'Yes'/2-'No')\n";
	cin>>choice;
	if(choice==1)
	{
		goto label;
	}
	else
	{
		system("exit");
	}	
	return 0;
}											//End of main
