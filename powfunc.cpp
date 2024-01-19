// this code is calculating power of an number or call it EXPONENT

// #include<iostream>
// using namespace std;
//        int pow(int m,int n)
//        {
//         if(n==0)
//         return 1;
//         return pow(m,n-1)*m;
//        }
// int main(){
//    int r= pow(2,8);
//     cout<<r;
//     return 0;
// }
/* WE can futher optimize the above code by making power half this will take less number of calls to give the desired result 
if n is even example = 2^8=(2^2)^4 = (2*2)^4.
if n is odd the we have to one multiply extra by the nubmer 
example = 2^9=2*(2^2)^4  
*/
#include<iostream>
using namespace std;
int pow(int m,int n)
{
       if(n==0)
       return(1);
       if(n%2==0)
       return pow(m*m,n/2);
       else
       return m*pow(m*m,n/2);
}
int main(){
        int r= pow(2,8);
       cout<<r;
   return 0;
       return 0;
}
