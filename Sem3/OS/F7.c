#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argc[]){
	int src, dst;
	char buf[1024];
	ssize_t n;

	if (argc != 3) return 1;

	src = open(argv[1], O_RDONLY);
	if (src<0) return 1;

	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dst<0) return 1;

	while ((n = read(src, buf , sizeof(buf))) > 0)
		write(dst,buf,n);

	close(src);
	close(dst);
	return 0;
}
