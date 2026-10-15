#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2WAITCHECK_getMeta();
void beAction2WAITCHECK_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2FADESET_registerNow();
void igNamedObject_register();
extern char beAction2WAITCHECK_className[];
extern char lbl_804D3108[];
extern char lbl_804D310C[];
extern char lbl_804D3110[];
extern char lbl_804D3114[];
extern void *beAction2WAITCHECK_meta;
extern void *beAction2FADESET_meta;
void beAction2WAITCHECK_register();
void *beAction2WAITCHECK_getMetaCall();
void beAction2WAITCHECK_fieldInit();
}
extern "C" {
void beAction2WAITCHECK_registerNow(){
 meta_registerNow((int)beAction2WAITCHECK_register);
}
void beAction2WAITCHECK_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beAction2WAITCHECK_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2WAITCHECK_getMetaCall,(int)beAction2WAITCHECK_className,16,(int)beAction2WAITCHECK_vtableRead,(int)beAction2WAITCHECK_fieldInit,0,0);
}
void *beAction2WAITCHECK_getMetaCall(){return beAction2WAITCHECK_getMeta();}
void beAction2WAITCHECK_fieldInit(){
 void *meta=beAction2WAITCHECK_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3108,0x1);
 fn_800659C0(meta,lbl_804D310C,lbl_804D3110,lbl_804D3114,field);
}
void *beAction2FADESET_getMeta(){
 if(!beAction2FADESET_meta || !(reinterpret_cast<unsigned int *>(beAction2FADESET_meta)[0x24/4]&4)) beAction2FADESET_registerNow();
 return beAction2FADESET_meta;
}
}
#pragma pop
