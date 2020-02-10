#include<iostream>
#include<string>
void conjunction();
void disjunction();
void negation();
void conditional();
void biconditional();

using namespace std;

main(){
	
	int num;
	cout<<"1.Conjunction"<<endl;
	cout<<"2.Disjunction"<<endl;
	cout<<"3.Negation"<<endl;
	cout<<"4.Conditional"<<endl;
	cout<<"5.Biconditional"<<endl;
	cout<<"Choice: ";
	cin >> num;
	
	if(num==1){
		conjunction();
	}
	else if(num==2){
		disjunction();
	}
	else if(num==3){
		negation();
	}
	else if(num==4){
		conditional();
	}
	else if(num==5){
		biconditional();
	}
	else {
		cout <<"Error 404.";
	}	
}
	void conjunction(){
		
		string q,p;
		
		cout << "\nConjunction. The conjunction p ^ q are true if and only if p and q are both true.";
		cout<< "\nEnter the value of p - ";
		cin>>p;
		cout<<"Enter the value of q - ";
		cin>>q;
		
		if( q == "true" && p =="true" )
		 {
			cout<<"p ^ q = true";
		}
		
		else cout<< ("p ^ q = false");	
	}
	
		void disjunction(){
		
		string q,p;
		
		cout << "\n 	Disjunction. The disjunction  p or q it true if  p and q are both true, or one of them is true.";
		cout<< "\n 	Enter the value of p - ";
		cin>>p;
		cout<<"	Enter the value of q - ";
		cin>>q;
		
		if( q == "false" && p =="false")
		 {
			cout<<"\np or q = false";
		}
		
		else cout<< ("\np or q = true");	
	}
	
		void negation(){
			string q;
			cout<<"\nNegation. The negation not p means that the value is the opposite of the original value.";
			cout<<"\nEnter the value of q - ";
			cin>>q;
			
			if(q=="true") cout << "\nq= false";
			else cout<<"\nq=true";	
		}
		
		void conditional(){
			string q,p;
			cout<<"\nConditional. The conditional q then p, written q-->p is false if q is true and p is false.";
			cout<< "\nEnter the value of p - ";
			cin>>p;
			cout<<"	Enter the value of q - ";
			cin>>q;
			
			if(p=="true" && q=="false") cout <<"q-->p is false";
			else "q--p is true";
		}
