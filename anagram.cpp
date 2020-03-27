vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
   map<string,vector<int>> Mx;
   vector<vector<int>> v;
   for(int i=0;i<A.size();i++)
   {
       string x=A[i];
       sort(x.begin(),x.end());
       Mx[x].push_back(i+1);
   }
   for(map<string,vector<int>> ::iterator it=Mx.begin();it!=Mx.end();it++)
   {
       vector<int> r;
       for(vector<int> ::iterator i=it->second.begin();i<it->second.end();i++)
       {
           r.push_back(*i);
       }
       v.push_back(r);
       
   }

    return v;
}

