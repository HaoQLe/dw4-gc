#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void GXSetAlphaCompare(void *,void *,int,int,int);
void GXSetZCompLoc(void *);
extern char lbl_80490530[];
extern char lbl_80566940[4];
}
extern "C" {
void fn_800F8FB0(int p0){
 void *value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0xFFFFFFFB);
 GXSetZCompLoc((void *)(int)((unsigned int)__cntlzw(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1148))>>5));
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1148)){
  value0=(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80490530)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1152)<<2));
 } else {
  value0=(void *)7;
 }
 GXSetAlphaCompare(value0,(void *)(int)(*reinterpret_cast<float *>((lbl_80566940+0))**reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+1156)),0,7,0);
}
}
#pragma pop
