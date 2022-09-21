#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
int romanToInt(string s)
{
    int res=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='I')
        {
            if( (i!= s.size()-1 && s[i+1]=='V'))
            {
                res+=4;
                //  cout<<4<<endl;
            }
            else if( (i!= s.size()-1 && s[i+1]=='X'))
            {
                res+=9;
                // cout<<9<<endl;

            }
            else
            {
                res+=1;
                //   cout<<1<<endl;
            }
        }
        else if(s[i]=='X')
        {
            if((i!= s.size()-1 && s[i+1]=='L'))
            {
                res+=40;
                //   cout<<40<<endl;

            }
            else if( (i!= s.size()-1 && s[i+1]=='C'))
            {
                res+=90;
                //cout<<90<<endl;
            }
            else
            {
                if(i==0 || (i!=0 && s[i-1]!='I'))
                    res+=10;
                //   cout<<10<<endl;

            }
        }
        else if(s[i]=='C')
        {
            if( (i!= s.size()-1 && s[i+1]=='D'))
            {
                res+=400;
                //cout<<400<<endl;

            }
            else if( (i!= s.size()-1 && s[i+1]=='M'))
            {
                res+=900;
                //cout<<900<<endl;
            }

            else if(i==0 || (i!=0 && s[i-1]!='X'))
            {

                res+=100;
                // cout<<10<<endl;

            }
        }
        else if(s[i]=='V' )
        {
            if(i==0 || (i!=0 && s[i-1]!='I'))
                res+=5;
            //cout<<5<<endl;
        }
        else if(s[i]=='L' )
        {
            if(i==0 || (i!=0 && s[i-1]!='X'))
                res+=50;
            //cout<<50<<endl;
        }
        else if(s[i]=='D' )
        {
            if(i==0 || (i!=0 && s[i-1]!='C'))
            {
                res+=500;
            }
            //cout<<500<<endl;
        }
        else if(s[i]=='M' )
        {
            if(i==0 || (i!=0 && s[i-1]!='C'))
            {
                res+=1000;
            }

            //cout<<1000<<endl;
        }
        //cout<<s[i];

    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<romanToInt(s)<<endl;
}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
