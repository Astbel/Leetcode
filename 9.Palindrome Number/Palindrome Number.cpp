/*
if(x<0||(x!=0&&x%10==0))
x為負數 ,x為整數但被10整除時皆不成立Palindrome
*/
/*
if(sum==x||sum==x/10)  此時分成兩個部分探討原因如下:
222  <--反向為Palindrome 
121  <--同上
   sum==x  判斷偶數狀況
   sum==x/10 判斷基數狀況
   EX:例如123321
   偶數判別當反轉後兩筆相等此時也是回文數
   
   sum=123
   x=123
   
   基數下無視中位數當前後兩位數相等視同回文數
   EX:12321
   sum=12
   x=123
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x!=0&&x%10==0))
            return false;
        if(x==0)
            return true;
        int sum=0;
        while(x>sum)
        {
            sum=sum*10+x%10;
            if(sum==x||sum==x/10)return true;
            x=x/10;
        }
        return false;
    }
};