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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E66D4();
void igNamedObject_register();
extern char lbl_80421034[];
extern char lbl_804D3108[];
extern char lbl_804D310C[];
extern char lbl_804D3110[];
extern char lbl_804D3114[];
extern void *lbl_805357E8;
extern void *lbl_805357F0;
void beAction2WAITCHECK_register();
void *beAction2WAITCHECK_getMetaCall();
void beAction2WAITCHECK_fieldInit();
}
extern "C" {
void fn_802E64B0(){
 fn_80066188((int)beAction2WAITCHECK_register);
}
void beAction2WAITCHECK_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805357E8,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2WAITCHECK_getMetaCall,(int)lbl_80421034,16,(int)beAction2WAITCHECK_vtableRead,(int)beAction2WAITCHECK_fieldInit,0,0);
}
void *beAction2WAITCHECK_getMetaCall(){return beAction2WAITCHECK_getMeta();}
void beAction2WAITCHECK_fieldInit(){
 void *meta=lbl_805357E8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3108,0x1);
 fn_800659C0(meta,lbl_804D310C,lbl_804D3110,lbl_804D3114,field);
}
void *beAction2FADESET_getMeta(){
 if(!lbl_805357F0 || !(reinterpret_cast<unsigned int *>(lbl_805357F0)[0x24/4]&4)) fn_802E66D4();
 return lbl_805357F0;
}
}
#pragma pop
