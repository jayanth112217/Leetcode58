class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int high = s.size()-1;
        int flag=0;
        for(int i=high;i>=0;i--){
            if(flag==1 && s[i]==' ') break;
            else{
                if(s[i]!=' '){
                    flag=1;
                    length++;
                }
            }
        }
        return length;
    }
};