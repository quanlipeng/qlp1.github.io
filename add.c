#include "LPC11xx.h"                    // Device header
 int main(void){
 LPC_GPIO2->DIR=0xFF;//将GPIO2的低8位设置为输出
 LPC_GPIO2->DATA=0x55;
 }