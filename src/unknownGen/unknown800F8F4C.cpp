#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8056350D[1];
}
extern "C" {
void fn_800F8F4C(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_8056350D+0))){
  value0=(void *)0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1148)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x4);
}
unsigned char fn_800F8F70(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1148);}
void *fn_800F8F78(void *p0,void *p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1152)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x4);
 return p0;
}
int fn_800F8F8C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1152);}
void *fn_800F8F94(void *p0,float f0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>(p0)+1156)=f0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x4);
 return p0;
}
}
#pragma pop
