#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_80111CD4();
void igBoxModel_register();
void igGuiComponentModel_register();
void igScrollListComponentModel_fieldInit();
extern char lbl_804946C4[];
extern char lbl_8049475C[];
extern char lbl_80494768[];
extern char lbl_80496040[];
extern char lbl_80497D64[];
extern char lbl_80497DC0[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
extern char lbl_8055EEFC[8];
extern char lbl_8055EF04[8];
extern char lbl_8055EF14[8];
extern char lbl_8055EF1C[8];
extern char lbl_8055EF24[8];
extern void *lbl_80563598;
extern void *lbl_805635AC;
extern void *lbl_80563718;
extern void *lbl_80563830;
void *igSimpleChildHolderModel_getMeta();
void *igSimpleChildHolderModel_vtableRead();
void fn_8010D5E4();
void igSimpleChildHolderModel_register();
void *igSimpleChildHolderModel_getMetaCall();
void *fn_8010D6A0();
void igSimpleChildHolderModel_fieldInit();
void *igScrollListComponentModel_getMeta();
void *igScrollListComponentModel_vtableRead();
void fn_8010D91C();
void igScrollListComponentModel_register();
void *igScrollListComponentModel_getMetaCall();
void *igScrollListComponentModel_parentMeta();
}
struct UnknownGenRoot8010D4EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D4EC(){fn_8006665C(this);}
};
struct UnknownGenObject8010D4EC_0 : UnknownGenRoot8010D4EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D4EC_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010D4EC_1 : UnknownGenObject8010D4EC_0 {
 inline ~UnknownGenObject8010D4EC_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010D4EC : UnknownGenObject8010D4EC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject8010D4EC(){unknown00=lbl_80497E1C;}
};
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){fn_8006665C(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=lbl_80497DC0;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=lbl_80497D64;}
};
extern "C" {
void *igSimpleChildHolderModel_getMeta(){
 if(!lbl_80563598 || !(reinterpret_cast<unsigned int *>(lbl_80563598)[0x24/4]&4)) fn_8010D5E4();
 return lbl_80563598;
}
void *igSimpleChildHolderModel_vtableRead(){
 UnknownGenObject8010D4EC object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497E1C;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010D5E4(){
 fn_80066188((int)igSimpleChildHolderModel_register);
}
void igSimpleChildHolderModel_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563598,(int)igGuiComponentModel_register,(int)fn_8010D6A0,(int)igSimpleChildHolderModel_getMetaCall,(int)lbl_804946C4,52,(int)igSimpleChildHolderModel_vtableRead,(int)igSimpleChildHolderModel_fieldInit,0,(int)lbl_8055EEFC);
}
void *igSimpleChildHolderModel_getMetaCall(){return igSimpleChildHolderModel_getMeta();}
void *fn_8010D6A0(){return lbl_80563718;}
void igSimpleChildHolderModel_fieldInit(){
 void *value0=lbl_80563598;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EF04,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EF14,lbl_8055EF1C,lbl_8055EF24,value1);
}
void *igScrollListComponentModel_getMeta(){
 if(!lbl_805635AC || !(reinterpret_cast<unsigned int *>(lbl_805635AC)[0x24/4]&4)) fn_8010D91C();
 return lbl_805635AC;
}
void *igScrollListComponentModel_vtableRead(){
 UnknownGenObject8010D764 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497DC0;
 object.unknown24.value=0;
 object.unknown00=lbl_80497D64;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010D91C(){
 fn_80066188((int)igScrollListComponentModel_register);
}
void igScrollListComponentModel_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635AC,(int)igBoxModel_register,(int)igScrollListComponentModel_parentMeta,(int)igScrollListComponentModel_getMetaCall,(int)lbl_80494768,60,(int)igScrollListComponentModel_vtableRead,(int)igScrollListComponentModel_fieldInit,0,(int)lbl_8049475C);
}
void *igScrollListComponentModel_getMetaCall(){return igScrollListComponentModel_getMeta();}
void *igScrollListComponentModel_parentMeta(){return lbl_80563830;}
}
#pragma pop
