#include <iostream>
#include <stdlib.h>
#include<stdio.h>


using namespace std;
int brd[10];//={7,5,5,5,5,5,5,5,5,5};
int us=0,cs=0;
int main()
{   int lev;
    for(float i=0;i<=1000;i=i+25)
    {   if(i<=250)
        cout<<"\t\tInitializing Installer...\n";
        else if(i<=750)
        cout<<"\t\tloading Packages...\n";
        else if(i<850)
        cout<<"\t\tUnzipping Contents...\n";
        else cout<<"\t\tFinalizing the game...\n";
        system("cls");
        printf("\t\t%6.1f",(i/10.0)); cout<<"%"<<endl;
    }
    cout<<"\nPress Enter key to Continue:"<<endl;
    getchar();
    label: level:
    cout<<"\aChoose Difficulty Level: Easy | Normal | Pro\n";
    cout<<"\a                           1  |   11   | 111\n";
    cin>>lev;
    //label:
    for(int i=1;i<=9;i++)
    brd[i]=5;
    int i=0,u,cpu;
    switch(lev)
    {
        case 1: cout<<"As Expected from you Noob-master!"; break;
        case 11: cout<<"Well Not so hard, not so easy, but i can do better than this!"; break;
        case 111: cout<<"Welcome to the real Game, By the way you can't defeat me! Can you?"; break;
        default: cout<<"Can't you read!\n"; goto level;
    }
    cout<<"\n";

    void display();
    system("cls");
    display();

  //  int brd[]={7,5,5,5,5,5,5,5,5,5};
    while(i-9)
    {
        cout<<"\aEnter the position of your cross (x) :";
        cin>>u;
        if(brd[u]==5)
        brd[u]=1;
        else { while (brd[u]!=5){cout<<"\aEnter again, already occupied!:\a"<<endl; cin>>u;} brd[u]=1;}
        system("cls");
        display(); i++;
        if((brd[1]==1&&brd[2]==1&&brd[3]==1)||(brd[4]==1&&brd[5]==1&&brd[6]==1)||(brd[7]==1&&brd[8]==1&&brd[9]==1)||(brd[1]==1&&brd[5]==1&&brd[9]==1)||(brd[3]==1&&brd[5]==1&&brd[7]==1)||(brd[1]==1&&brd[4]==1&&brd[7]==1)||(brd[2]==1&&brd[5]==1&&brd[8]==1)||(brd[3]==1&&brd[6]==1&&brd[9]==1))
        {
            cout<<"You Win. Smart moves!\n"<<endl;us++;
            break;
        }
        else if(i==9) {cout<<"It's a draw!\n\n";break;}
        if(i==1)
        {
            cpu=5;
            if(brd[5]==1)
                cpu=1;
            brd[cpu]=0;
        }

        else{//====================================WIN
        if(brd[1]==0&&brd[2]==0&&brd[3]==5)
            brd[3]=0;
        else   if(brd[1]==0&&brd[3]==0&&brd[2]==5)
            brd[2]=0;
        else  if(brd[3]==0&&brd[2]==0&&brd[1]==5)
            brd[1]=0;

        else  if(brd[4]==0&&brd[5]==0&&brd[6]==5)
            brd[6]=0;
        else   if(brd[5]==0&&brd[6]==0&&brd[4]==5)
            brd[4]=0;
        else  if(brd[4]==0&&brd[6]==0&&brd[5]==5)
            brd[5]=0;

        else  if(brd[7]==0&&brd[8]==0&&brd[9]==5)
            brd[9]=0;
        else  if(brd[7]==0&&brd[9]==0&&brd[8]==5)
            brd[8]=0;
        else  if(brd[8]==0&&brd[9]==0&&brd[7]==5)
            brd[7]=0;

        else  if(brd[1]==0&&brd[5]==0&&brd[9]==5)
            brd[9]=0;
        else   if(brd[1]==0&&brd[9]==0&&brd[5]==5)
            brd[5]=0;
        else  if(brd[5]==0&&brd[9]==0&&brd[1]==5)
            brd[1]=0;

        else  if(brd[3]==0&&brd[5]==0&&brd[7]==5)
            brd[7]=0;
        else   if(brd[3]==0&&brd[7]==0&&brd[5]==5)
            brd[5]=0;
        else  if(brd[5]==0&&brd[7]==0&&brd[3]==5)
            brd[3]=0;

        else   if(brd[1]==0&&brd[4]==0&&brd[7]==5)
            brd[7]=0;
        else  if(brd[1]==0&&brd[7]==0&&brd[4]==5)
            brd[4]=0;
        else  if(brd[4]==0&&brd[7]==0&&brd[1]==5)
            brd[1]=0;

        else   if(brd[2]==0&&brd[5]==0&&brd[8]==5)
            brd[8]=0;
        else  if(brd[2]==0&&brd[8]==0&&brd[5]==5)
            brd[5]=0;
        else  if(brd[5]==0&&brd[8]==0&&brd[2]==5)
            brd[2]=0;

        else   if(brd[3]==0&&brd[6]==0&&brd[9]==5)
            brd[9]=0;
        else  if(brd[3]==0&&brd[9]==0&&brd[6]==5)
            brd[6]=0;
        else  if(brd[6]==0&&brd[9]==0&&brd[3]==5)
            brd[3]=0;
        else if(lev==1&&(i==3||i==5||i==7))
            goto let_win;
        else if(lev==11&&(i==7))
                goto medium;
            //=======================================Dont let win
        else  if(brd[1]==1&&brd[2]==1&&brd[3]==5)
            brd[3]=0;
        else   if(brd[1]==1&&brd[3]==1&&brd[2]==5)
            brd[2]=0;
        else  if(brd[3]==1&&brd[2]==1&&brd[1]==5)
            brd[1]=0;

        else  if(brd[4]==1&&brd[5]==1&&brd[6]==5)
            brd[6]=0;
        else   if(brd[5]==1&&brd[6]==1&&brd[4]==5)
            brd[4]=0;
        else  if(brd[4]==1&&brd[6]==1&&brd[5]==5)
            brd[5]=0;

        else  if(brd[7]==1&&brd[8]==1&&brd[9]==5)
            brd[9]=0;
        else  if(brd[7]==1&&brd[9]==1&&brd[8]==5)
            brd[8]=0;
        else  if(brd[8]==1&&brd[9]==1&&brd[7]==5)
            brd[7]=0;

        else  if(brd[1]==1&&brd[5]==1&&brd[9]==5)
            brd[9]=0;
        else   if(brd[1]==1&&brd[9]==1&&brd[5]==5)
            brd[5]=0;
        else  if(brd[5]==1&&brd[9]==1&&brd[1]==5)
            brd[1]=0;

        else  if(brd[3]==1&&brd[5]==1&&brd[7]==5)
            brd[7]=0;
        else   if(brd[3]==1&&brd[7]==1&&brd[5]==5)
            brd[5]=0;
        else  if(brd[5]==1&&brd[7]==1&&brd[3]==5)
            brd[3]=0;

        else  if(brd[1]==1&&brd[4]==1&&brd[7]==5)
            brd[7]=0;
        else  if(brd[1]==1&&brd[7]==1&&brd[4]==5)
            brd[4]=0;
        else  if(brd[4]==1&&brd[7]==1&&brd[1]==5)
            brd[1]=0;

        else   if(brd[2]==1&&brd[5]==1&&brd[8]==5)
            brd[8]=0;
        else  if(brd[2]==1&&brd[8]==1&&brd[5]==5)
            brd[5]=0;
        else  if(brd[5]==1&&brd[8]==1&&brd[2]==5)
            brd[2]=0;

        else   if(brd[3]==1&&brd[6]==1&&brd[9]==5)
            brd[9]=0;
        else  if(brd[3]==1&&brd[9]==1&&brd[6]==5)
            brd[6]=0;
        else  if(brd[6]==1&&brd[9]==1&&brd[3]==5)
            brd[3]=0;
            //=======================================Choose Anyone if no favour is possible
        else let_win: medium: for(int y=1;y<=9;y++)
        {
            if(brd[y]==5)
            {
                 brd[y]=0;
                 break;
            }
        }


        }
        system("cls");
     display();
      if((brd[1]==0&&brd[2]==0&&brd[3]==0)||(brd[4]==0&&brd[5]==0&&brd[6]==0)||(brd[7]==0&&brd[8]==0&&brd[9]==0)||(brd[1]==0&&brd[5]==0&&brd[9]==0)||(brd[3]==0&&brd[5]==0&&brd[7]==0)||(brd[1]==0&&brd[4]==0&&brd[7]==0)||(brd[2]==0&&brd[5]==0&&brd[8]==0)||(brd[3]==0&&brd[6]==0&&brd[9]==0))
        {
            cout<<"You Lose but you tried well!\n"<<endl;cs++;
            break;
        }
        i++;
    }
    cout<<"\t\t You       |     Tic-Tac-Toe Master\n";
    cout<<"\t\t   "<<us<<"       |     "<<cs<<"                 \n"<<endl;
    goto label;

    return 0;
}
void display()
{  // cout<<"in display()\n";
    cout<<"\n\t\t\t";
    for(int t=1;t<=9;t++)
    {  //4cout<<" "<<brd[t]<<" "<<t<<endl;

        switch(brd[t])
        {   cout<<"\n";
            case 5:cout<<" |       | "; break;
            case 1:cout<<" |   x   | "; break;
            case 0:cout<<" |   o   | "; break;
        }
if(t%3==0)
cout<<"\n\t\t\t";

    }
    cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}
