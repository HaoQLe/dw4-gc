#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2WAITCHECK_getMeta();
void beAction2WAITCHECK_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2FADESET_arkRegister();
void igNamedObject_register();
extern char beAction2WAITCHECK_className[];
extern char beAction2WAITCHECK_fieldTypes[];
extern char beAction2WAITCHECK_fieldNames[];
extern char beAction2WAITCHECK_fieldStorage[];
extern char beAction2WAITCHECK_fieldOffsets[];
extern void *beAction2WAITCHECK_meta;
extern void *beAction2FADESET_meta;
void beAction2WAITCHECK_register();
void *beAction2WAITCHECK_getMetaCall();
void beAction2WAITCHECK_fieldInit();
}
extern "C" {
void beAction2WAITCHECK_arkRegister(){
 meta_registerNow((int)beAction2WAITCHECK_register);
}
void beAction2WAITCHECK_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beAction2WAITCHECK_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2WAITCHECK_getMetaCall,(int)beAction2WAITCHECK_className,16,(int)beAction2WAITCHECK_vtableRead,(int)beAction2WAITCHECK_fieldInit,0,0);
}
void *beAction2WAITCHECK_getMetaCall(){return beAction2WAITCHECK_getMeta();}
void beAction2WAITCHECK_fieldInit(){
 void *meta=beAction2WAITCHECK_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beAction2WAITCHECK_fieldTypes,0x1);
 meta_setupFields(meta,beAction2WAITCHECK_fieldNames,beAction2WAITCHECK_fieldStorage,beAction2WAITCHECK_fieldOffsets,field);
}
void *beAction2FADESET_getMeta(){
 if(!beAction2FADESET_meta || !(reinterpret_cast<unsigned int *>(beAction2FADESET_meta)[0x24/4]&4)) beAction2FADESET_arkRegister();
 return beAction2FADESET_meta;
}
}
#pragma pop
