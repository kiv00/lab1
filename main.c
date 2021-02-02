#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;


int sc_memoryInit(int * ram){
  ram = new int[100];
  for(int i=0; i<100; i++) ram[i]=0;
  return 0;
}

int sc_memorySet(int &address, int value){
  if(address==0){//////////////////////////////////////////////////
     address = value;
     return 0;
   }
   cout<<"выход за границы"<<endl;
   return 0;
}

int sc_memoryGet(int address, int  &value){
  if(address==0){//////////////////////////////////////////////////
     value = address;
     return 0;
   }
   cout<<"выход за границы"<<endl;
   return 0;
}

int sc_memorySave(char * filename){

}

int sc_memoryLoad(char * filename){

}

int sc_regInit(void){

}

int sc_regSet(int register, int value){

}

int sc_regGet(int register, int value){

}

int sc_commandEncode(int command, int operand, int * value){

}

int sc_commandDecode(int value, int * command, int * operand){

}

int main(){
  int* ram = new int[100];
  FILE *b2f;
  int value=0;
  b2f=fopen(b2f,"ab");
  sc_memoryInit(ram);
  sc_memorySet(ram[25], 10);
  sc_memoryGet(ram[25],value);
  cout<<value<<endl;
  return 1;
}
