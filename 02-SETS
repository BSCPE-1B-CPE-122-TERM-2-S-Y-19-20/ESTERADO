#include<iostream>
void intersection();
void unio();
void complement();
void dor();
void symdif();

using namespace std;

main(){
	
	int choice;
	
	cout<<"Set Operations: \n1.Intersection \n2.Union \n3.Complement \n4.Difference or Relative Compliment \n5.Symmetric Difference";
	cout<<"\nChoice: ";
	cin>>choice;
	
	if(choice==1){
		intersection();
	}
	else if(choice==2){
		unio();
	}
	else if(choice==3){
		complement();
	}
	else if(choice==4){
		dor();
	}
	else if(choice==5){
		symdif();
	}
	else cout<<"Error 404.";
}

void intersection(){
	int a[100],b[100],temp[100];
	int x,y,count=0;
	cout<<"Intersection: The common elements of two sets.\n";
	cout<<"Number of Elements in Set A: ";
	cin>>x;
	cout<<"Enter an element in a Set A:\n";
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Number of Elements in Set B: ";
	cin>>y;
	cout<<"Enter an element in a Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				temp[count]=a[i]; 
				count++;
			}
		}
	}
	cout<<"The Intersection of Set A & B: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}
	cout<<"}";
}
void unio(){
	int a[100],b[100],temp[100];
	int x,y,z,count=0;
	cout<<"Union: The set of elements that belong to either of two sets.\n";
	cout<<"Number of Elements in Set A: ";
	cin>>x;
	cout<<"Enter an element in a Set A:\n";
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Number of Elements in Set B: ";
	cin>>y;
	cout<<"Enter an element in a Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];	
	
	}
	for(int i=0;i<x;i++){
		temp[count]=a[i];
		count++;
	}
	for(int i=0;i<y;i++){
		temp[count]=b[i];
		count++;
	}
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(temp[i]>temp[j]){
				z=temp[i];
				temp[i]=temp[j];
				temp[j]=z;
			}
		}
	}
	cout<<"The Union of Set A & B: { ";
	for(int i=0;i<count;i++){
		if(temp[i]!=temp[i+1]) cout<<temp[i]<<" ";
	}
	cout<<"}";
}
void complement(){
	int u[100],a[100],temp[100];
	int x,y,z,count=0;
	cout<<"Complement. The set of elements (in the universal sets) that do not belong to a given set.\n";
	cout<<"Number of Elements in Universal Set: ";
	cin>>x;
	cout<<"Enter an element in a Universal Set:\n";
	for(int i=0;i<x;i++){
		cin>>u[i];
	}
	cout<<"Number of Elements in Set A: ";
	cin>>y;
	cout<<"Enter an element in a Set A:\n";
	for(int i=0;i<y;i++){
		cin>>a[i];	
	}	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(u[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=u[i];
			count++;
		}
	}	
	cout<<"The Complement of Set A: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}	
	cout<<"}";
}
void dor(){
	int a[100],b[100],temp[100];
	int x,y,z,count=0;
	cout<<"Difference or Relative Complement: The set of elements that belong to a set but not to another or the \ndifference of sets A and B, denoted by A/B (or A-B) is the set containing those elemnets that are in A \nbut not in B.\n";
	cout<<"Number of Elements in Set A: ";
	cin>>x;
	cout<<"Enter an element in a Set A:\n";
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Number of Elements in Set B: ";
	cin>>y;
	cout<<"Enter an element in a Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];	
	}		
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=a[i];
			count++;
		}
	}	
	cout<<"A-B: ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}	
	count=0;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(b[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=b[i];
			count++;
		}
	}	
	cout<<"\nB-A: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}
	cout<<"}";	
}
void symdif(){
	int a[100],b[100],temp[100];
	int x,y,z,count=0;
	cout<<"Symmetric Difference: Given two sets, their symmetric difference is the set of elements that belong \nto either one or the other set but not both. The symmetric difference is a set of {(A-B)U(B-A)}.\n";
	cout<<"Number of Elements in Set A: ";
	cin>>x;
	cout<<"Enter an element in a Set A:\n";
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Number of Elements in Set B: ";
	cin>>y;
	cout<<"Enter an element in a Set B:\n";
	for(int i=0;i<y;i++){
		cin>>b[i];	
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i]==b[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=a[i];
			count++;
		}
	}	
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(b[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp[count]=b[i];
			count++;
		}
	}
	cout<<"Symmetric Difference: { ";
	for(int i=0;i<count;i++){
		cout<<temp[i]<<" ";
	}
	cout<<"}";
}
