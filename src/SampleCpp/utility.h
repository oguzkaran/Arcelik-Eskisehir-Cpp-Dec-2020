#ifndef UTILITY_H_
#define UTILITY_H_

extern const double PI = 3.14159265359;

#define randomize() (srand((unsigned int)time(NULL)));

#ifdef __cplusplus
extern "C" {
#endif		
	int generateRandomInt(int min, int max);
#ifdef __cplusplus
}
#endif


#endif /* UTILITY_H_ */
