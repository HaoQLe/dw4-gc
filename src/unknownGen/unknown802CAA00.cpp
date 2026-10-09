#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIData_getMeta();
void beModelCtrlAIData_vtableRead();
void *fn_80023CF4();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CAC64();
void igNamedObject_register();
extern char lbl_8041F1D8[];
extern char lbl_804D0EF4[];
extern char lbl_804D0F00[];
extern char lbl_804D0F0C[];
extern char lbl_804D0F18[];
extern void *lbl_80534EA0;
extern void *lbl_80534EB0;
void beModelCtrlAIData_register();
void *beModelCtrlAIData_getMetaCall();
void beModelCtrlAIData_fieldInit();
}
extern "C" {
void fn_802CAA00(){
 fn_80066188((int)beModelCtrlAIData_register);
}
void beModelCtrlAIData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EA0,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlAIData_getMetaCall,(int)lbl_8041F1D8,24,(int)beModelCtrlAIData_vtableRead,(int)beModelCtrlAIData_fieldInit,0,0);
}
void *beModelCtrlAIData_getMetaCall(){return beModelCtrlAIData_getMeta();}
void beModelCtrlAIData_fieldInit(){
 void *meta=lbl_80534EA0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0EF4,0x3);
 fn_800659C0(meta,lbl_804D0F00,lbl_804D0F0C,lbl_804D0F18,field);
}
void *fn_802CAB3C(void *object){
 fn_802CAC64();
 return fn_8006546C(lbl_80534EB0,object);
}
void *beModelCtrlHITBOX_getMeta(){
 if(!lbl_80534EB0 || !(reinterpret_cast<unsigned int *>(lbl_80534EB0)[0x24/4]&4)) fn_802CAC64();
 return lbl_80534EB0;
}
}
#pragma pop
