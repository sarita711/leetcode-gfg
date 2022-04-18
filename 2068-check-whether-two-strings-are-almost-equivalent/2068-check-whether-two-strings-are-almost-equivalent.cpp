class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
       int arr[123];
        for(int i=0;i<123;++i)
        {
arr[i]=0;


}
        int x=word1.size();
        
        for(int i=0;i<x;++i)
        {

           arr[(int)word1[i]]++;
             arr[(int)word2[i]]--;


        }
        for(int i=0;i<123;++i)
        {

           if(arr[i]>3 || arr[i]<(-3))
           {
return false;


           }




         }
        return true;
    }
};