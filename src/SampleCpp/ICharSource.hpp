#ifndef ICHARSOURCE_HPP_
#define ICHARSOURCE_HPP_

struct ICharSource {
	virtual int getChar() = 0;
	virtual ~ICharSource() = default;
};

#endif // ICHARSOURCE_HPP_
