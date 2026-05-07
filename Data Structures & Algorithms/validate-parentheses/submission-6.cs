public class Solution {
    public bool IsValid(string s) {
        Stack<char> stack=new Stack<char>();
        Dictionary<char,char> closetoopen=
        new Dictionary<char,char>() {
            {'}','{'},
            {']','['},
            {')','('},
        };
        foreach (char c in s){
            if (closetoopen.ContainsKey(c)){
                if(stack.Count>0 && stack.Peek()==closetoopen[c]){
                    stack.Pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.Push(c);
            }
        }

        return stack.Count==0;


    }
}
