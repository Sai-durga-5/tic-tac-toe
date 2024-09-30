#include<bits/stdc++.h>
using namespace std;
class tictactoe
{
 public:
    char a[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char p1='x',p2='o',cp='x';
    void print()
    {
        cout<<a[0]<<"|"<<a[1]<<"|"<<a[2]<<endl;
        cout<<"------"<<endl;
        cout<<a[3]<<"|"<<a[4]<<"|"<<a[5]<<endl;
        cout<<"------"<<endl;
        cout<<a[6]<<"|"<<a[7]<<"|"<<a[8]<<endl;
        cout<<"------"<<endl;
    }
    void start()
    {
        for(int i=0;i<9;i++){
            print();
            cout<<cp<<"'s Turn"<<endl;
            int position;
            cin>>position;
            if(a[position]!=' '){cout<<"position occupied";cin>>position;}
            a[position]=cp;
            if(checkwin()==1){print();cout<<cp<<": won the game"<<endl; break;}
            if(cp=='x') cp='o';
            else cp='x';
            if(i==8 && checkwin()==0) {print(); cout<<"game is draw"<<endl;}
        }
    }
    int checkwin()
    {
        if(a[0]==a[1] && a[1]==a[2] && a[1]!=' ') return 1;
        else if(a[3]==a[4] && a[4]==a[5] && a[4]!=' ') return 1;
        else if(a[6]==a[7] && a[7]==a[8] && a[7]!=' ') return 1;
        else if(a[0]==a[3] && a[3]==a[6] && a[3]!=' ') return 1;
        else if(a[1]==a[4] && a[1]==a[7] && a[1]!=' ') return 1;
        else if(a[2]==a[5] && a[8]==a[2] && a[2]!=' ') return 1;
        else if(a[0]==a[4] && a[4]==a[8] && a[4]!=' ') return 1;
        else if(a[2]==a[4] && a[4]==a[6] && a[6]!=' ') return 1;
        else return 0;
    }

    
    
};
int main(){
    tictactoe t;
    t.start();
}