#include "LPC11xx.h"                    // Device header
 int main(void){
 LPC_GPIO2->DIR=0xFF;//��GPIO2�ĵ�8λ����Ϊ���
 LPC_GPIO2->DATA=0x55;
 }