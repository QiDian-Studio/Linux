#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd = open("test.txt", O_CREAT | O_RDWR | O_TRUNC);
  dup2(fd, 1);
  //close(1);
  //dup(fd);
  printf("QiDian\n");
}
