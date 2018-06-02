#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{
  //int i;

  if(argc < 2){
    printf(1, "Enter at pathname\n");
    exit();
  }
	int fd;
	fd = open(argv[1], 0);
	struct stat st;
 	fstat(fd, &st);
	printf(1, "type: %d\n", st.type);
	printf(1, "dev: %d\n", st.dev);
	printf(1, "ino: %d\n", st.ino);
	printf(1, "nlink: %d\n", st.nlink);
	printf(1, "size: %d\n", st.size);
	printf(1, "checksum: %x\n", st.checksum);
     
  	exit();
}
