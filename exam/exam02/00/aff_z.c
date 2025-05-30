#include <unistd.h>

int only_z(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
}

int main(void)
{
	only_z();
	return 0;
}
