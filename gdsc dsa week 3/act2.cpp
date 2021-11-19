int countWords(std::string s)
{
    int n=s.size();
    int count=0;
    int i=0;
    while(i<n)
    {
    
            if(s[i]==' ')
            {
                if(s[i+1]>=97 && s[i+1]<=122)
              {
               count++;
               i+=2;
               }
            }

             else if(s[i]=="\ " && s[i+1]=='n')
             {
                 if(s[i+2]>=97 && s[i+2]<=122)
                {
                     count++;
                     i+=2;
                  }
             }
             else if(s[i]=="\ " && s[i+1]=='t')
             {
                 if(s[i+2]>=97 && s[i+2]<=122)
                 {
                 count++;
                 i+=2;
                 }
             }
             else 
             i++;
        
       
    }
    return count+1;