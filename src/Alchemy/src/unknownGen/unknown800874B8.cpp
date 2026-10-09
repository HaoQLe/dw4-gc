#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068390(void *,void *);
void igProgramFile_virtual64(void *,void *);
}
extern "C" {
void igElfFile_virtual64(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+80)){
  fn_80068390((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+80));
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+72)){
  fn_80068390((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+72));
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+88)){
  fn_80068390((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+88));
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+96)){
  fn_80068390((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+96));
 }
 igProgramFile_virtual64((void *)p0,(void *)p1);
}
void *fn_80087548(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80)){
  if((int)p1>=0){
   if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76)){
    return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80)+(p1**reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+62)));
   }
  }
 }
 return (void *)0;
}
}
#pragma pop
