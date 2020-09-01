#include<iostream>
using namespace std;

float calculation()
{
    float day1,day2,day3,day4,day5,day6,day7,sum=0,avg;

    cout<<"Enter  Day 1:";
    cin>>day1;
    cout<<"Enter Day 2:";
    cin>>day2;
    cout<<"Enter Day 3:";
    cin>>day3;
    cout<<"Enter Day 4:";
    cin>>day4;
    cout<<"Enter Day 5:";
    cin>>day5;
    cout<<"Enter Day 6:";
    cin>>day6;
    cout<<"Enter Day 7:";
    cin>>day7;
    
    sum=day1+day2+day3+day4+day5+day6+day7;

    avg=sum/7;

    return avg;

}


int main()
{
     cout<<"\t\t\t\t\tWeekly Study Hour Counter";
     cout<<"\n\t\t\t\t\tDeveloped By Jack Pritom Soren";
     cout<<"\n\t\t\t\t\tVersion:- 1.0\n\n\n";

     cout<<"Welcome to Weekly Study Hour Counter :)"<<endl;

     cout<<"Press 1 for Enter or Press 2 for Quit"<<endl;

     int choice;

     cout<<"[1/2]=";
     cin>>choice;

     if(choice==1)
     {
        cout<<"Enter you Daily Working Hours "<<endl;
        float result=calculation();

        cout<<"Your average is: "<<result;
     }

     else if (choice==2)
     {
        return 0;
     }

}