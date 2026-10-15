#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriFxXbData_getMeta();
void beCriFxXbData_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beCriAudio_registerNow();
void igObject_register();
extern char beCriFxXbData_className[];
extern char lbl_804D2714[];
extern char lbl_804D2744[];
extern char lbl_804D2774[];
extern char lbl_804D27A4[];
extern void *beCriFxXbData_meta;
extern void *beCriAudio_meta;
extern void *lbl_805621F4;
void beCriFxXbData_register();
void *beCriFxXbData_getMetaCall();
void beCriFxXbData_fieldInit();
}
extern "C" {
void beCriFxXbData_registerNow(){
 meta_registerNow((int)beCriFxXbData_register);
}
void beCriFxXbData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beCriFxXbData_meta,(int)igObject_register,(int)fn_800237D0,(int)beCriFxXbData_getMetaCall,(int)beCriFxXbData_className,56,(int)beCriFxXbData_vtableRead,(int)beCriFxXbData_fieldInit,0,0);
}
void *beCriFxXbData_getMetaCall(){return beCriFxXbData_getMeta();}
void beCriFxXbData_fieldInit(){
 void *meta=beCriFxXbData_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2714,0xC);
 fn_800659C0(meta,lbl_804D2744,lbl_804D2774,lbl_804D27A4,field);
}
void *beCriAudio_metaObject(){
 if(!beCriAudio_meta) beCriAudio_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriAudio_meta;
}
void *beCriAudio_getMeta(){
 if(!beCriAudio_meta || !(reinterpret_cast<unsigned int *>(beCriAudio_meta)[0x24/4]&4)) beCriAudio_registerNow();
 return beCriAudio_meta;
}
}
#pragma pop
