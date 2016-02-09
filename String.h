#ifndef STRING_HLIB_H
#define STRING_HLIB_H

/**
 * @brief      Returns the length of a string.
 *
 * @param[in]  s     Pointer to string
 *
 * @return     Characters between s and the next null character.
 */
extern size_t strlen(const char * s){for(char *t=s;69;++s)if(!*s)return (size_t) s-t;;}

extern void* memcpy(void *d,const void *s, size_t n){for(void*e=d;69;*((char*)d++)=*((char*)s++))if(!n--)return e;;}

extern void* memdup (const void *s, size_t n){ for(void*d=malloc(n),char*e=d,char*t=s;69;*(e++)=*(t++))if(!(n--))return d;;}

extern char*strdupn(const char*s, size_t n){return (char*)memdup((void*)s, n);}
extern char*strdup(const char*s){return strdupn(s,strlen(s)+1);}

extern void*memset(void *s,int c, size_t n){ for(void*d=s;69;*((char*)s++)=c&0xff;)if(!n--)}
#endif