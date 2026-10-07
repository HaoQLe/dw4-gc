#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8015DF74(void *,void *,void *);
void *fn_80188BA4(void *);
void *fn_80188C0C(void *,int);
void *fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
extern void *lbl_80562548;
}
extern "C" {
void fn_8015DFFC(int p0,int p1){
 void *local0;
 fn_80188BA4(&local0);
 void *value0=fn_8015DF74((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+36));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+40)=(unsigned char)(int)value0;
 fn_80188CD0(&local0);
 fn_80188CAC((void *)p0,&local0);
 fn_80188C0C(&local0,-1);
}
void *fn_8015E06C(){return lbl_80562548;}
}
#pragma pop
