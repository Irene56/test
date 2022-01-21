#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    float p, e, s;
    cin >> n;
    float e1[n];
    int sl[n];
    string str;
    cin.ignore();
    for(int j = 0; j < n; j++)
    {
        std::getline(std::cin, str);
        p = 0;
        e = 0;
        s = 0;
        for(int i = 0 ; i < str.size(); i++)
        {
            if(str[i]==' ')
            {
                while(str[i]==' ' && i < str.size())
                {
                    i++;
                }
                p++;
            }
            if((str[i]) == 'a' || (str[i]) == 'o' || (str[i]) == 'u' || (str[i]) == 'e' || (str[i]) == 'A' || (str[i]) == 'O' || (str[i]) == 'E' || (str[i]) == 'U')
            {
                s++;
            }
        }
        e = (p + 1)/s;
        sl[j]=p + 1;
        e1[j]=e;
    }
    int in;
    float maks = 0;
    for(int i = 0; i < n; i ++)
    {
        if(e1[i]>maks)
        {
            maks = e1[i];
            in = i;
        }
    }
    for(int i = 0; i < n; i ++)
    {
        if(sl[i]>sl[in] && e1[i] == maks)
        {
            maks = e1[i];
            in = i;
        }
    }
    e1[in]=-1;
    for(int i = 0; i < n; i ++)
    {
        if(e1[i]==maks && sl[i]==sl[in])
        {
            cout<<"O-o-o-rks...";
            return 0;
        }
    }
    cout<<in + 1;
    return 0;
}
