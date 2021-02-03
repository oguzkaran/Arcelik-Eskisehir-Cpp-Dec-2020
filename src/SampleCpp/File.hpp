#ifndef FILE_HPP_
#define FILE_HPP_

#include <string>
#include <cstdio>

namespace csd::util::io { //Since C++ 17
	class File {
		std::FILE* m_f;
		std::string m_path;
		std::string m_mode;		
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
		int getc();
	};	
}


#endif //FILE_HPP_
