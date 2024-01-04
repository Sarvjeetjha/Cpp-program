//valid paranthesis check
// bool isValidParenthesis(string expression)
// {
//     // Write your code here.
//     stack<char>s;
//     int size=expression.length();
//     for(int i=0;i<size;i++){
//         char c=expression[i];
//         if(c=='(' || c=='{'||c=='['){
//             s.push(c);
//         }
//         else{
//             if(!s.empty()){
//                 char top=s.top();
//                 if((top=='('&&c==')')||(top=='['&&c==']')||(top=='{'&&c=='}')){
//                     s.pop();

//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     return true;

// }