#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010EE6C();
void *fn_80111CD4();
void igGroup_register();
void igGuiComponentModel_fieldInit();
void *igGuiComponentNode_getMeta();
void igGuiComponentNode_vtableRead();
void igModel_register();
extern char lbl_80494FF4[];
extern char lbl_80495014[];
extern char lbl_80496040[];
extern char lbl_80497E78[];
extern char lbl_8055F0B4[8];
extern char lbl_8055F0BC[4];
extern char lbl_8055F0C0[4];
extern char lbl_8055F0C4[4];
extern char lbl_8055F0C8[4];
extern char lbl_8055F0CC[8];
extern void *lbl_805621F4;
extern void *lbl_80563710;
extern void *lbl_80563718;
extern void *lbl_80564ED0;
void igGuiComponentNode_register();
void *igGuiComponentNode_getMetaCall();
void *fn_8011148C();
void igGuiComponentNode_fieldInit();
void *igGuiComponentModel_getMeta();
void *igGuiComponentModel_vtableRead();
void fn_8011162C();
void igGuiComponentModel_register();
void *igGuiComponentModel_getMetaCall();
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){fn_8006665C(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=lbl_80497E78;}
};
extern "C" {
void fn_801113D0(){
 fn_80066188((int)igGuiComponentNode_register);
}
void igGuiComponentNode_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563710,(int)igGroup_register,(int)fn_8011148C,(int)igGuiComponentNode_getMetaCall,(int)lbl_80494FF4,36,(int)igGuiComponentNode_vtableRead,(int)igGuiComponentNode_fieldInit,0,(int)lbl_8055F0B4);
}
void *igGuiComponentNode_getMetaCall(){return igGuiComponentNode_getMeta();}
void *fn_8011148C(){return lbl_80564ED0;}
void igGuiComponentNode_fieldInit(){
 void *value0=lbl_80563710;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F0BC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_8055F0C0,lbl_8055F0C4,lbl_8055F0C8,value1);
}
void *fn_8011151C(){
 if(!lbl_80563718) lbl_80563718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563718;
}
void *igGuiComponentModel_getMeta(){
 if(!lbl_80563718 || !(reinterpret_cast<unsigned int *>(lbl_80563718)[0x24/4]&4)) fn_8011162C();
 return lbl_80563718;
}
void *igGuiComponentModel_vtableRead(){
 UnknownGenObject80111594 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011162C(){
 fn_80066188((int)igGuiComponentModel_register);
}
void igGuiComponentModel_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563718,(int)igModel_register,(int)fn_8010EE6C,(int)igGuiComponentModel_getMetaCall,(int)lbl_80495014,36,(int)igGuiComponentModel_vtableRead,(int)igGuiComponentModel_fieldInit,0,(int)lbl_8055F0CC);
}
void *igGuiComponentModel_getMetaCall(){return igGuiComponentModel_getMeta();}
}
#pragma pop
