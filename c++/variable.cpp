# include <iostream>
using namespace std;

// int main(){
//     // // cout<<"hello world"<<endl;
//     // int a=5;
//     // cout<<"the age of vineet is "<<a<<endl;
//     // float s=238.3;
//     // cout<<"the score of vineet is "<<s<<endl;
//     // // aise he double(bada decimal),char,string,long,long long, short etc..;




//     // user se input lene 
//     int a,b ;

//     cout<<"enter the number"<<endl;
//     cin>>a;
//     cout<<"enter the number"<<endl;
//     cin>>b;

//     cout<<"a+b is "<<a+b<<endl;
//     cout<<"a-b is "<<a-b<<endl;
//     cout<<"a*b is "<<a*b<<endl;
//     cout<<"a/b is "<<a/b<<endl;


//     return 0;
    
// }


//condition
//if else
// elseifelse
//switch case


//loop
// while 
// do while
// for 


// /function

// int add (int a,int b){
//     int c;
//     c=a+b;
//     return c;
// }

// int main(){
//     int a,b;
//     cout<<"enter the no. "<<endl;
//     cin>>a;
//     cout<<"enter the no. "<<endl;
//     cin>>b;

//     cout<<"the sum is "<<add(a, b)<<endl;

// }





// array


// int main(){
//     int a,i;
//     int arr[]={2,2,34,5};
//     for (i = 0; i < 3; i++)
//     {
//         cout<<"the array is"<<arr[i]<<endl;
//     }
    

// }



int main(){
    int i,j;
    int darry[2][4]={
        {1,2,3,4},
        {7,8,9,0}
    };
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            cout<<"the vatlue at "<<i<<"and "<<j << darry[i][j]<<endl;
        }
    }

    
}