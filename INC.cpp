#include<bits/stdc++.h>
#include<string>
#include <iostream>

using namespace std;
void space(string& str, vector<int> length)
{
    int count = 0;
    for (int i = 0; i < sizeof(length); i++) {
        int c = str[i];
        if (isspace(c))
            count++;
    }
    cout<< count<<endl;
}
vector<int> PrintIndex(string text, string cell, string searchstring)
{   vector<int> result;
    int index = text.find(searchstring);
    if(index!=-1)
    {
        result.push_back(index);
    }
    else cout<<"Invalid Input";
    space(text,result);
    return result;
}
int main()
{
string text,cell,searchstring;
getline(cin, text);
getline(cin, cell);
getline(cin, searchstring);
vector<int> result=PrintIndex(text,cell, searchstring);
for(int x:result){
		cout <<x<<",";
	}
return 0;

}
