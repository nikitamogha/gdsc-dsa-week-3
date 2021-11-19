char getMaxOccuringChar(string str)
    {
        char ch;
        int max=INT_MIN;
        map<char,int>ans;
        for(int i=0;i<str.size();i++)
        {
            ans[str[i]]++;
        }
        for(auto x:ans)
        {
            if(x.second>max)
            {
                max=x.second;
                ch=x.first;
            }
        }
        return ch;
    }