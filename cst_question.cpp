#include <iostream>
using namespace std;
#include <cstdint>

void set_bit (unsigned int num,int position){
unsigned int num1;
unsigned int mask=0X1;
num1=num | (mask<<(position-1));
cout<<"value after setting "<<position<<" position is "<<hex<<num1<<endl;

}

void unset_bit (unsigned int num,int position){
unsigned int num1;
unsigned int mask=0X1;
num1=num & (~(mask<<(position-1)));
cout<<"value after unsetting "<<position<<" position is "<<hex<<num1<<endl;

}

void rotate_num_func(uint32_t num){
    uint32_t num1=0;
    uint32_t mask=0x1;
    uint32_t tmp=0;

    for(int i=0;i<32;i++){
       tmp=num & mask;
       num1=num1<<1;
        num1=num1 | tmp;
       num=num>>1;
    }
    cout<<"value after cyclic reversal is "<<hex<<num1<<endl;
}
void even_odd_checker(int a){
    uint32_t num=0x1;
    if(a & num){
        cout<<"number is odd"<<endl;
    }
    else{
        cout<<"number is even"<<endl;
    }

}

void arr_duplicate(int arr[]){
    int tmp[100]={0};
    for(int i=0;i<10;i++){
        tmp[arr[i]]+=1;
    }
    for(int i=0;i<100;i++){
        if(tmp[i]>1){
            cout<<"the duplicate number is "<<i<<endl;
            break;
        }
        
        
    }
}



int main(){
    unsigned int num=0XAA54;
    int position=4;
    int position1=5;
    set_bit(num,position);
    unset_bit(num,position1);
    uint32_t rotate_num=0x00001111;
    rotate_num_func(rotate_num);
    even_odd_checker(11);
    int arr[10]={10,20,30,40,4,60,8,10,2,3};
    arr_duplicate(arr);


}