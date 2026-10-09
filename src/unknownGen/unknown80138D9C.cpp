#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igObjectList_register();
void igObject_register();
void igParameterSet_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049D334[];
extern char lbl_8049D354[];
extern char lbl_8049D380[];
extern char lbl_8049D394[];
extern char lbl_8049D3A4[];
extern char lbl_804A4304[];
extern char lbl_804AA2FC[];
extern char lbl_804AA360[];
extern char lbl_804AA3C4[];
extern char lbl_804AA428[];
extern char lbl_8055F720[8];
extern char lbl_8055F728[4];
extern char lbl_8055F72C[4];
extern char lbl_8055F730[4];
extern char lbl_8055F734[4];
extern char lbl_8055F738[8];
extern void *lbl_805621F4;
extern void *lbl_80563DCC;
extern void *lbl_80563DD0;
extern void *lbl_80563DD8;
extern void *lbl_80563DDC;
void *igParameterSetConstraintList_getMeta();
void *igParameterSetConstraintList_vtableRead();
void fn_80138E80();
void igParameterSetConstraintList_register();
void *igParameterSetConstraintList_getMetaCall();
void *igParameterSetConstraint_getMeta();
void fn_80138F70();
void igParameterSetConstraint_register();
void *igParameterSetConstraint_getMetaCall();
void igParameterSetConstraint_fieldInit();
void *igParameterSetList_getMeta();
void *igParameterSetList_vtableRead();
void fn_80139174();
void igParameterSetList_register();
void *igParameterSetList_getMetaCall();
void *igParameterSet_getMeta();
void *igParameterSet_vtableRead();
void fn_80139410();
void igParameterSet_register();
void *igParameterSet_getMetaCall();
}
struct UnknownGenObject80138E10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80139104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801392D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801392D8(){fn_8006665C(this);}
};
struct UnknownGenObject801392D8 : UnknownGenRoot801392D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801392D8(){unknown00=lbl_804A4304;}
};
extern "C" {
void *fn_80138D9C(void *object){
 fn_80138E80();
 return fn_8006546C(lbl_80563DCC,object);
}
void *igParameterSetConstraintList_getMeta(){
 if(!lbl_80563DCC || !(reinterpret_cast<unsigned int *>(lbl_80563DCC)[0x24/4]&4)) fn_80138E80();
 return lbl_80563DCC;
}
void *igParameterSetConstraintList_vtableRead(){
 UnknownGenObject80138E10_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA428;
 object.unknown00=lbl_804AA3C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138E80(){
 fn_80066188((int)igParameterSetConstraintList_register);
}
void igParameterSetConstraintList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DCC,(int)igObjectList_register,(int)fn_80024180,(int)igParameterSetConstraintList_getMetaCall,(int)lbl_8049D334,20,(int)igParameterSetConstraintList_vtableRead,0,0,(int)lbl_8055F720);
}
void *igParameterSetConstraintList_getMetaCall(){return igParameterSetConstraintList_getMeta();}
void *igParameterSetConstraint_getMeta(){
 if(!lbl_80563DD0 || !(reinterpret_cast<unsigned int *>(lbl_80563DD0)[0x24/4]&4)) fn_80138F70();
 return lbl_80563DD0;
}
void fn_80138F70(){
 fn_80066188((int)igParameterSetConstraint_register);
}
void igParameterSetConstraint_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563DD0,(int)igObject_register,(int)fn_800237D0,(int)igParameterSetConstraint_getMetaCall,(int)lbl_8049D354,12,0,(int)igParameterSetConstraint_fieldInit,0,0);
}
void *igParameterSetConstraint_getMetaCall(){return igParameterSetConstraint_getMeta();}
void igParameterSetConstraint_fieldInit(){
 void *value0=lbl_80563DD0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F728,1);
 fn_800659C0(value0,lbl_8055F72C,lbl_8055F730,lbl_8055F734,value1);
}
void *fn_8013908C(){
 if(!lbl_80563DD8) lbl_80563DD8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563DD8;
}
void *igParameterSetList_getMeta(){
 if(!lbl_80563DD8 || !(reinterpret_cast<unsigned int *>(lbl_80563DD8)[0x24/4]&4)) fn_80139174();
 return lbl_80563DD8;
}
void *igParameterSetList_vtableRead(){
 UnknownGenObject80139104_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA360;
 object.unknown00=lbl_804AA2FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139174(){
 fn_80066188((int)igParameterSetList_register);
}
void igParameterSetList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DD8,(int)igObjectList_register,(int)fn_80024180,(int)igParameterSetList_getMetaCall,(int)lbl_8049D380,20,(int)igParameterSetList_vtableRead,0,0,(int)lbl_8055F738);
}
void *igParameterSetList_getMetaCall(){return igParameterSetList_getMeta();}
void *fn_80139228(void *object){
 fn_80139410();
 return fn_8006546C(lbl_80563DDC,object);
}
void *fn_80139260(){
 if(!lbl_80563DDC) lbl_80563DDC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563DDC;
}
void *igParameterSet_getMeta(){
 if(!lbl_80563DDC || !(reinterpret_cast<unsigned int *>(lbl_80563DDC)[0x24/4]&4)) fn_80139410();
 return lbl_80563DDC;
}
void *igParameterSet_vtableRead(){
 UnknownGenObject801392D8 object;
 object.unknown00=lbl_804A4304;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139410(){
 fn_80066188((int)igParameterSet_register);
}
void igParameterSet_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DDC,(int)igObject_register,(int)fn_800237D0,(int)igParameterSet_getMetaCall,(int)lbl_8049D3A4,28,(int)igParameterSet_vtableRead,(int)igParameterSet_fieldInit,0,(int)lbl_8049D394);
}
void *igParameterSet_getMetaCall(){return igParameterSet_getMeta();}
}
#pragma pop
