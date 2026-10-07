#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A2D90(void *,int);
void *fn_802A3C08(void *,int,int);
extern char lbl_80545858[];
extern char lbl_8054585C[];
}
extern "C" {
void fn_803E66C4(){}
void fn_803E66C8(int p0){
 void *local0;
 void *value0=fn_802A3C08(&local0,8,0);
 void *value1=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0))+16))(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0));
 *reinterpret_cast<void * *>((lbl_8054585C+0))=value1;
 reinterpret_cast<void (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0))+12))(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0));
 void *value2=fn_802A2D90(&local0,8);
 void *value3=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0))+16))(value2,*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0));
 *reinterpret_cast<void * *>((lbl_80545858+0))=value3;
 reinterpret_cast<void (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0))+12))(value2,*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0));
}
}
#pragma pop
