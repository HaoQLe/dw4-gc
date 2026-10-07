#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566810[4];
}
extern "C" {
void fn_800C0E68(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800C0E70(){}
void *fn_800C0E74(int p0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12)=*reinterpret_cast<float *>((lbl_80566810+0));
 return (void *)p0;
}
void fn_800C0E80(){}
void fn_800C0E84(){}
}
#pragma pop
