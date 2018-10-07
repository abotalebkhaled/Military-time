#include <iostream>

using namespace std;

string time(string time);
int main()
{
    string  z;
    cout<<"Enter your time in 12 hours form: ";
    cin >> z;
    cout<<"your time in 24 hours form: ";
    time(z);


}



string time(string time)
{
    // if the time is AM
    for (int i=0 ; i<time.length() ; i++)
    {
        if ((time[i]=='A')&&(time[i+1]=='M'))
        {
            if((time[0]=='1')&&(time[1]=='2'))
            {
                time[0]='0';
                time[1]='0';
                cout<<time[0]<<time[1]<<time[3]<<time[4]<<" Hours"<<endl;
                break;
            }

            else
            {
                cout<<time[0]<<time[1]<<time[3]<<time[4]<<" Hours"<<endl;
                break;
            }
        }

         //if the time is PM

        if ((time[i]=='P')&&(time[i+1]== 'M'))
        {
            if((time[0]=='1')&&(time[1]=='2'))
            {
                cout<<time[0]<<time[1]<<time[3]<<time[4]<<" Hours"<<endl;
                break;
            }
            else if((time[1]=='8'))
            {
                time[0]='2';
                time[1]='0';
                cout<<time[0]<<time[1]<<time[3]<<time[4]<<" Hours"<<endl;
                break;
            }
            else if((time[1]=='9'))
            {
                time[0]='2';
                time[1]='1';
                cout<<time[0]<<time[1]<<time[3]<<time[4]<<" Hours"<<endl;
                break;
            }
            else
            {
                time[0]=int(time[0])+1;
                time[1]=int(time[1])+2;
                cout<<time[0]<<time[1]<<time[3]<<time[4]<<" Hours"<<endl;
                break;
            }
        }
    }
}




