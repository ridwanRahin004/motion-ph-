#include<iostream>
#include<cmath>
using namespace std;
//functions
void ext();
double w_block();
double f_block();
double T_block();
double k_block();
double m_block();
double x_block();
double t_block();
double A_block();
double dosha_block();
double a_block();
double a_max_block();
double U_block();
double Ek_block();
double l_block();
double L_block();
double r_block();
double e_block();
//var
double w;
double f;
double T;
double k;
double m;
double x;
double t;
double A;
double dosha;
double a;
double a_max;
double U;
double Ek;
double l;
double L;
double r;
double v;
double g=9.89;
double e;
double pie=3.1415;
int main(){
    int action1;
    char block_ch;
    char cont_or_exit;
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
            w_block();
    }
    else if(action1==2){
        cout<<"block [1]"<<endl;
        cout<<"\t[f]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [2]"<<endl;
        cout<<"\t"<<endl;
    }
    else if(action1==3){

    }
    else if(action1==4){

    }
    else if(action1==5){

    }
}
double w_block(){
        char block_ch;
        char cont_or_exit;
        cout<<"block [1]"<<endl;
        cout<<"\t[k]"<<endl;
        cout<<"\t[m]"<<endl;
        cout<<"\n";
        cout<<"block [2]"<<endl;
        cout<<"\t[f]"<<endl;
        cout<<"\t[Pie]"<<endl;
        cout<<"\n";
        cout<<"block [3]"<<endl;
        cout<<"\t[A]"<<endl;
        cout<<"\t[Sin]"<<endl;
        cout<<"\t[t]"<<endl;
        cout<<"\t[&]"<<endl;
        cout<<"\n";
        cout<<"block [4]"<<endl;
        cout<<"\t[T]"<<endl;
        cout<<"\t[Pie]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [5]"<<endl;
        cout<<"\t[v]"<<endl;
        cout<<"\t[A]"<<endl;
        cout<<"\t[x]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [6]"<<endl;
        cout<<"\t[Vmax]"<<endl;
        cout<<"\t[A]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [7]"<<endl;
        cout<<"\t[A]"<<endl;
        cout<<"\t[k]"<<endl;
        cout<<"\t[m]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [8]"<<endl;
        cout<<"\t[a]"<<endl;
        cout<<"\t[x]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [9]"<<endl;
        cout<<"\t[a_max]"<<endl;
        cout<<"\t[A]"<<endl;
        cout<<"\n"<<endl;
        cout<<"block [10]"<<endl;
        cout<<"\t[Pie]"<<endl;
        cout<<"\t[f]"<<endl;
        cout<<"\n"<<endl;
        cout<<"Enter block: \t('e' to exit)";
        cin>>block_ch;
        if(block_ch=='1'){
            cout<<"Enter k: ";
            cin>>k;
            cout<<"Enter m: ";
            cin>>m;
            w=sqrt(k/m);
            cout<<"w=√(k/m)"<<endl;
            cout<<"w="<<w<<endl;
            cout<<"\n"<<endl;
            cout<<"Enter: [1] main menu"<<endl;
            cout<<"       [0] go back"<<endl;
            cout<<"       [e] Exit"<<endl;
            cin>>cont_or_exit;
            if(cont_or_exit=='1'){
                main();
            }
            else if(cont_or_exit=='0'){
                w_block();
            }
            else if(cont_or_exit=='e'){
                ext();
            }
        }
        else if(block_ch=='2'){
            cout<<"Enter f: ";
            cin>>f;
            w=(2*pie)*f;
            cout<<"w=2*PIE*f"<<endl;
            cout<<"w="<<w<<endl;
            cout<<"\n"<<endl;
            cout<<"Enter: [1] main menu"<<endl;
            cout<<"       [0] go back"<<endl;
            cout<<"       [e] Exit"<<endl;
            cin>>cont_or_exit;
            if(cont_or_exit=='1'){
                main();
            }
            else if(cont_or_exit=='0'){
                w_block();
            }
            else if(cont_or_exit=='e'){
                ext();
            }
        }
        else if(block_ch=='3'){
            cout<<"Enter A: ";
            cin>>A;
            cout<<"Enter t: ";
            cin>>t;
            cout<<"Enter &: ";
            cin>>dosha;
            cout<<"Enter x: ";
            cin>>x;
            w=(x/(A*sin(t)))-dosha;
            cout<<"w=(x/A*Sin(t))-&"<<endl;
            cout<<"w="<<w<<endl;
            cout<<"\n"<<endl;
            cout<<"Enter: [1] main menu"<<endl;
            cout<<"       [0] go back"<<endl;
            cout<<"       [e] Exit"<<endl;
            cin>>cont_or_exit;
            if(cont_or_exit=='1'){
                main();
            }
            else if(cont_or_exit=='0'){
                w_block();
            }
            else if(cont_or_exit=='e'){
                ext();
            }
        }
        else if(block_ch=='4'){
            cout<<"Enter T: ";
            cin>>T;
            w=(2*pie)/T;
            cout<<"w=(2*pie)/T"<<endl;
            cout<<"w="<<w<<endl;
            cout<<"\n"<<endl;
            cout<<"Enter: [1] main menu"<<endl;
            cout<<"       [0] go back"<<endl;
            cout<<"       [e] Exit"<<endl;
            cin>>cont_or_exit;
            if(cont_or_exit=='1'){
                main();
            }
            else if(cont_or_exit=='0'){
                w_block();
            }
            else if(cont_or_exit=='e'){
                ext();
            }
        }
        else if(block_ch=='5'){
            cout<<"Enter v: ";
            cin>>v;
            cout<<"Enter A: ";
            cin>>A;
            cout<<"Enter x: ";
            cin>>x;
            w=v*sqrt(pow(A,2)-pow(x,2));
            cout<<"w=v*√((A^2)-(x^2))"<<endl;
            cout<<"w="<<w<<endl;
            cout<<"\n"<<endl;
            cout<<"Enter: [1] main menu"<<endl;
            cout<<"       [0] go back"<<endl;
            cout<<"       [e] Exit"<<endl;
            cin>>cont_or_exit;
            if(cont_or_exit=='1'){
                main();
            }
            else if(cont_or_exit=='0'){
                w_block();
            }
            else if(cont_or_exit=='e'){
                ext();
            }
        }
        else if(block_ch=='6'){

        }
        else if(block_ch=='7'){

        }
        else if(block_ch=='8'){

        }
        else if(block_ch=='9'){

        }
        else if(block_ch=='10'){

        }
}
void ext(){
    cout<<"\n\n"<<endl;
    cout<<"#BYE!"<<endl;
    cout<<"\n\n"<<endl;
}
