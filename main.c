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

int sc_memorySet(int &adress, int value){
  // if(<0 || value>99){
  //  cout<<"выход за границы"<<endl;
  //  return 0;
  //}
 adress=value;
}

int sc_memoryGet(int &adress, int * value){
  //if
  //
  //return0
  //
  //value=adress;
  //return value;
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
  sc_memoryInit(ram);
  sc_memorySet(ram[25], 10);
  cout<<ram[25]<<endl;
  return 1;
}
