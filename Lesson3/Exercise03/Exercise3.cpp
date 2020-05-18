#include <iostream>
#include "monitor.h"
#include <cstdio>

class File {
public:
	File(const char* name, const char* access) {
		m_file = fopen(name, access);
		if (m_file == nullptr) {
			throw std::ios_base::failure("Failed to open file");
		}
	}

	~File() {
		fclose(m_file);
	}

	operator FILE*() {
		return m_file;
	}
private:
	FILE* m_file{};
};

void LeakPointers()
{
    char* memory[5] {};
    for (auto i{0} ; i<5 ; i++)
    {
        memory[i] = new char[20];
        std::cout << "allocated 20 bytes @ " << (void *)memory[i] << "\n";
    }
}

void LeakFiles()
{
    File fh1{"HelloB1.txt", "w"};
    fprintf(fh1, "Hello B2\n");

    File fh2{"HelloB2.txt", "w"};
    fprintf(fh2, "Hello B1\n");
}

int main()
{
    std::cout << "\n\n------ Exercise 3 ------\n";
    Monitor monitor;
    LeakPointers();
    LeakFiles();
    std::cout << "------ Complete. -------\n";
    return 0;
}
