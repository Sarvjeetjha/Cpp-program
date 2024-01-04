// #include <bits/stdc++.h> 
// void stackInsert(stack<int> &s,int n){
// 			if((s.empty())||(!s.empty() && s.top()<n))
// 			{
//                 s.push(n);
//                 return ;
//             }
           
            
//                 int temp=s.top();
//                 s.pop();
//                 stackInsert(s,n);
//                 s.push(temp);
            
// }
// stack<int> sortStack(stack<int> &s)
// {
// 	// Write code here.
// 	if(s.empty()){
// 		return s;
// 	}
// 	else{
// 		int temp=s.top();
// 		s.pop();
// 		sortStack(s);
// 		stackInsert(s,temp);

// 	}
// 	return s;
// }