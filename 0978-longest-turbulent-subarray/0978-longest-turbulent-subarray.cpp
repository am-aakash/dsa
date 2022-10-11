class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int res = 0, curr = 0;
        for(int i=0; i<arr.size()-1; i++){
            if(i&1){
                if(arr[i]>arr[i+1]) curr++;
                else curr=0;
            }
            else{
                if(arr[i]<arr[i+1]) curr++;
                else curr=0;
            }
            res = max(res, curr);
        }
        curr=0;
        for(int i=0; i<arr.size()-1; i++){
            if(i&1){
                if(arr[i]<arr[i+1]) curr++;
                else curr=0;
            }
            else{
                if(arr[i]>arr[i+1]) curr++;
                else curr=0;
            }
            res = max(res, curr);
        }
        return res+1;
    }
};