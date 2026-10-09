#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlHITBOX_getMeta();
void beModelCtrlHITBOX_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CAE88();
void igNamedObject_register();
extern char lbl_8041F200[];
extern char lbl_804D0F24[];
extern char lbl_804D0F38[];
extern char lbl_804D0F4C[];
extern char lbl_804D0F60[];
extern void *lbl_80534EB0;
extern void *lbl_80534EC8;
void beModelCtrlHITBOX_register();
void *beModelCtrlHITBOX_getMetaCall();
void beModelCtrlHITBOX_fieldInit();
}
extern "C" {
void fn_802CAC64(){
 fn_80066188((int)beModelCtrlHITBOX_register);
}
void beModelCtrlHITBOX_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EB0,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlHITBOX_getMetaCall,(int)lbl_8041F200,48,(int)beModelCtrlHITBOX_vtableRead,(int)beModelCtrlHITBOX_fieldInit,0,0);
}
void *beModelCtrlHITBOX_getMetaCall(){return beModelCtrlHITBOX_getMeta();}
void beModelCtrlHITBOX_fieldInit(){
 void *meta=lbl_80534EB0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F24,0x5);
 fn_800659C0(meta,lbl_804D0F38,lbl_804D0F4C,lbl_804D0F60,field);
}
void *beModelCtrlMUTEKI_getMeta(){
 if(!lbl_80534EC8 || !(reinterpret_cast<unsigned int *>(lbl_80534EC8)[0x24/4]&4)) fn_802CAE88();
 return lbl_80534EC8;
}
}
#pragma pop
