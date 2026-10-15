#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlLUACALL_getMeta();
void beModelCtrlLUACALL_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlDataList_registerNow();
void igNamedObject_register();
extern char beModelCtrlLUACALL_className[];
extern char lbl_804D1054[];
extern char lbl_804D1058[];
extern char lbl_804D105C[];
extern char lbl_804D1060[];
extern void *beModelCtrlLUACALL_meta;
extern void *beModelCtrlDataList_meta;
void beModelCtrlLUACALL_register();
void *beModelCtrlLUACALL_getMetaCall();
void beModelCtrlLUACALL_fieldInit();
}
extern "C" {
void beModelCtrlLUACALL_registerNow(){
 meta_registerNow((int)beModelCtrlLUACALL_register);
}
void beModelCtrlLUACALL_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlLUACALL_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlLUACALL_getMetaCall,(int)beModelCtrlLUACALL_className,16,(int)beModelCtrlLUACALL_vtableRead,(int)beModelCtrlLUACALL_fieldInit,0,0);
}
void *beModelCtrlLUACALL_getMetaCall(){return beModelCtrlLUACALL_getMeta();}
void beModelCtrlLUACALL_fieldInit(){
 void *meta=beModelCtrlLUACALL_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1054,0x1);
 fn_800659C0(meta,lbl_804D1058,lbl_804D105C,lbl_804D1060,field);
}
void *beModelCtrlDataList_getMeta(){
 if(!beModelCtrlDataList_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlDataList_meta)[0x24/4]&4)) beModelCtrlDataList_registerNow();
 return beModelCtrlDataList_meta;
}
}
#pragma pop
