#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2JOINTSET_getMeta();
void beAction2JOINTSET_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2MOTIONSET_registerNow();
void igNamedObject_register();
extern char beAction2JOINTSET_className[];
extern char lbl_804D3138[];
extern char lbl_804D3144[];
extern char lbl_804D3150[];
extern char lbl_804D315C[];
extern void *beAction2JOINTSET_meta;
extern void *beAction2MOTIONSET_meta;
void beAction2JOINTSET_register();
void *beAction2JOINTSET_getMetaCall();
void beAction2JOINTSET_fieldInit();
}
extern "C" {
void beAction2JOINTSET_registerNow(){
 meta_registerNow((int)beAction2JOINTSET_register);
}
void beAction2JOINTSET_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beAction2JOINTSET_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2JOINTSET_getMetaCall,(int)beAction2JOINTSET_className,24,(int)beAction2JOINTSET_vtableRead,(int)beAction2JOINTSET_fieldInit,0,0);
}
void *beAction2JOINTSET_getMetaCall(){return beAction2JOINTSET_getMeta();}
void beAction2JOINTSET_fieldInit(){
 void *meta=beAction2JOINTSET_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D3138,0x3);
 meta_setupFields(meta,lbl_804D3144,lbl_804D3150,lbl_804D315C,field);
}
void *beAction2MOTIONSET_getMeta(){
 if(!beAction2MOTIONSET_meta || !(reinterpret_cast<unsigned int *>(beAction2MOTIONSET_meta)[0x24/4]&4)) beAction2MOTIONSET_registerNow();
 return beAction2MOTIONSET_meta;
}
}
#pragma pop
