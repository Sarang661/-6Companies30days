vector<int> maxTenNumbers(vector<int>list){
    vector<int>v;
    priority_queue<int>q;
    for(int i=0;i<list.size();i++){
        q.push(list[i]);
    }
    for(int i=0;i<10;i++){
        v.push_back(q.top());
        q.pop();
    }
    return v;
}