#include <bits/stdc++.h>
using namespace std;

struct Kaam{
    string KaamName;
    bool completed;
};

vector<Kaam>Kaams;
void addKaam(){  string Kaam;   cout<<"Enter the Task:";   cin>>Kaam;   Kaams.push_back({Kaam, false});   cout<<"Task added: "<<Kaam<<endl;  }
void showKaams() {
    if (Kaams.empty()) {    cout << "No Tasks found\n";
    } else {   for (int i = 0; i < Kaams.size(); i++) {    string status = Kaams[i].completed ? "Completed" : "Pending";    cout << i + 1 << "- " << Kaams[i].KaamName << " - " << status << endl;
        }
    }

}
void hogyakaam(){ showKaams();  int ginti;   cout<<"Enter the Task gintiber to mark it as completed:";    cin>>ginti;
    if(ginti >=1&&ginti<=Kaams.size()){    Kaams[ginti-1].completed=true;    cout<<"Task marked as completed.\n";  }   else  cout<<"Invalid Task gintiber.\n";

}
void removeKaam(){   showKaams();   int ginti;   cout<<"Enter the Task number to remove it:";
    cin>>ginti;  if(ginti >=1&&ginti<=Kaams.size()){   cout<<"Task removed "<<Kaams[ginti-1].KaamName<<endl;   Kaams.erase(Kaams.begin()+ginti-1);  cout<<"Task marked as completed.\n";
    }
    else    cout<<"Invalid Task number.\n";



}

int main(){
cout<<endl<<"TO-DO LIST\n";
while (true){
cout<<"\n Options:\n"; cout<<"1- Add Task.\n";  cout<<"2- View Task. \n";  cout<<"3- Mark as complete. \n";  cout<<"4- Remove Task. \n";   cout<<"5- Quit. \n";
int choice;  cout<<"Enter your choice:";  cin>>choice;

    switch (choice) {
        case 1:  addKaam();   break;
        case 2:  showKaams(); break;
        case 3:  hogyakaam(); break;
        case 4:  removeKaam();break;
        case 5:  return 0;
        default: cout<<"Invalid choice please try again! \n";

    }

}



}