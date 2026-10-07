#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80563510[1];
}
extern "C" {
int fn_800F9440(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1204);}
void fn_800F9448(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80563510+0))){
  value0=(void *)0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1209)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x1);
}
unsigned char fn_800F946C(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1209);}
void *fn_800F9474(void *p0,void *p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1212)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x1);
 return p0;
}
int fn_800F9488(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1212);}
void *fn_800F9490(void *p0,void *p1){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1208)=(unsigned char)(int)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x1);
 return p0;
}
unsigned char fn_800F94A4(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1208);}
}
#pragma pop
