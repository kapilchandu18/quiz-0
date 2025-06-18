vector<int> Solution::twoSum(const vector<int> &k, int s) {
    int n = k.size();
    int index1 = -1, index2 = n + 1; 
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (k[i] + k[j] == s) {
                if (j < index2 || (j == index2 && i < index1)) {
                    index1 = i;
                    index2 = j;
                }
            }
        }
    }

    vector<int> answer;
    if (index1 != -1) {
        answer.push_back(index1 + 1); 
        answer.push_back(index2 + 1);
    }
    return answer; 
}