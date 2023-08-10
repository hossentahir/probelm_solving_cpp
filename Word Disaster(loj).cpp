#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        getline(cin,s);
        int len = s.length();
        char arr[len+1];
        for(int i = 0, j=0; i < len; i++,j++)
        {
            if(s[i]!=' ')
            {
                arr[j] = s[i];
            }
            else if(s[i]==' ')
            {
                arr[j] = '\0';

                int wLen;
                wLen = strlen(arr);
                cout<<wLen<<endl;
                for(int k = 0; k < wLen/2; k++)
                {
                    swap(arr[k],arr[wLen-k-1]);
                }
                cout<<arr<<' ';
                j = 0;
            }
        }
    }
    return 0;
}
//Didn't accepted
