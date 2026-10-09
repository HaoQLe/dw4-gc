#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igFile_fieldInit();
void *igFile_getMetaCall();
void igNamedObject_register();
extern char lbl_8055D494[7];
extern void *lbl_80561B3C;
}
extern "C" {
void igFile_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561B3C,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFile_getMetaCall,(int)lbl_8055D494,44,0,(int)igFile_fieldInit,0,0);
}
}
#pragma pop
