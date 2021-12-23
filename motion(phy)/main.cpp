#include<iostream>
#include<cmath>
using namespace std;
double w;
double T;
double k;
double m;
double f;
double x;
double A;
double dosha;
double v;
double v_max;
double a;
double a_max;
double U;
//functions
void ext();
double math_mode();
int main(){
	int action1;
	int action2;
	cout<<"[1] w"<<endl;
	cout<<"[2] T"<<endl;
	cout<<"[3] k"<<endl;
	cout<<"[4] m"<<endl;
	cout<<"[5] f"<<endl;
	cout<<"[6] x"<<endl;
	cout<<"[7] A"<<endl;
	cout<<"[8] &"<<endl;
	cout<<"[9] v"<<endl;
	cout<<"[10] v(max)"<<endl;
	cout<<"[11] a"<<endl;
	cout<<"[12] a(max)"<<endl;
	cout<<"[13] U"<<endl;
	cout<<"[00] TO MATH MODE"<<endl;
	cout<<"[0] EXIT"<<endl;
	cout<<"\n"<<endl;
	cout<<"Enter Action: ";
	cin>>action1;
	if(action1==1){
		cout<<"Enter Value of w: ";
		cin>>w;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==2){
		cout<<"Enter Value of T: ";
		cin>>T;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==3){
		cout<<"Enter Value of k: ";
		cin>>k;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==4){
		cout<<"Enter Value of m: ";
		cin>>m;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==5){
		cout<<"Enter Value of f: ";
		cin>>f;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==6){
		cout<<"Enter Value of x: ";
		cin>>x;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==7){
		cout<<"Enter Value of A: ";
		cin>>A;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==8){
		cout<<"Enter Value of &: ";
		cin>>dosha;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==9){
		cout<<"Enter Value of v: ";
		cin>>v;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==10){
		cout<<"Enter Value of v(max): ";
		cin>>v_max;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==11){
		cout<<"Enter Value of a: ";
		cin>>a;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==12){
		cout<<"Enter Value of a(max): ";
		cin>>a_max;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==13){
		cout<<"Enter Value of U: ";
		cin>>U;
		cout<<"\n"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action2;
		if(action2==1){
			main();
		}
		else if(action2==0){
			ext();
		}
		else{
			cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
			main();
		}
	}
	else if(action1==00){
		math_mode();
	}
	else if(action1==0){
		ext();
	}
	else{
		cout<<"\n"<<endl;
			cout<<"Wrong Action#"<<endl;
			cout<<"\n\n"<<endl;
		main();
	}
	return 0;
}
void ext(){
	cout<<"\n\n"<<endl;
	cout<<"#BYE!"<<endl;
	cout<<"\n\n"<<endl;
}
double math_mode(){
	int action1;
	cout<<"\n"<<endl;
	cout<<"\t Math Mode"<<endl;
	cout<<"\n"<<endl;
	cout<<"[1] w"<<endl;
	cout<<"[2] T"<<endl;
	cout<<"[3] k"<<endl;
	cout<<"[4] m"<<endl;
	cout<<"[5] f"<<endl;
	cout<<"[6] x"<<endl;
	cout<<"[7] A"<<endl;
	cout<<"[8] &"<<endl;
	cout<<"[9] v"<<endl;
	cout<<"[10] v(max)"<<endl;
	cout<<"[11] a"<<endl;
	cout<<"[12] a(max)"<<endl;
	cout<<"[13] U"<<endl;
	cout<<"[0] EXIT"<<endl;
	cout<<" Enter Action: "<<endl;
	cin>>action1;
	if(action1==1){

	}
	else if(action1==2){

	}
	else if(action1==3){

	}
	else if(action1==4){

	}
	else if(action1==5){

	}
	else if(action1==6){

	}
	else if(action1==7){

	}
	else if(action1==8){

	}
	else if(action1==9){

	}
	else if(action1==10){

	}
	else if(action1==11){

	}
	else if(action1==12){

	}
	else if(action1==13){

	}
	else if(action1==0){
		ext();
	}
	else{
		cout<<"\n"<<endl;
		cout<<"Wrong Choich"<<endl;
		cout<<"\n\n"<<endl;
		math_mode();
	}
}
