#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A4E98();
void *fn_802A4F28();
void *fn_803F8B10();
void fn_803F8B40(int,int);
extern char lbl_80546900[];
}
extern "C" {
void *fn_803E80A0(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+144)=(void *)0;
 return (void *)p0;
}
void *fn_803E80B4(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+144)=(void *)0;
 return (void *)p0;
}
void *fn_803E80D0(){return fn_803F8B10();}
void fn_803E80F0(){
 fn_803F8B40(32,(int)lbl_80546900);
}
void *fn_803E811C(){return fn_802A4E98();}
void *fn_803E813C(){return fn_802A4F28();}
}
#pragma pop
