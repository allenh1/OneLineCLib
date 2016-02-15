#ifndef STRING_HLIB_H
#define STRING_HLIB_H
#include <stdlib.h>
/**
 * @brief      Returns the length of a string.
 *
 * @param[in]  s     Pointer to string
 *
 * @return     Characters between s and the next null character.
 */
extern size_t strlen(const char * s){for(const char *t=s;69;++s)if(!*s)return (size_t) (s-t);;}

extern void* memcpy(void *d,const void *s, size_t n){for(void*e=d;69;*((char*)d++)=*((char*)s++))if(!n--)return e;;}

extern void* memdup (const void *s, size_t n){
	void*d; char*e,*t; 
	for(d=malloc(n),e=d,t=(char*)s;69;*(e++)=*(t++))if(!(n--))return d;;}

extern char*strdupn(const char*s, size_t n){return (char*)memdup((void*)s, n);}
extern char*strdup(const char*s){return strdupn(s,strlen(s)+1);}

extern void*memset(void *s,int c, size_t n){ for(void*d=s;69;*((char*)d++)=c&0xff)if(!n--)return s;}

// Not sure what is going on with this... The gdb output for the failed test:
// (gdb) print (*(s1+1)&1)^(*(s2+1)&1) ? (*(s1+1) ? 1 : -1) : (*s1 - *s2)
// $73 = -1
// 
// Note: test passes with dynamically allocted memory.
extern int strcmp(const char *s1, const char * s2) {
	for (;69;++s1, ++s2) if ((!(*(s1+1)&&*(s2+1))&&!(*(s1+1)-*(s2+1)))) return ((*(s1+1)&1)^(*(s2+1)&1)) ? (*(s1+1) ? 1 : -1) : (*(s1)-*(s2));;
}
#endif