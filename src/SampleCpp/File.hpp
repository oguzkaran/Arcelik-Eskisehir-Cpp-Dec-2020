#ifndef FILE_HPP_
#define FILE_HPP_

#include <cstdio>

namespace csd::util::io { //Since C++ 17
	class File {
		std::FILE* m_f;
		char m_path[1024]{};
		char m_mode[4]{};
	public:
		File() = default;
		File(const char* path, const char* mode = "r+");
		File(const File&) = delete;
		File& operator=(const File&) = delete;
		File(File&& r);
		File& operator =(File&& r);
		~File();
		//...
		bool open();
		bool open(const char* path, const char* mode);
		void close();
		int seek(long offset, long whence);
		void type() const;
	};
	
}


#endif //FILE_HPP_
