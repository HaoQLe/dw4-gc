#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2Data_fieldInit();
void *beAction2Data_getMeta();
void beAction2Data_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beAction2Data_className[];
extern char beAction2Data_dependencies[];
extern char beAction2Data_meta[];
void beAction2Data_register();
void *beAction2Data_getMetaCall();
}
extern "C" {
void beAction2Data_arkRegister(){
 meta_registerNow((int)beAction2Data_register);
}
void beAction2Data_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2Data_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2Data_getMetaCall,(int)beAction2Data_className,16,(int)beAction2Data_vtableRead,(int)beAction2Data_fieldInit,0,(int)beAction2Data_dependencies);
}
void *beAction2Data_getMetaCall(){return beAction2Data_getMeta();}
}
#pragma pop
