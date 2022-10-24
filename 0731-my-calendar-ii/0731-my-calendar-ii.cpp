class MyCalendarTwo {
public:
    map<int,int> m;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        int sum=0;
        for(auto &i:m)
        {
            sum+=i.second;
            if(sum>=3) // if triple booking happens
			{
                m[start]--;  //  remove the elements 
                m[end]++; //  remove the elements 
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */