#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029D710();
void fn_803E4FBC(void *);
void fn_803E5038(void *,void *);
void fn_803E50B8(void *);
void fn_803E5144(void *);
}
extern "C" {
void fn_803F9D00(int p0){
 fn_803E50B8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
}
void fn_803F9D24(int p0){
 fn_803E5144(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
}
void fn_803F9D48(int p0){
 fn_803E4FBC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
}
void fn_803F9D6C(int p0,int p1){
 fn_803E5038(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64),(void *)p1);
}
void fn_803F9D90(){}
void fn_803F9D94(){}
void *fn_803F9D98(){return fn_8029D710();}
}
#pragma pop
