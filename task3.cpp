#include <bits/stdc++.h>
using namespace std;
char khiladi1;

char chess[3][3];

char khiladi2;

void khiladi2kichaal(char w){
    int x,y;
    do{
        cout<<endl<<"Player "<<w<<" Enter row #(1-3):"<<endl;
        cin>>x;
        x--;
        cout<<endl<<"Player "<<w<<" Enter column #(1-3):"<<endl;
        cin>>y;
        y--;
        if(chess[x][y]!=' ')
            cout<<endl<<"Invalid move!"<<endl;
        else {
            chess[x][y] = w;
            break;
        }
    }
    while (chess[x][y]!=' ');
}
void dikha(){

    cout<<" "<<chess[0][0]<<"-+-+-"<<chess[0][1]<<"-+-+-"<<chess[0][2]<<" ";    cout<<endl<<"---"<<"|"<<"---"<<"|"<<"---"<<endl;  cout<<" "<<chess[1][0]<<"-+-+-"<<chess[1][1]<<"-+-+-"<<chess[1][2]<<" "; cout<<endl<<"---"<<"|"<<"---"<<"|"<<"---"<<endl; cout<<" "<<chess[2][0]<<"-+-+-"<<chess[2][1]<<"-+-+-"<<chess[2][2]<<" ";
 
}
int khalijagha(){
    int jagha=9;  for(int i=0;i<3;i++){   for(int j=0;j<3;j++){   if(chess[i][j]!=' ')    jagha--;
                }
                }         return jagha;
}
void khiladi1kichaal(char c){
    int x,y;
    do{
        cout<<endl<<"Player "<<c<<" Enter row #(1-3):"<<endl;

        cin>>x;     x--;      cout<<endl<<"Player "<<c<<" Enter column #(1-3):"<<endl;
        cin>>y;     y--;
        if(chess[x][y]!=' ')  cout<<endl<<"Invalid move!"<<endl;
        else {    chess[x][y] = c;     break;
        }
    }
    while (chess[x][y]!=' ');

}
void waps(){
    for(int i=0;i<3;i++){    for(int j=0;j<3;j++){     chess[i][j]=' ';

        }
    }
}

char vijeta(){
    
    for(int i=0;i<3;i++) {    if (chess[i][0] == chess[i][1] && chess[i][0] == chess[i][2]) {     return chess[i][0];

        }
    }
   
    for(int i=0;i<3;i++) {     if (chess[0][i] == chess[1][i] && chess[0][i] == chess[2][i]) {       return chess[0][i];

        }
    }
 
 
    if (chess[0][2] == chess[1][1] && chess[0][2] == chess[2][0]) {    return chess[0][2];

    }
    if (chess[0][0] == chess[1][1] && chess[0][0] == chess[2][2]) {   return chess[0][0];

    }
    
    return ' ';


}
void jeetakon(char bazigar){
    if(bazigar == khiladi1){
        cout<<"PLAYER ONE WINS!"<<endl;
    }
    else if(bazigar == khiladi2){
        cout<<"PLAYER TWO WINS!"<<endl;
    }
    else
        cout<<"IT'S A TIE!"<<endl;


}



int main() {
    char bazigar=' ';
    char uttar;

    cout<<"Welcome to tic-tac-toe game!"<<endl;
    start:
    {
        char bazigar=' ';
        char uttar;
        cout << endl<<"PLAYER ONE IS: ";
        cin >> khiladi1;


        do { cout<<endl<<"PLAYER TWO IS: ";
            cin>>khiladi2;}
        while(khiladi1==khiladi2);
        cout<<endl;

        waps();

        while (bazigar == ' ' && khalijagha() > 0) {
            dikha();

            khiladi1kichaal(khiladi1);
            dikha();
            bazigar = vijeta();
            if (bazigar != ' ' || khalijagha() == 0)
                break;

            khiladi2kichaal(khiladi2);
            bazigar = vijeta();
        }

        dikha();
        jeetakon(bazigar);

    }
    cout<<endl<<"Would you like to play again? (Y/N):";
    cin>>uttar;
    if(uttar=='Y')goto start;
    else cout<<endl<<"Thank you for playing! "<<endl;
    
}