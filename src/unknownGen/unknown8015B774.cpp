#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801884A0(void *,void *,void *,void *);
void fn_801887D4(void *,void *,void *,void *);
extern void *lbl_805644E8;
extern void *lbl_805644EC;
extern void *lbl_80564BC0;
}
extern "C" {
void fn_8015B774(int p0,int p1){
 void *local1;
 void *local0;
 fn_801887D4(&local1,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805644E8)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 fn_801884A0(&local0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805644EC)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40));
}
void fn_8015B7D4(){}
void *fn_8015B7D8(){return lbl_80564BC0;}
}
#pragma pop
