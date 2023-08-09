#include<bits/stdc++.h>
using namespace std;

void printReduceByOne(string s1)
{
    int matchIndex;
    int i;
    int strLength = s1.length();
    //Checking from the ending side of the string and match whether it is '1'. And using the m variable we're storing the index of matching.
    for(i=strLength-1;i>=0;i--)
    {
        if(s1[i]=='1')
        {
        		s1[i]='0';
                matchIndex = i;
                break;
        }
    }
    i=matchIndex+1;
    //Rest of the digit from the ending to the before of the match will be '1'.
    while(i<strLength)
    {
        s1[i]='1';
        i++;
    }
     if(s1[0]=='0' && strLength!=1)
    {
        for(int i =1;i<strLength;i++) cout<<s1[i];
    }
    else
        cout<<s1;
    cout<<endl;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        string s1;cin>>s1;
        printReduceByOne(s1);
    }







    return 0;
}
