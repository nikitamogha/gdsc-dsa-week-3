 void rotate(vector<vector<int>>& matrix) {
        //first transpose and then swap
        
          for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix.size();j++)
            {
                  swap(matrix[i][j],matrix[j][i]);
            
            }
        } 
        for(int i=0;i<matrix.size();i++)
        {
            
            
           int j=0,t=matrix.size()-1;
            while(j<t)
            {
                swap(matrix[i][j],matrix[i][t]);
                    t--;
                    j++; 
            } 
        } 
    
        