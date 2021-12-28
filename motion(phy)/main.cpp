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
double v_block();
double v_max_block();
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
double v_max;
double g=9.89;
double e;
double pie=3.1415;
double n;
int main(){
    int action1;
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
    cout<<"[14] Ek"<<endl;
    cout<<"[15] l"<<endl;
    cout<<"[16] L"<<endl;
    cout<<"[17] r"<<endl;
    cout<<"[18] e"<<endl;
	cout<<"[0] EXIT"<<endl;
	cout<<"\n"<<endl;
	cout<<"Enter Action: ";
	cin>>action1;
    if(action1==1){
        w_block();
    }
    else if(action1==2){
        T_block();
    }
    else if(action1==3){
        k_block();
    }
    else if(action1==4){
        m_block();
    }
    else if(action1==5){
        f_block();
    }
    else if(action1==6){
        x_block();
    }
    else if(action1==7){
        A_block();
    }
    else if(action1==8){
        dosha_block();
    }
    else if(action1==9){
        v_block();
    }
    else if(action1==10){
        v_max_block();
    }
    else if(action1==11){
        a_block();
    }
    else if(action1==12){
        a_max_block();
    }
    else if(action1==13){
        U_block();
    }
    else if(action1==14){
        Ek_block();
    }
    else if(action1==15){
        l_block();
    }
    else if(action1==16){
        L_block();
    }
    else if(action1==17){
        r_block();
    }
    else if(action1==18){
        e_block();
    }
    else if(action1==0){
        ext();
    }
}
double w_block(){
        int block_ch;
        char cont_or_exit;
        cout<<"block [1]"<<endl;
        cout<<"\t[k]"<<endl;
        cout<<"\t[m]"<<endl;
        cout<<"\n";
        cout<<"block [2]"<<endl;
        cout<<"\t[f]"<<endl;
        cout<<"\n";
        cout<<"block [3]"<<endl;
        cout<<"\t[A]"<<endl;
        cout<<"\t[Sin]"<<endl;
        cout<<"\t[t]"<<endl;
        cout<<"\t[&]"<<endl;
        cout<<"\n";
        cout<<"block [4]"<<endl;
        cout<<"\t[T]"<<endl;
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
        cout<<"\t[f]"<<endl;
        cout<<"\n"<<endl;
        cout<<"Enter block: \t('e' to exit)";
        cin>>block_ch;
        if(block_ch==1){
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
        else if(block_ch==2){
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
        else if(block_ch==3){
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
        else if(block_ch==4){
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
        else if(block_ch==5){
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
        else if(block_ch==6){
            cout<<"Enter Vmax: ";
            cin>>v_max;
            cout<<"Enter A: ";
            cin>>A;
            w=v_max/A;
            cout<<"w=Vmax/A"<<endl;
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
        else if(block_ch==7){
            cout<<"Enter A: ";
            cin>>A;
            cout<<"Enter k: ";
            cin>>k;
            cout<<"Enter m: ";
            cin>>m;
            w=(A*sqrt(k/m))/A;
            cout<<"w=(√A*(k/m))/A"<<endl;
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
        else if(block_ch==8){
            cout<<"Enter a: ";
            cin>>a;
            cout<<"Enter x: ";
            cin>>x;
            w=sqrt(a/x);
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
        else if(block_ch==9){
            cout<<"Enter a(max): ";
            cin>>a_max;
            cout<<"Enter A: ";
            cin>>A;
            w=sqrt(a_max/A);
            cout<<"w=√(a(max)/A)"<<endl;
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
        else if(block_ch==10){
            cout<<"Enter f: ";
            cin>>f;
            w=2*pie*f;
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
            else{
                main();
            }
        }
        else{
            main();
        }
}
double T_block(){
    char block_ch;
    char cont_or_exit;
    cout<<"block [1]"<<endl;
    cout<<"\t[f]"<<endl;
    cout<<"\n";
    cout<<"block [2]"<<endl;
    cout<<"\t[w]"<<endl;
    cout<<"\n"<<endl;
    cout<<"block [3]"<<endl;
    cout<<"\t[L]"<<endl;
    cout<<"\n"<<endl;
    cout<<"block [4]"<<endl;
    cout<<"\t[e]"<<endl;
    cout<<"\n"<<endl;
    cout<<"block [5]"<<endl;
    cout<<"\t[n]"<<endl;
    cout<<"\n"<<endl;
    cout<<"Enter block: \t('e' to exit)";
    cin>>block_ch;
    if(block_ch=='1'){
        cout<<"Enter f: ";
        cin>>f;
        T=1/f;
        cout<<"T=1/f"<<endl;
        cout<<"T="<<T<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch=='2'){
        cout<<"Enter w: ";
        cin>>w;
        T=(2*pie)/w;
        cout<<"T=(2*pie)/w"<<endl;
        cout<<"T="<<T<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch=='3'){
        cout<<"Enter L: ";
        cin>>L;
        L=2*pie*(sqrt(L/g));
        cout<<"L=2*pie*(√(L/g))"<<endl;
        cout<<"L="<<L<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch=='4'){
        cout<<"Enter e: ";
        cin>>e;
        T=2*pie*(sqrt(e/g));
        cout<<"T=2*pie*(√(e/g))"<<endl;
        cout<<"T="<<T<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch=='5'){
        cout<<"Enter n: ";
        cin>>n;
        T=(86400*2)/(86400-n);
        cout<<"T=(86400*2)/(86400-n)"<<endl;
        cout<<"T="<<T<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch=='e'){
        ext();
    }
    else{
        main();
    }
}
double k_block(){
    int block_ch;
    char cont_or_exit;
    cout<<"block [1]"<<endl;
    cout<<"\t[w]"<<endl;
    cout<<"\t[m]"<<endl;
    cout<<"\n";
    cout<<"block [2]"<<endl;
    cout<<"\t[U]"<<endl;
    cout<<"\t[x]"<<endl;
    cout<<"\n";
    cout<<"block [3]"<<endl;
    cout<<"\t[Ek]"<<endl;
    cout<<"\t[A]"<<endl;
    cout<<"\t[x]"<<endl;
    cout<<"\n";
    cout<<"block [4]"<<endl;
    cout<<"\t[m]"<<endl;
    cout<<"\t[g]"<<endl;
    cout<<"\t[l]"<<endl;
    cout<<"\n";
    cout<<"Enter block: \t('e' to exit)";
    cin>>block_ch;
    if(block_ch==1){
        cout<<"Enter w: ";
        cin>>w;
        cout<<"Enter m: ";
        cin>>m;
        k=m*(pow(w,2));
        cout<<"k=m*(w^2)"<<endl;
        cout<<"k="<<k<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch==2){
        cout<<"Enter U: ";
        cin>>U;
        cout<<"Enter x: ";
        cin>>x;
        k=(U/(pow(x,2)))/0.5;
        cout<<"k=(U/x^2)/0.5"<<endl;
        cout<<"k="<<k<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch==3){
        cout<<"Enter Ek: ";
        cin>>Ek;
        cout<<"Enter A: ";
        cin>>A;
        cout<<"Enter x: ";
        cin>>x;
        k=(Ek/(pow(A,2)-pow(x,2)))/0.5;
        cout<<"k=(Ek/(A^2)-(x62))/0.5"<<endl;
        cout<<"k="<<k<<endl;
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
        else{
            main();
        }
    }
    else if(block_ch==4){
        cout<<"Enter m: ";
        cin>>m;
        cout<<"Enter g: ";
        cin>>g;
        cout<<"Enter l: ";
        cin>>l;
        k=(m*g)/l;
        cout<<"k=(m*g)/l"<<endl;
        cout<<"k="<<k<<endl;
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
        else{
            main();
        }
    }
    else{
        main();
    }
}
double m_block(){
    int block_ch;
    char cont_or_exit;
    cout<<"block [1]"<<endl;
    cout<<"\t[w]"<<endl;
    cout<<"\t[k]"<<endl;
    cout<<"\n"<<endl;
    cout<<"Enter block: \t('e' to exit)";
    cin>>block_ch;
    if(block_ch==1){
        cout<<"Enter w: ";
        cin>>w;
        cout<<"Enter k: ";
        cin>>k;
        m=k/(pow(w,2));
        cout<<"m=k/w^2"<<endl;
        cout<<"m="<<m<<endl;
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
        else{
            main();
        }
    }
    else{
        main();
    }
}
double f_block(){

}
double x_block(){

}
double A_block(){

}
double dosha_block(){

}
double v_block(){

}
double v_max_block(){

}
double a_block(){

}
double a_max_block(){

}
double U_block(){

}
double Ek_block(){

}
double l_block(){

}
double L_block(){

}
double r_block(){

}
double e_block(){

}
void ext(){
    cout<<"\n\n"<<endl;
    cout<<"#BYE!"<<endl;
    cout<<"\n\n"<<endl;
}
