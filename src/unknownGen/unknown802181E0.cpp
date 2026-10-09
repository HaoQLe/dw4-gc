#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void igHistogramBase_register();
void igIntHistogram_fieldInit();
void *igMatrixObject_getMeta();
void igMatrixObject_vtableRead();
void igObject_register();
extern char lbl_804BA5D8[];
extern char lbl_804BA618[];
extern char lbl_804BA624[];
extern char lbl_804BBFDC[];
extern char lbl_804BC6B0[];
extern char lbl_804BC70C[];
extern char lbl_804BCA64[];
extern char lbl_80560C24[4];
extern char lbl_80560C2C[4];
extern char lbl_80560C30[4];
extern char lbl_80560C34[4];
extern char lbl_80560C38[4];
extern char lbl_80560C3C[4];
extern char lbl_80560C40[4];
extern char lbl_80560C44[4];
extern void *lbl_805659DC;
extern void *lbl_80565A60;
extern void *lbl_80565A70;
extern void *lbl_80565A78;
void igMatrixObject_register();
void *igMatrixObject_getMetaCall();
void igMatrixObject_fieldInit();
void *igIntObject_getMeta();
void *igIntObject_vtableRead();
void fn_8021837C();
void igIntObject_register();
void *igIntObject_getMetaCall();
void igIntObject_fieldInit();
void *igIntHistogram_getMeta();
void *igIntHistogram_vtableRead();
void fn_802185B8();
void igIntHistogram_register();
void *igIntHistogram_getMetaCall();
void *fn_80218670();
}
struct UnknownGenObject8021833C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80218510 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218510(){fn_8006665C(this);}
};
struct UnknownGenObject80218510_0 : UnknownGenRoot80218510 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80218510_0(){unknown00=lbl_804BCA64;}
};
struct UnknownGenObject80218510_1 : UnknownGenObject80218510_0 {
 inline ~UnknownGenObject80218510_1(){unknown00=lbl_804BC70C;}
};
struct UnknownGenObject80218510 : UnknownGenObject80218510_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80218510(){unknown00=lbl_804BC6B0;}
};
extern "C" {
void fn_802181E0(){
 fn_80066188((int)igMatrixObject_register);
}
void igMatrixObject_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A60,(int)igObject_register,(int)fn_800237D0,(int)igMatrixObject_getMetaCall,(int)lbl_804BA5D8,72,(int)igMatrixObject_vtableRead,(int)igMatrixObject_fieldInit,0,0);
}
void *igMatrixObject_getMetaCall(){return igMatrixObject_getMeta();}
void igMatrixObject_fieldInit(){
 void *value0=lbl_80565A60;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C24,1);
 fn_800659C0(value0,lbl_80560C2C,lbl_80560C30,lbl_80560C34,value1);
}
void *igIntObject_getMeta(){
 if(!lbl_80565A70 || !(reinterpret_cast<unsigned int *>(lbl_80565A70)[0x24/4]&4)) fn_8021837C();
 return lbl_80565A70;
}
void *igIntObject_vtableRead(){
 UnknownGenObject8021833C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BBFDC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021837C(){
 fn_80066188((int)igIntObject_register);
}
void igIntObject_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A70,(int)igObject_register,(int)fn_800237D0,(int)igIntObject_getMetaCall,(int)lbl_804BA618,12,(int)igIntObject_vtableRead,(int)igIntObject_fieldInit,0,0);
}
void *igIntObject_getMetaCall(){return igIntObject_getMeta();}
void igIntObject_fieldInit(){
 void *value0=lbl_80565A70;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C38,1);
 fn_800659C0(value0,lbl_80560C3C,lbl_80560C40,lbl_80560C44,value1);
}
void *fn_8021849C(void *object){
 fn_802185B8();
 return fn_8006546C(lbl_80565A78,object);
}
void *igIntHistogram_getMeta(){
 if(!lbl_80565A78 || !(reinterpret_cast<unsigned int *>(lbl_80565A78)[0x24/4]&4)) fn_802185B8();
 return lbl_80565A78;
}
void *igIntHistogram_vtableRead(){
 UnknownGenObject80218510 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 object.unknown00=lbl_804BC70C;
 object.unknown00=lbl_804BC6B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802185B8(){
 fn_80066188((int)igIntHistogram_register);
}
void igIntHistogram_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A78,(int)igHistogramBase_register,(int)fn_80218670,(int)igIntHistogram_getMetaCall,(int)lbl_804BA624,36,(int)igIntHistogram_vtableRead,(int)igIntHistogram_fieldInit,0,0);
}
void *igIntHistogram_getMetaCall(){return igIntHistogram_getMeta();}
void *fn_80218670(){return lbl_805659DC;}
}
#pragma pop
