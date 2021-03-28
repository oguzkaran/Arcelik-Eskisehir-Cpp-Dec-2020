#ifndef FILE_HPP_
#define FILE_HPP_

#include <string>
#include <memory>
#include <cstdio>

namespace csd::util::io { //Since C++ 17	
	class File final {
		std::unique_ptr<FILE, void (*)(FILE*)> m_uptr {nullptr, nullptr};
		std::string m_path;
		std::string m_mode;		
	public:
		File() = default;
		explicit File(const char* path, const char* mode = "r+");		
		bool open();
		bool open(const char* path, const char* mode);
		void close();
		int seek(long offset, long whence);
		void putc(int ch);
		void type() const;
		int getc();
	};	
}


#endif //FILE_HPP_
