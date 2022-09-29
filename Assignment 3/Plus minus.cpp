
//https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void plusMinus(vector<int> arr) {
    float pos=0,neg=0,zero=0;
    for (int i=0;i<arr.size();i++)
    {
        if (arr[i]>0)
            pos+=1;
        else if (arr[i]<0)
            neg+=1;
        else {
            zero+=1;
        }
    }
    pos= (float)(((int) ((pos/arr.size())*1000000)))/1000000;
    neg= (float)(((int) ((neg/arr.size())*1000000)))/1000000;
    zero= (float)(((int) ((zero/arr.size())*1000000)))/1000000;
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<zero;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
