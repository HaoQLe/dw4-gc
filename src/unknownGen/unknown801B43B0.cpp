#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void igObjectList_register();
void igObject_register();
void igProjectiveTextureProcessor_fieldInit();
void igShaderProcessor_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AD430[];
extern char lbl_804AD440[];
extern char lbl_804AD450[];
extern char lbl_804AD460[];
extern char lbl_804AD46C[];
extern char lbl_804AD478[];
extern char lbl_804AD488[];
extern char lbl_804B39E8[];
extern char lbl_804B3DCC[];
extern char lbl_804B8658[];
extern char lbl_804B86B4[];
extern char lbl_804B8718[];
extern char lbl_80560334[8];
extern char lbl_8056033C[8];
extern char lbl_8056034C[8];
extern char lbl_80560354[8];
extern char lbl_8056035C[8];
extern void *lbl_805621F4;
extern void *lbl_80564A34;
extern void *lbl_80564A38;
extern void *lbl_80564A3C;
extern void *lbl_80564A40;
extern void *lbl_80564A4C;
void *fn_801B43B0();
void *igPropertyValue_getMeta();
void fn_801B4428();
void igPropertyValue_register();
void *igPropertyValue_getMetaCall();
void *fn_801B44D4();
void *igPropertyKey_getMeta();
void fn_801B454C();
void igPropertyKey_register();
void *igPropertyKey_getMetaCall();
void *igPropertyList_getMeta();
void *igPropertyList_vtableRead();
void fn_801B46E0();
void igPropertyList_register();
void *igPropertyList_getMetaCall();
void *igProperty_getMeta();
void *igProperty_vtableRead();
void fn_801B490C();
void igProperty_register();
void *igProperty_getMetaCall();
void igProperty_fieldInit();
void *igProjectiveTextureProcessor_getMeta();
void *igProjectiveTextureProcessor_vtableRead();
void fn_801B4BAC();
void igProjectiveTextureProcessor_register();
void *igProjectiveTextureProcessor_getMetaCall();
}
struct UnknownGenObject801B4670_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B4844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4844(){fn_8006665C(this);}
};
struct UnknownGenObject801B4844 : UnknownGenRoot801B4844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801B4844(){unknown00=lbl_804B8658;}
};
struct UnknownGenRoot801B4AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4AA0(){fn_8006665C(this);}
};
struct UnknownGenObject801B4AA0 : UnknownGenRoot801B4AA0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[52];
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject801B4AA0(){unknown00=lbl_804B3DCC;}
};
extern "C" {
void *fn_801B43B0(){
 if(!lbl_80564A34) lbl_80564A34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A34;
}
void *igPropertyValue_getMeta(){
 if(!lbl_80564A34 || !(reinterpret_cast<unsigned int *>(lbl_80564A34)[0x24/4]&4)) fn_801B4428();
 return lbl_80564A34;
}
void fn_801B4428(){
 fn_80066188((int)igPropertyValue_register);
}
void igPropertyValue_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564A34,(int)igObject_register,(int)fn_800237D0,(int)igPropertyValue_getMetaCall,(int)lbl_804AD430,8,0,0,0,0);
}
void *igPropertyValue_getMetaCall(){return igPropertyValue_getMeta();}
void *fn_801B44D4(){
 if(!lbl_80564A38) lbl_80564A38=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A38;
}
void *igPropertyKey_getMeta(){
 if(!lbl_80564A38 || !(reinterpret_cast<unsigned int *>(lbl_80564A38)[0x24/4]&4)) fn_801B454C();
 return lbl_80564A38;
}
void fn_801B454C(){
 fn_80066188((int)igPropertyKey_register);
}
void igPropertyKey_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564A38,(int)igObject_register,(int)fn_800237D0,(int)igPropertyKey_getMetaCall,(int)lbl_804AD440,8,0,0,0,0);
}
void *igPropertyKey_getMetaCall(){return igPropertyKey_getMeta();}
void *fn_801B45F8(){
 if(!lbl_80564A3C) lbl_80564A3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A3C;
}
void *igPropertyList_getMeta(){
 if(!lbl_80564A3C || !(reinterpret_cast<unsigned int *>(lbl_80564A3C)[0x24/4]&4)) fn_801B46E0();
 return lbl_80564A3C;
}
void *igPropertyList_vtableRead(){
 UnknownGenObject801B4670_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B8718;
 object.unknown00=lbl_804B86B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B46E0(){
 fn_80066188((int)igPropertyList_register);
}
void igPropertyList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A3C,(int)igObjectList_register,(int)fn_80024180,(int)igPropertyList_getMetaCall,(int)lbl_804AD450,20,(int)igPropertyList_vtableRead,0,0,(int)lbl_80560334);
}
void *igPropertyList_getMetaCall(){return igPropertyList_getMeta();}
void *fn_801B4794(void *object){
 fn_801B490C();
 return fn_8006546C(lbl_80564A40,object);
}
void *fn_801B47CC(){
 if(!lbl_80564A40) lbl_80564A40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A40;
}
void *igProperty_getMeta(){
 if(!lbl_80564A40 || !(reinterpret_cast<unsigned int *>(lbl_80564A40)[0x24/4]&4)) fn_801B490C();
 return lbl_80564A40;
}
void *igProperty_vtableRead(){
 UnknownGenObject801B4844 object;
 object.unknown00=lbl_804B8658;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B490C(){
 fn_80066188((int)igProperty_register);
}
void igProperty_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A40,(int)igObject_register,(int)fn_800237D0,(int)igProperty_getMetaCall,(int)lbl_804AD46C,16,(int)igProperty_vtableRead,(int)igProperty_fieldInit,0,(int)lbl_804AD460);
}
void *igProperty_getMetaCall(){return igProperty_getMeta();}
void igProperty_fieldInit(){
 void *value0=lbl_80564A40;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056033C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B44D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801B43B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_8056034C,lbl_80560354,lbl_8056035C,value1);
}
void *igProjectiveTextureProcessor_getMeta(){
 if(!lbl_80564A4C || !(reinterpret_cast<unsigned int *>(lbl_80564A4C)[0x24/4]&4)) fn_801B4BAC();
 return lbl_80564A4C;
}
void *igProjectiveTextureProcessor_vtableRead(){
 UnknownGenObject801B4AA0 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3DCC;
 object.unknown08.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B4BAC(){
 fn_80066188((int)igProjectiveTextureProcessor_register);
}
void igProjectiveTextureProcessor_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A4C,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igProjectiveTextureProcessor_getMetaCall,(int)lbl_804AD488,72,(int)igProjectiveTextureProcessor_vtableRead,(int)igProjectiveTextureProcessor_fieldInit,0,(int)lbl_804AD478);
}
void *igProjectiveTextureProcessor_getMetaCall(){return igProjectiveTextureProcessor_getMeta();}
}
#pragma pop
