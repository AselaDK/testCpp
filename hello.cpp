 #include <iostream>
 #include <stdio.h>
  #include <unistd.h>
 #include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

using namespace std;
int main()
{
  int fd;
  char buffer[10001];
  char msg[15] = " Hello World \n";
  fd = open("hello.txt", O_RDWR);
  int count = 0;
  while ( 1 ) {
    if (fd != -1)
    {
        write(fd, &msg, sizeof(msg));
        count++;
        std::system("clear");
        int size = lseek(fd, 0, SEEK_END);
        cout << "file length: " << size;
        cout.flush();
        sleep(1);
    }
    else {
        cout << "Unable to open file";
    }
  }
  close(fd);
  return 0;
}