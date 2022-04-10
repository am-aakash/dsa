class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum=0;
        vector<int> temp;
        temp.push_back(stoi(ops[0]));
        for(int i=1;i<ops.size(); i++){
            if(ops[i]=="C") temp.pop_back();
            else if(ops[i]=="D") temp.push_back(temp[temp.size()-1]*2);
            else if(ops[i]=="+") temp.push_back(temp[temp.size()-1]+temp[temp.size()-2]);
            else temp.push_back(stoi(ops[i]));
        }
        for(auto it:temp) sum+=it;
        return sum;
    }
};
