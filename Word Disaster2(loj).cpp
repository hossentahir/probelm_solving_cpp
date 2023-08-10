#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    bool flag=0;
    cin.ignore();
    while(t--)
    {
        bool flag=0;
        string s;getline(cin,s);//love you all
        //cout<<s;
        int len = s.length();//12
        int j=0;
        char arr[len];
        for(int i=0;i<len;i++)//0,1,2,3,4
        {
            if(s[i]!=' ')//l,o,v,e
            {
                arr[j]=s[i];//love
                //cout<<arr[j];
                j++;//1,2,3,4


            }
            else
            {
                arr[j]='\0';
                //cout<<arr<<endl;
                j=0;
                int arrLen = strlen(arr);
                //cout<<arrLen;
                for(int k=0;k<arrLen/2;k++)
                {
                    swap(arr[k],arr[arrLen-k-1]);
                }
                cout<<arr<<" ";
                flag=1;
            }
        }
        if(flag)
        {
                arr[j]='\0';
                //cout<<arr<<endl;
                j=0;
                int arrLen = strlen(arr);
                //cout<<arrLen;
                for(int k=0;k<arrLen/2;k++)
                {
                    swap(arr[k],arr[arrLen-k-1]);
                }
                cout<<arr<<endl;
        }
        else if(!flag)
        {
                arr[j]='\0';
                //cout<<arr<<endl;
                j=0;
                int arrLen = strlen(arr);
                //cout<<arrLen;
                for(int k=0;k<arrLen/2;k++)
                {
                    swap(arr[k],arr[arrLen-k-1]);
                }
                cout<<arr<<endl;
        }
    }
    return 0;
}
//Got accepted! But i didn't get this code right though i wrote this code at my own!
