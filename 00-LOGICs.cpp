#include <iostream>
using namespace std;
int main()
{
	bool P;
	bool Q;
	int choices;
	int ternot;
	main:
		cout<<"          LOGIC"<<endl<<"PLEASE TYPE 1 FOR TRUE AND 0 FOR FALSE"<<endl;
		cout<<"Assign for P\n";
		cin>>P;
		if(P==1)
			{
				cout<<"P IS TRUE"<<endl;
			}
		if(P==0)
			{
				cout<<"P IS FALSE"<<endl;
			}
		cout<<"Assign for Q\n";
		cin>>Q;

		if(Q==1)
			{
				cout<<"Q IS TRUE"<<endl;
			}
		if(Q==0)
			{
				cout<<"Q IS FALSE"<<endl;
			}
		choice:
		cout<<"TYPE THE NUMBER OF YOUR CHOICE \n\n1.CONJUNCTION\n2.DISJUNCTION\n3.NEGATION\n4.BICONDITIONAL\n5.CONDITIONAL"<<endl;
		cout<<"CHOICE: ";	
		cin>>choices;
	if (choices!=1&&choices!=2&&choices!=3&&choices!=4&&choices!=5)
		{
				system("cls");
				cout<<"UNDIFINED CHOICE\n\n\n";
				goto choice;
		}			
			if(choices==1)
				{		
				if(Q==1&&P==1)
					{
						cout<<"TRUE AND TRUE IS  TRUE";
					}
				if(Q==0&&P==0)
					{
						cout<<"FALSE AND FALSE IS  FALSE";
					}
				if(Q==0&&P==1)
					{
						cout<<"THERE IS A FALSE THEREFORE IT IS FALSE";
					}
				if(Q==1&&P==0)
					{
						cout<<"THERE IS A FALSE THEREFORE IT IS FALSE";
					}
				cout<<"\nTYPE 0 TO TERMINATE PROGRAM AND 1 TO GO BACK TO MAIN";
				cin>>ternot;
				if(ternot==0)
					{
						goto exit;
					}
				if(ternot==1)
					{	
						system("cls");
						goto main;
					}
				}
			if(choices==2)
				{
					if(Q==1&&P==1)
						{
							cout<<"TRUE AND TRUE IS  TRUE";
						}
					if(Q==0&&P==0)
						{
							cout<<"FALSE AND FALSE IS  FALSE";
						}
					if(Q==0&&P==1)
						{
							cout<<"THERE IS A TRUE THEREFORE IT IS TRUE";
						}
					if(Q==1&&P==0)
						{
							cout<<"THERE IS A TRUE THEREFORE IT IS TRUE";
						}
					cout<<"\nTYPE 0 TO TERMINATE PROGRAM AND 1 TO GO BACK TO MAIN";
					cin>>ternot;
					if(ternot==0)
						{
							goto exit;
						}
					if(ternot==1)
						{
							system("cls");
							goto main;
						}
				}
			if(choices==3)
				{
					if(Q==1)
						{
							cout<<"THE NOT LOGIC OF Q IS FALSE\n";
						}
					if(P==1)
						{
							cout<<"THE NOT LOGIC OF P IS FALSE\n";
						}
					if(Q==0)
						{
							cout<<"THE NOT LOGIC OF Q IS TRUE\n";
						}
					if(P==0)
						{
							cout<<"THE NOT LOGIC OF P IS TRUE\n";
						}
					cout<<"\nTYPE 0 TO TERMINATE PROGRAM AND 1 TO GO BACK TO MAIN";
					cin>>ternot;
					if(ternot==0)
						{
						goto exit;
						}
					if(ternot==1)
						{	
							system("cls");
							goto main;
						}
				}
			if(choices==4)
				{		
					if(Q==1&&P==1)
						{
							cout<<"TRUE AND TRUE IS  TRUE";
						}
					if(Q==0&&P==0)
						{
							cout<<"FALSE AND FALSE IS  TRUE";
						}
					if(Q==0&&P==1)
						{
							cout<<"FALSE AND TRUE THEREFORE IT IS FALSE";
						}
					if(Q==1&&P==0)
						{
							cout<<"TRUE AND FALSE THEREFORE IT IS FALSE";
						}
					cout<<"\nTYPE 0 TO TERMINATE PROGRAM AND 1 TO GO BACK TO MAIN";
					cin>>ternot;
					if(ternot==0)
						{
							goto exit;
						}
					if(ternot==1)
						{
							system("cls");
							goto main;
						}
				}
			if(choices==5)
				{		
					if(Q==1&&P==1)
						{
							cout<<"P  TO Q IS  TRUE";
						}
					if(Q==0&&P==0)
						{
							cout<<"P TO Q IS  FALSE";
						}
					if(Q==0&&P==1)
						{
							cout<<"P TO Q IS FALSE";
						}
					if(Q==1&&P==0)
						{
						cout<<"P TO Q IS TRUE";
						}
					cout<<"\nTYPE 0 TO TERMINATE PROGRAM AND 1 TO GO BACK TO MAIN";
					cin>>ternot;
					if(ternot==0)
						{
							goto exit;
						}
					if(ternot==1)
						{
							system("cls");
							goto main;
						}
				}	
			exit:
				{
					system("cls");
					
				}
}

