#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igAnimationTransitionDefinition_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2790[];
extern char lbl_804B27B4[];
extern char lbl_804B27C4[];
extern char lbl_804B5C7C[];
extern char lbl_804B5CD8[];
extern char lbl_804B5D3C[];
extern char lbl_805609F8[8];
extern void *lbl_805621F4;
extern void *lbl_80565534;
extern void *lbl_80565538;
void *igAnimationTransitionDefinitionList_getMeta();
void *igAnimationTransitionDefinitionList_vtableRead();
void fn_801CCA28();
void igAnimationTransitionDefinitionList_register();
void *igAnimationTransitionDefinitionList_getMetaCall();
void *igAnimationTransitionDefinition_getMeta();
void *igAnimationTransitionDefinition_vtableRead();
void fn_801CCBE0();
void igAnimationTransitionDefinition_register();
void *igAnimationTransitionDefinition_getMetaCall();
}
struct UnknownGenObject801CC9B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CCB18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCB18(){fn_8006665C(this);}
};
struct UnknownGenObject801CCB18 : UnknownGenRoot801CCB18 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCB18(){unknown00=lbl_804B5C7C;}
};
extern "C" {
void *fn_801CC940(){
 if(!lbl_80565534) lbl_80565534=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565534;
}
void *igAnimationTransitionDefinitionList_getMeta(){
 if(!lbl_80565534 || !(reinterpret_cast<unsigned int *>(lbl_80565534)[0x24/4]&4)) fn_801CCA28();
 return lbl_80565534;
}
void *igAnimationTransitionDefinitionList_vtableRead(){
 UnknownGenObject801CC9B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5D3C;
 object.unknown00=lbl_804B5CD8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CCA28(){
 fn_80066188((int)igAnimationTransitionDefinitionList_register);
}
void igAnimationTransitionDefinitionList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565534,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTransitionDefinitionList_getMetaCall,(int)lbl_804B2790,20,(int)igAnimationTransitionDefinitionList_vtableRead,0,0,(int)lbl_805609F8);
}
void *igAnimationTransitionDefinitionList_getMetaCall(){return igAnimationTransitionDefinitionList_getMeta();}
void *igAnimationTransitionDefinition_getMeta(){
 if(!lbl_80565538 || !(reinterpret_cast<unsigned int *>(lbl_80565538)[0x24/4]&4)) fn_801CCBE0();
 return lbl_80565538;
}
void *igAnimationTransitionDefinition_vtableRead(){
 UnknownGenObject801CCB18 object;
 object.unknown00=lbl_804B5C7C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CCBE0(){
 fn_80066188((int)igAnimationTransitionDefinition_register);
}
void igAnimationTransitionDefinition_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565538,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionDefinition_getMetaCall,(int)lbl_804B27C4,20,(int)igAnimationTransitionDefinition_vtableRead,(int)igAnimationTransitionDefinition_fieldInit,0,(int)lbl_804B27B4);
}
void *igAnimationTransitionDefinition_getMetaCall(){return igAnimationTransitionDefinition_getMeta();}
}
#pragma pop
