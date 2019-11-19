#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
  close(1);//标准输出关闭了
  int fd = open("stdout.txt", O_CREAT | O_RDWR | O_TRUNC);
  printf("QiDian\n");
}
