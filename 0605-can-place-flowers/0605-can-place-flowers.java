class Solution {
    public boolean canPlaceFlowers(int[] arr, int n) {
        int count =0;
        int i=1;
        if(arr.length==1){
            if(arr[0]==0){
                arr[0]=1;
                count++;
            }
        }
        if(arr[0]==0 && arr[1]==0){
            arr[0]=1;
            count++;
        }
        if(arr[arr.length-1]==0 && arr[arr.length-2]==0){
            arr[arr.length-1]=1;
            count++;
        }
        while(i<arr.length-1){
            if(arr[i-1]==0 && arr[i+1]==0 && arr[i]!=1){
                arr[i]=1;
                count++;
                i++;
            }
            else{
                i++;
            }
        }if(count>=n){
            return true;
        }
        return false;
    }
}