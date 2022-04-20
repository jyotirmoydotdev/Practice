bool isPalindrome(int x) {
        long long int orginal=x;
        long long int reverse=0;
        if (x==0){
            return true;
        }
        else if (x<0){
            return false;
        }
        else{
            while(x!=0){
                int temp=x%10;
                reverse=reverse*10;
                reverse=reverse+temp;
                x=x/10;
            }
        }
        if (orginal==reverse){
            return true;
        }
        else{
            return false;
        }
}