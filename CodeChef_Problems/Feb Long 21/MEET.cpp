#include<bits/stdc++.h>
using namespace std;
#define ll long long

// 12 hour format -> HH:MM AM OR HH:MM PM

int checkAMorPM(string time)
{
    if(time[6] == 'A')
        return 1; // if AM
    return 0; //if PM
}

string convertTo24HR(string time)
{
    string time_form = "";

    //get hours
    int h1 = (int)time[1] - '0';
    int h2 = (int)time[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

    int id = checkAMorPM(time);

    if(id == 1) //AM
    {
        if(hh == 12)
        {
            time_form += "00";
            
            for(int i = 2; i <= 4; i++)
                time_form += time[i];
        }

        else
        {
            for(int i = 0; i <= 4; i++)
                time_form += time[i];
        }
    }

    else //PM
    {
        if(hh == 12)
        {
            time_form += "12";
            
            for(int i = 2; i <= 4; i++)
                time_form += time[i];
        }

        else
        {
            hh += 12;
            time_form += to_string(hh);

            for(int i = 2; i <= 4; i++)
                time_form += time[i];
        }
    }

    return time_form;
}

int convertToMin(string time)
{
    string hr = "", mn = "";

    hr += time[0];
    hr += time[1];

    stringstream objh(hr);
    int hour = 0;
    objh >> hour;

    mn += time[3];
    mn += time[4];

    stringstream objm(mn);
    int min = 0;
    objm >> min;

    int total_min = (hour*60) + min;

    return total_min;
}

//24 HR format HH:MM

string generateop(string meet_time, vector<pair<string,string>>V)
{
    string res = "";

    //cout<<meet_hour<<" "<<meet_min<<endl;

    int total_meet_min = convertToMin(meet_time);

    //cout<<total_meet_min<<endl;

    for(auto x : V)
    {
        string start_time = x.first;
        string end_time = x.second;

        int total_start_min = convertToMin(start_time);
        int total_end_min = convertToMin(end_time);

        //cout<<total_start_min<<" "<<total_end_min<<endl;

        if(total_meet_min >= total_start_min && total_meet_min <= total_end_min)
            res += "1";
        else
            res += "0";
    }

    return res;
}

void solve()
{
    string meet_time;
    getline(cin,meet_time);

    //convert all time to 24 HR format

    meet_time = convertTo24HR(meet_time);

    int N;
    cin>>N;
    cin.ignore();

    vector<pair<string,string>>V; //store the start and end time

    for(int i = 0; i < N; i++)
    {
        string str;
        getline(cin,str);

        // HH:MM ID HH:MM ID

        string start_time = "", end_time = "";

        for(int c = 0; c <= 7; c++)
            start_time = start_time + str[c];
        
        for(int c = 9; c <= str.size(); c++)
            end_time = end_time + str[c];
        
        //cout<<start_time<<" "<<end_time<<endl;

        start_time = convertTo24HR(start_time);
        end_time = convertTo24HR(end_time);

        //cout<<start_time<<" "<<end_time<<endl;
        V.push_back(make_pair(start_time,end_time));
    }

    //generate the o/p string
    
    string res = generateop(meet_time, V);

    cout<<res<<endl;
}

int main()
{
    int T;
    cin>>T;
    cin.ignore(); //ignore new line character

    while(T--)
        solve();
}