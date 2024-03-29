class Solution {
public:
    vector<int> partitionLabels(string s) {
        int size = s.length();
        vector<int>alpha(26);
        
        for(int i = 0; i < size; i++){
            alpha[s[i] - 'a'] = i;
        }
        
        int lastIndex = 0;
        int partitionEnd = -1;
        
        vector<int>partition;
        for(int i = 0; i < size; i++){
            int temp = alpha[s[i] - 'a'];
            if(partitionEnd < temp) partitionEnd = temp;
            
            if(partitionEnd == i){
                partition.push_back(i + 1 - lastIndex);
                lastIndex = i + 1;
            }
        }
        
        return partition;
    }
};
