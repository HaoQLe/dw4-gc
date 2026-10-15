#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igFile_fieldInit();
void *igFile_getMetaCall();
void igNamedObject_register();
extern char lbl_8055D494[7];
extern void *igFile_meta;
}
extern "C" {
void igFile_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igFile_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igFile_getMetaCall,(int)lbl_8055D494,44,0,(int)igFile_fieldInit,0,0);
}
}
#pragma pop
