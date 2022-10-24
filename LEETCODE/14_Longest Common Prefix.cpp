#include<bits/stdc++.h>
#define mx 10005
using namespace std;
typedef double ll;
string longestCommonPrefix(vector<string>& strs)
{
    string comn="";
    //cout<<strs[0];
    if(strs.size()==1)
    {
        return strs[0];
    }
    for(int i=0; i<strs.size()-1; i++)
    {
        string s1= strs[i];
        string s2= strs[i+1];
        if(s2.size()==0 || s1.size()==0 )
        {
            comn="";
            break;
        }
        //i=i+1;
        int n=min(s1.size(),s2.size());
        if(comn.size()==0)
        {
            for(int j=0; j<n; j++)
            {
                if(s1[j]==s2[j])
                {
                    comn.push_back(s1[j]);
                }
            }

        }


        //cout<<s1<<" "<<s2<<endl;
        for(int j=0; j<comn.size(); j++)
        {

            if((s1[j]!=s2[j] && comn.size()>j)  )
            {
                comn.erase(j,comn.size());

                break;
            }

            // cout<<comn<<"--"<<endl;


        }
        // cout<<comn<<endl;
        if(comn.size()==0)
            break;


    }
    return comn;
}

int main()
{



    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    cout<<longestCommonPrefix(str)<<endl;


}
//     cout<<fixed<<setprecision(2)<<(double)1/2<<endl;
//     cin.ignore();
//     getchar();
//     cout<<"Case "<<tc++<<": ";
