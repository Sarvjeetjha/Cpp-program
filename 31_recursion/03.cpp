//to print no line i:e 1 2 3 4 5 6 7 8 9.......
#include<iostream>
using namespace std;
/*

                             o/p    5
                                    4
                                    3
                                    2
 ^                                   1
 |

                    */
// void print(int n){     
//     if(n==0)
//         return ;
//     cout<<n<<endl<<endl;
//     print(n-1);
// }
/*

                             o/p   1
                                    2
                                    3
                                    4
                                    5 
                                    
                               |
                               V     
                                    
                                    


                    */

void print(int n){     
    if(n==0)
        return ;
    
    print(n-1);
    cout<<n<<endl<<endl;}



int main(){
int a;
cin>>a;
cout<<endl;
print(a);
     return 0;
}