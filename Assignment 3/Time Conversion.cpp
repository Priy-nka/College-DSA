//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include <bits/stdc++.h>
#include<string>
using namespace std;

string timeConversion(string s) {
    string ans="",ho="",mi="",se="",ap="";
    ho+=s[0];ho+=s[1];
    int h=stoi(ho);
    mi+=s[3];mi+=s[4];
    se+=s[6];se+=s[7];
    ap+=s[8];
    ans=ho+":"+mi+":"+se;
    if (ap=="P")
    {
        if (ho!="12")
        ho=to_string(h+12);
    }
    if (ap=="A")
    {
        if (ho=="12")
        ho="00";
    }
    ans=ho+":"+mi+":"+se;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
