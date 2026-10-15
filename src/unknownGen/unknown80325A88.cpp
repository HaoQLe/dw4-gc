#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWWindowList_getMeta();
void beNDMWWindowList_vtableRead();
void *fn_800237D0();
void *fn_80024180();
void *fn_80024B94();
void *meta_newMetaObject(void *);
void *fn_800365B4();
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igInsightCore_metaObject();
void *bePadManager_metaObject();
void *beMessenger_metaObject();
void fn_803250AC();
void *beNDMWWindowList_metaObject();
void beNDMWTitle2Info_registerNow();
void igObjectList_register();
void igObject_register();
extern char beNDMWWindowList_className[];
extern char lbl_80453220[];
extern char beNDMWWindow_className[];
extern char lbl_804E16A8[];
extern char lbl_804E16B0[];
extern char lbl_804E16DC[];
extern char lbl_804E1708[];
extern char lbl_804E1724[];
extern char lbl_804E176C[];
extern char lbl_804E17B4[];
extern char lbl_804E17FC[];
extern char beNDMWWindowList_meta[];
extern void *lbl_80535C7C;
extern void *beNDMWWindow_meta;
extern void *beNDMWTitle2Info_meta;
extern void *lbl_805621F4;
void beNDMWWindowList_register();
void *beNDMWWindowList_getMetaCall();
void *beNDMWWindow_metaObject();
void *beNDMWWindow_getMeta();
void beNDMWWindow_registerNow();
void beNDMWWindow_register();
void *beNDMWWindow_getMetaCall();
void beNDMWWindow_fieldInit();
}
extern "C" {
void beNDMWWindowList_registerNow(){
 meta_registerNow((int)beNDMWWindowList_register);
}
void beNDMWWindowList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWWindowList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWWindowList_getMetaCall,(int)beNDMWWindowList_className,20,(int)beNDMWWindowList_vtableRead,0,0,(int)lbl_804E16A8);
}
void *beNDMWWindowList_getMetaCall(){return beNDMWWindowList_getMeta();}
void *fn_80325B44(){
 if(!lbl_80535C7C) lbl_80535C7C=fn_800635C8(lbl_80453220,lbl_804E16B0,lbl_804E16DC,0xB);
 return lbl_80535C7C;
}
void *beNDMWWindow_metaObject(){
 if(!beNDMWWindow_meta) beNDMWWindow_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWWindow_meta;
}
void *beNDMWWindow_getMeta(){
 if(!beNDMWWindow_meta || !(reinterpret_cast<unsigned int *>(beNDMWWindow_meta)[0x24/4]&4)) beNDMWWindow_registerNow();
 return beNDMWWindow_meta;
}
void beNDMWWindow_registerNow(){
 meta_registerNow((int)beNDMWWindow_register);
}
void beNDMWWindow_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWWindow_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWWindow_getMetaCall,(int)beNDMWWindow_className,80,0,(int)beNDMWWindow_fieldInit,0,(int)lbl_804E1708);
}
void *beNDMWWindow_getMetaCall(){return beNDMWWindow_getMeta();}
void beNDMWWindow_fieldInit(){
 void *value0=beNDMWWindow_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1724,18);
 void *value2=fn_800658E4(value0,value1);
 void *value3=igInsightCore_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8003EC68(value8,1);
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 void *value10=beNDMWWindowList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value12=beNDMWWindow_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 void *value13=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+13));
 void *value14=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value13)+52)=1;
 void *value15=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+14));
 void *value16=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value15)+52)=1;
 void *value17=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+15));
 void *value18=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value17)+56)=value18;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value17)+52)=1;
 void *value19=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+16));
 void *value20=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value19)+56)=value20;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value19)+52)=1;
 void *value21=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+17));
 void *value22=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value21)+56)=value22;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value21)+52)=1;
 fn_800659C0(value0,lbl_804E176C,lbl_804E17B4,lbl_804E17FC,value1);
}
void *beNDMWTitle2Info_getMeta(){
 if(!beNDMWTitle2Info_meta || !(reinterpret_cast<unsigned int *>(beNDMWTitle2Info_meta)[0x24/4]&4)) beNDMWTitle2Info_registerNow();
 return beNDMWTitle2Info_meta;
}
}
#pragma pop
