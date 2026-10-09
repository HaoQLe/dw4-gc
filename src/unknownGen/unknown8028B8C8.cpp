#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041E40(void *,void *,int);
void fn_800424B4(void *,void *,void *);
}
extern "C" {
void igSerialScheduler_virtual60(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80041E40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,1);
}
void igSerialScheduler_virtual64(int p0,int p1){
 void *local0;
 fn_800424B4(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1);
}
}
#pragma pop
