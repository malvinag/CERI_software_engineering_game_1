#include "../headers/io.h"

namespace io {
	char de()
	{
		char a;
		__asm__ __volatile__(
			"INT 0x21;"
			"MOVQ %%rcx, %1;"
			: "=r" (a)
			: "" ()
		);
		char c[1];
		std::fgets(c, 2, stdin);
		return c[0];
	}
	void Bienvenue()
	{
        std::puts("\n");
        std::puts(  "                                       Welcome to");
        std::puts(" __________   ___    ___   __________     __________   __________   __________   __________");
        std::puts("/___   ___/  /  /   /  /  /  _______/    /  _______/  /  ____   /  /   __    /  /  _______/");
        std::puts("   /  /     /  /__ /  /  /  /__         /  /  __     /  /___/  /  /  /   /  /  /  /__");
        std::puts("  /  /     /   __    /  /   __/        /  /  /  \\   /  ____   /  /  /   /  /  /   __/");
        std::puts(" /  /     /  /   /  /  /  /______     /  /___/  /  /  /   /  /  /  /   /  /  /  /______");
        std::puts("/_ /     /_ /   /_ /  /_________/    /_________/  /_ /   /_ /  /_ /   /_ /  /_________/");
        std::puts("\n");
	}
}
