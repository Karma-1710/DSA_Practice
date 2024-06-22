#include<iostream>
using namespace std;

class Solution {
public:
    void combinations(int open, int close, vector<string>& answer, string str){
        if(open == 0 && close == 0){
            answer.push_back(str);
            return;
        }
        if(open>0){
            combinations(open - 1, close, answer, str + "(");
        }
        if(close > 0 && close > open){
            combinations(open, close - 1, answer, str + ")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        combinations(n, n, answer, "");
        return answer;
    }
};