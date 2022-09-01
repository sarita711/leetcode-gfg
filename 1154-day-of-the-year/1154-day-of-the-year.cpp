class Solution {
public:
    int dayOfYear(string date) {
      int mm, dd, yyyy, res = 0;
    unordered_map<int , int>m;
    mm = stoi(date.substr(5 , 2)); //month
    dd = stoi(date.substr(8 , 2)); 
    yyyy = stoi(date.substr(0 , 4)); //year
    
    m[1] = 31, m[2] = 28, m[3] = 31, m[4] = 30, m[5] = 31, m[6] = 30, m[7] = 31, m[8] = 31, m[9] = 30, m[10] = 31, m[11] = 30, m[12] = 31;
    
    for(int i = 1; i< mm ; i++)
        res += m[i];
    
    res += dd;
    
    if(yyyy % 4 == 0 && yyyy != 1900 && mm > 2 )
        res += 1;
    return res;  
       
    }
};