#include <errno.h>
#include <sys/stat.h>
#include <sys/file.h>

/*
Write a function foo(int fd, char* buf, int b_size, int n, int skip)
that reads to buf from file with file descriptor fd,
n blocks of size b_size each. The last argument specifies
how many bytes to skip after reading each block.
Return -1 if the operation is unsuccessful.
Else return total number of bytes read.
*/
foo(int fd, char* buf, int b_size, int n, int skip){
	//
}


void makeFile(){
	creat("asjke32.txt", S_IRWXU|S_IRGRP|S_IROTH);//7-usr:4-grp:4-oth
	int close(fd);
}

void checkFile(){
	if(unlink("asjke32.txt")==-1){
		perror();
	}
}

int main(){
	checkFile();
	makeFile();
	checkFile();
	return 0;
}
