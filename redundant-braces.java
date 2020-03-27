import java.util.*;
public class Solution {
    public int braces(String A) {
        Stack<Character> st=new Stack<>();
        char[] str=A.toCharArray();
        for(int i=0;i<str.length;i++)
        {
            if(str[i]==')')
            {
                char top=st.peek();
                st.pop();
                int flag=1;
                while(top!='(')
                {
                    if(top=='+'||top=='-'||top=='/'||top=='*')
                    flag=0;
                    top=st.peek();
                    st.pop();
                }
                if(flag==1)
                {
                    return 1;
                }
            }
            else{
                st.push(str[i]);
            }
        }
        return 0;
    }
}
