#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E478();
void igObjectPropertyForNode_register();
extern char lbl_8049DD08[];
extern char lbl_804A5464[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F880[8];
extern void *lbl_80563F64;
void *igObjectPropertyForTransformRecorder_getMeta();
void *igObjectPropertyForTransformRecorder_vtableRead();
void fn_8013E3BC();
void igObjectPropertyForTransformRecorder_register();
void *igObjectPropertyForTransformRecorder_getMetaCall();
}
struct UnknownGenRoot8013E2F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E2F0(){fn_8006665C(this);}
};
struct UnknownGenObject8013E2F0_0 : UnknownGenRoot8013E2F0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E2F0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E2F0_1 : UnknownGenObject8013E2F0_0 {
 inline ~UnknownGenObject8013E2F0_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013E2F0 : UnknownGenObject8013E2F0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E2F0(){unknown00=lbl_804A5464;}
};
extern "C" {
void *igObjectPropertyForTransformRecorder_getMeta(){
 if(!lbl_80563F64 || !(reinterpret_cast<unsigned int *>(lbl_80563F64)[0x24/4]&4)) fn_8013E3BC();
 return lbl_80563F64;
}
void *igObjectPropertyForTransformRecorder_vtableRead(){
 UnknownGenObject8013E2F0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5464;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013E3BC(){
 fn_80066188((int)igObjectPropertyForTransformRecorder_register);
}
void igObjectPropertyForTransformRecorder_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F64,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForTransformRecorder_getMetaCall,(int)lbl_8049DD08,44,(int)igObjectPropertyForTransformRecorder_vtableRead,(int)fn_8013E478,0,(int)lbl_8055F880);
}
void *igObjectPropertyForTransformRecorder_getMetaCall(){return igObjectPropertyForTransformRecorder_getMeta();}
}
#pragma pop
