#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLoadIntf2ComMdlData_getMeta();
void beLoadIntf2ComMdlData_vtableRead();
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80341AD4();
void igObject_register();
extern char lbl_80455070[];
extern char lbl_804E3BFC[];
extern char lbl_804E3C08[];
extern char lbl_804E3C14[];
extern char lbl_804E3C20[];
extern void *lbl_805366D8;
extern void *lbl_805366E8;
extern void *lbl_805621F4;
void beLoadIntf2ComMdlData_register();
void *beLoadIntf2ComMdlData_getMetaCall();
void beLoadIntf2ComMdlData_fieldInit();
}
extern "C" {
void fn_80341808(){
 fn_80066188((int)beLoadIntf2ComMdlData_register);
}
void beLoadIntf2ComMdlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_805366D8,(int)igObject_register,(int)fn_800237D0,(int)beLoadIntf2ComMdlData_getMetaCall,(int)lbl_80455070,20,(int)beLoadIntf2ComMdlData_vtableRead,(int)beLoadIntf2ComMdlData_fieldInit,0,0);
}
void *beLoadIntf2ComMdlData_getMetaCall(){return beLoadIntf2ComMdlData_getMeta();}
void beLoadIntf2ComMdlData_fieldInit(){
 void *meta=lbl_805366D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3BFC,0x3);
 fn_800659C0(meta,lbl_804E3C08,lbl_804E3C14,lbl_804E3C20,field);
}
void *fn_80341944(void *object){
 fn_80341AD4();
 return fn_8006546C(lbl_805366E8,object);
}
void *fn_80341984(){
 if(!lbl_805366E8) lbl_805366E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805366E8;
}
void *beNDMWLoadIntf2TextOrder_getMeta(){
 if(!lbl_805366E8 || !(reinterpret_cast<unsigned int *>(lbl_805366E8)[0x24/4]&4)) fn_80341AD4();
 return lbl_805366E8;
}
}
#pragma pop
