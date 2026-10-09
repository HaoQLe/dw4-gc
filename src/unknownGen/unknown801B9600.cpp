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
void igMorphSequenceData_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AE850[];
extern char lbl_804AE868[];
extern char lbl_804AE874[];
extern char lbl_804B7CB8[];
extern char lbl_804B7D14[];
extern char lbl_804B7D78[];
extern char lbl_80560460[8];
extern void *lbl_805621F4;
extern void *lbl_80564CEC;
extern void *lbl_80564CF0;
void *igMorphSequenceDataList_getMeta();
void *igMorphSequenceDataList_vtableRead();
void fn_801B96E8();
void igMorphSequenceDataList_register();
void *igMorphSequenceDataList_getMetaCall();
void *igMorphSequenceData_getMeta();
void *igMorphSequenceData_vtableRead();
void fn_801B98D8();
void igMorphSequenceData_register();
void *igMorphSequenceData_getMetaCall();
}
struct UnknownGenObject801B9678_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B97D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B97D8(){fn_8006665C(this);}
};
struct UnknownGenObject801B97D8 : UnknownGenRoot801B97D8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject801B97D8(){unknown00=lbl_804B7CB8;}
};
extern "C" {
void *fn_801B9600(){
 if(!lbl_80564CEC) lbl_80564CEC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564CEC;
}
void *igMorphSequenceDataList_getMeta(){
 if(!lbl_80564CEC || !(reinterpret_cast<unsigned int *>(lbl_80564CEC)[0x24/4]&4)) fn_801B96E8();
 return lbl_80564CEC;
}
void *igMorphSequenceDataList_vtableRead(){
 UnknownGenObject801B9678_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7D78;
 object.unknown00=lbl_804B7D14;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B96E8(){
 fn_80066188((int)igMorphSequenceDataList_register);
}
void igMorphSequenceDataList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564CEC,(int)igObjectList_register,(int)fn_80024180,(int)igMorphSequenceDataList_getMetaCall,(int)lbl_804AE850,20,(int)igMorphSequenceDataList_vtableRead,0,0,(int)lbl_80560460);
}
void *igMorphSequenceDataList_getMetaCall(){return igMorphSequenceDataList_getMeta();}
void *igMorphSequenceData_getMeta(){
 if(!lbl_80564CF0 || !(reinterpret_cast<unsigned int *>(lbl_80564CF0)[0x24/4]&4)) fn_801B98D8();
 return lbl_80564CF0;
}
void *igMorphSequenceData_vtableRead(){
 UnknownGenObject801B97D8 object;
 object.unknown00=lbl_804B7CB8;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B98D8(){
 fn_80066188((int)igMorphSequenceData_register);
}
void igMorphSequenceData_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564CF0,(int)igObject_register,(int)fn_800237D0,(int)igMorphSequenceData_getMetaCall,(int)lbl_804AE874,32,(int)igMorphSequenceData_vtableRead,(int)igMorphSequenceData_fieldInit,0,(int)lbl_804AE868);
}
void *igMorphSequenceData_getMetaCall(){return igMorphSequenceData_getMeta();}
}
#pragma pop
