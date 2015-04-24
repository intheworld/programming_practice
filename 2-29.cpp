#include <stdio.h>
#include <map>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char* argv[])
{
	map<string, int> m;
	m["January"] = 1;
	m["February"] = 2;
	m["March"] = 3;
	m["April"] = 4;
	m["May"] = 5;
	m["June"] = 6;
	m["July"] = 7;
	m["August"] = 8;
	m["September"] = 9;
	m["October"] = 10;
	m["November"] = 11;
	m["December"] = 12;
	//freopen("input.txt", "r", stdin);
	int TC,C;
	int day1, day2, year1, year2;
	string month1, month2;
	int res;
    cin>>TC;
    for( C = 1; C <= TC; C++)
    {
        cin>>month1;
        scanf("%d, %d", &day1, &year1);
        cin>>month2;
        scanf("%d, %d", &day2, &year2);
        res = (year2-2000)/4 - (year2-2000)/100 + (year2-2000)/400;
        res -= (year1-2000)/4 - (year1 - 2000)/100 + (year1-2000)/400;
        if((year1%4==0 && year1%100!= 0) || year1%400==0) {
            if(m[month1] < 2 || (m[month1] == 2 && day1 <= 29 ))
                res ++;
        }
        if((year2%4==0 && year2%100!= 0) || year2%400==0) {
            if(m[month2] < 2 || (m[month2] == 2 && day2 < 29))
                res --;
        }
        cout<<"Case #"<<C<<": "<<res<<endl;
    }
	return 0;
}
