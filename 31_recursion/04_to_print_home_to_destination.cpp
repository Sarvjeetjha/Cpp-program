//to_print_home_to_destination
#include<iostream>
using namespace std;
void reachhome(int src, int dest){
        cout<<"source "<<src<<" destination "<<dest<<endl;
       if (src == dest){
            cout<<"pahunch gya"<<endl;
            return ;}
        src++;
        reachhome(src,dest);
}
int main(){
int src,dest;
src=0;
dest=10;
reachhome(src,dest);
    
     return 0;
}