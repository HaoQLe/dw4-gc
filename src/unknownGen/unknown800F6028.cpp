#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F933C(void *,void *,void *,void *,void *);
}
extern "C" {
unsigned char fn_800F6028(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+24);}
void fn_800F6030(int p0,int p1,int p2,int p3,int p4){
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p1;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p2;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)=(void *)p3;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40)=(void *)p4;
 fn_800F933C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,(void *)p2,(void *)p3,(void *)p4);
}
}
#pragma pop
