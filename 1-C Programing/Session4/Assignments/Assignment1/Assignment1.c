#include <stdio.h>
char str[] = "Hello World";
void Encrypt(char * msg);
void Decrypt(char * msg);


int main()
{
printf("Message: %s\n", str);
Encrypt(str);
printf("Encrypted Message: %s\n", str);
Decrypt(str);
printf("Decrypted Message: %s\n", str);


}
void Encrypt(char * msg)
{
  msg[0] += 90;
  msg[1] -= 70;
  msg[2] += 55;
  msg[3] -= 34;
  msg[4] += 30;
  msg[5] -= 50;
  msg[6] += 30;
  msg[7] -= 50; 
  msg[8] -= 80;
  msg[9] += 60;
  msg[10] -=40;  
 
}
void Decrypt(char * msg)
{
  msg[0] -= 90;
  msg[1] += 70;
  msg[2] -= 55;
  msg[3] += 34;
  msg[4] -= 30;
  msg[5] += 50;
  msg[6] -= 30;
  msg[7] += 50;
  msg[8] += 80;
  msg[9] -= 60;
  msg[10] +=40;
 

 
}