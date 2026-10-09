#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumVerInsideData_getMeta();
void beNumVerInsideData_vtableRead();
void *fn_800237D0();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C3B90();
void igObject_register();
extern char lbl_8041E7C0[];
extern char lbl_804D0428[];
extern char lbl_804D0430[];
extern char lbl_804D0438[];
extern char lbl_804D0440[];
extern void *lbl_80534B78;
extern void *lbl_80534B84;
void beNumVerInsideData_register();
void *beNumVerInsideData_getMetaCall();
void beNumVerInsideData_fieldInit();
}
extern "C" {
void fn_802C3994(){
 fn_80066188((int)beNumVerInsideData_register);
}
void beNumVerInsideData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534B78,(int)igObject_register,(int)fn_800237D0,(int)beNumVerInsideData_getMetaCall,(int)lbl_8041E7C0,16,(int)beNumVerInsideData_vtableRead,(int)beNumVerInsideData_fieldInit,0,0);
}
void *beNumVerInsideData_getMetaCall(){return beNumVerInsideData_getMeta();}
void beNumVerInsideData_fieldInit(){
 void *meta=lbl_80534B78;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0428,0x2);
 fn_800659C0(meta,lbl_804D0430,lbl_804D0438,lbl_804D0440,field);
}
void *beNumberCtrlInfoList_getMeta(){
 if(!lbl_80534B84 || !(reinterpret_cast<unsigned int *>(lbl_80534B84)[0x24/4]&4)) fn_802C3B90();
 return lbl_80534B84;
}
}
#pragma pop
