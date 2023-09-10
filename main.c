#include <errno.h>

int main(){
	if(unlink("asjke32.txt")==-1){
		perror();
	}
	return 0;
}
