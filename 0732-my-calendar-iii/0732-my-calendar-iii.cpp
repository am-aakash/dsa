class MyCalendarThree {
public:
    map<int,int>m;
    MyCalendarThree() {}
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int sum=0;
        int maxi=0;
        for(auto &i:m){
            sum+=i.second;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */