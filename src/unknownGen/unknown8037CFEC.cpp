#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWLoadSlotPlayer_create(void *);
void *beNDMWDegiData_create(void *);
}
extern "C" {
void *fn_8037CFEC(int p0,int p1){
 void *value0=beNDMWDegiData_create(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
void *fn_8037D024(int p0,int p1){
 void *value0=beNDMWLoadSlotPlayer_create(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
}
#pragma pop
