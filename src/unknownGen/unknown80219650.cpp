#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void igObject_register();
extern char lbl_804BAA80[];
extern char lbl_804BB794[];
extern char lbl_80560C98[4];
extern char lbl_80560C9C[4];
extern char lbl_80560CA0[4];
extern char lbl_80560CA4[4];
extern void *lbl_80565B2C;
void *igBoolObject_getMeta();
void *igBoolObject_vtableRead();
void fn_802196CC();
void igBoolObject_register();
void *igBoolObject_getMetaCall();
void igBoolObject_fieldInit();
}
struct UnknownGenObject8021968C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igBoolObject_getMeta(){
 if(!lbl_80565B2C || !(reinterpret_cast<unsigned int *>(lbl_80565B2C)[0x24/4]&4)) fn_802196CC();
 return lbl_80565B2C;
}
void *igBoolObject_vtableRead(){
 UnknownGenObject8021968C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BB794;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802196CC(){
 fn_80066188((int)igBoolObject_register);
}
void igBoolObject_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565B2C,(int)igObject_register,(int)fn_800237D0,(int)igBoolObject_getMetaCall,(int)lbl_804BAA80,12,(int)igBoolObject_vtableRead,(int)igBoolObject_fieldInit,0,0);
}
void *igBoolObject_getMetaCall(){return igBoolObject_getMeta();}
void igBoolObject_fieldInit(){
 void *value0=lbl_80565B2C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C98,1);
 fn_800659C0(value0,lbl_80560C9C,lbl_80560CA0,lbl_80560CA4,value1);
}
}
#pragma pop
