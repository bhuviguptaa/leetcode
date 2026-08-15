class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> s;
        for(int i = 0; i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop_back();
            }
            else if(operations[i]=="D"){
                s.push_back(2*s.back());
            }
            else if(operations[i]=="+"){
                int n = s.size();
                s.push_back(s[n-1]+s[n-2]);  
            }
            else{
                s.push_back(stoi(operations[i]));
            }
            
        }
        int sum = 0;
        for(int i = 0; i<s.size() ;  i++){
            sum+=s[i];
        }
        return sum;
    }
};