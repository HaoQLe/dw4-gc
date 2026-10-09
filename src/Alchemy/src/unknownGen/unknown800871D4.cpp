#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igProgramFile_virtual5C(void *);
void memset(void *,int,int);
}
extern "C" {
void igElfFile_virtual5C(int p0){
 igProgramFile_virtual5C((void *)p0);
 memset((reinterpret_cast<char *>((void *)p0)+16),0,52);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+68)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+72)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+76)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+80)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+92)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)0;
}
}
#pragma pop
