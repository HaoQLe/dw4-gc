#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C012C();
void igObject_register();
extern char lbl_8041E278[];
extern char lbl_804CFE14[];
extern char lbl_804CFE28[];
extern char lbl_804CFE3C[];
extern char lbl_804CFE50[];
extern void *lbl_805349D8;
extern void *lbl_805349F0;
extern void *lbl_805621F4;
void *beSvSlotData_getMeta();
void fn_802BFECC();
void beSvSlotData_register();
void *beSvSlotData_getMetaCall();
void beSvSlotData_fieldInit();
}
extern "C" {
void *beSvSlotData_getMeta(){
 if(!lbl_805349D8 || !(reinterpret_cast<unsigned int *>(lbl_805349D8)[0x24/4]&4)) fn_802BFECC();
 return lbl_805349D8;
}
void fn_802BFECC(){
 fn_80066188((int)beSvSlotData_register);
}
void beSvSlotData_register(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_805349D8,(int)igObject_register,(int)fn_800237D0,(int)beSvSlotData_getMetaCall,(int)lbl_8041E278,24,0,(int)beSvSlotData_fieldInit,0,0);
}
void *beSvSlotData_getMetaCall(){return beSvSlotData_getMeta();}
void beSvSlotData_fieldInit(){
 void *meta=lbl_805349D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFE14,0x5);
 fn_800659C0(meta,lbl_804CFE28,lbl_804CFE3C,lbl_804CFE50,field);
}
void *fn_802C0004(void *object){
 fn_802C012C();
 return fn_8006546C(lbl_805349F0,object);
}
void *fn_802C0044(){
 if(!lbl_805349F0) lbl_805349F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805349F0;
}
void *beSaveMemoryObj_getMeta(){
 if(!lbl_805349F0 || !(reinterpret_cast<unsigned int *>(lbl_805349F0)[0x24/4]&4)) fn_802C012C();
 return lbl_805349F0;
}
}
#pragma pop
