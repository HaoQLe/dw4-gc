#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D46F0();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A0CC[];
extern char lbl_8048A0E4[];
extern char lbl_8048A108[];
extern char lbl_8048A124[];
extern char lbl_80493414[];
extern char lbl_80493470[];
extern char lbl_804934D4[];
extern char lbl_80493538[];
extern char lbl_80493594[];
extern char lbl_804935F8[];
extern char lbl_8055EC78[8];
extern char lbl_8055EC80[8];
extern char lbl_8055EC88[8];
extern char lbl_8055EC98[8];
extern char lbl_8055ECA0[8];
extern char lbl_8055ECA8[8];
extern char lbl_8055ECB0[8];
extern void *lbl_805621F4;
extern void *lbl_805622A4;
extern void *lbl_8056303C;
extern void *lbl_80563040;
extern void *lbl_8056304C;
extern void *lbl_80563050;
void *igGfxShaderDefineList_getMeta();
void *igGfxShaderDefineList_vtableRead();
void fn_800D40AC();
void igGfxShaderDefineList_register();
void *igGfxShaderDefineList_getMetaCall();
void *igGfxShaderDefine_getMeta();
void *igGfxShaderDefine_vtableRead();
void fn_800D427C();
void igGfxShaderDefine_register();
void *igGfxShaderDefine_getMetaCall();
void igGfxShaderDefine_fieldInit();
void *igTextureSamplerSourceList_getMeta();
void *igTextureSamplerSourceList_vtableRead();
void fn_800D44B0();
void igTextureSamplerSourceList_register();
void *igTextureSamplerSourceList_getMetaCall();
void *igTextureSamplerSource_getMeta();
void *igTextureSamplerSource_vtableRead();
void fn_800D4638();
void igTextureSamplerSource_register();
void *igTextureSamplerSource_getMetaCall();
}
struct UnknownGenObject800D403C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D419C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D419C(){fn_8006665C(this);}
};
struct UnknownGenObject800D419C_0 : UnknownGenRoot800D419C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D419C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D419C : UnknownGenObject800D419C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800D419C(){unknown00=lbl_80493538;}
};
struct UnknownGenObject800D4440_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D45A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D45A0(){fn_8006665C(this);}
};
struct UnknownGenObject800D45A0_0 : UnknownGenRoot800D45A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D45A0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D45A0 : UnknownGenObject800D45A0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D45A0(){unknown00=lbl_80493414;}
};
extern "C" {
void *fn_800D3FC4(){
 if(!lbl_8056303C) lbl_8056303C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056303C;
}
void *igGfxShaderDefineList_getMeta(){
 if(!lbl_8056303C || !(reinterpret_cast<unsigned int *>(lbl_8056303C)[0x24/4]&4)) fn_800D40AC();
 return lbl_8056303C;
}
void *igGfxShaderDefineList_vtableRead(){
 UnknownGenObject800D403C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804935F8;
 object.unknown00=lbl_80493594;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D40AC(){
 fn_80066188((int)igGfxShaderDefineList_register);
}
void igGfxShaderDefineList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056303C,(int)igObjectList_register,(int)fn_80024180,(int)igGfxShaderDefineList_getMetaCall,(int)lbl_8048A0CC,20,(int)igGfxShaderDefineList_vtableRead,0,0,(int)lbl_8055EC78);
}
void *igGfxShaderDefineList_getMetaCall(){return igGfxShaderDefineList_getMeta();}
void *igGfxShaderDefine_getMeta(){
 if(!lbl_80563040 || !(reinterpret_cast<unsigned int *>(lbl_80563040)[0x24/4]&4)) fn_800D427C();
 return lbl_80563040;
}
void *igGfxShaderDefine_vtableRead(){
 UnknownGenObject800D419C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493538;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D427C(){
 fn_80066188((int)igGfxShaderDefine_register);
}
void igGfxShaderDefine_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563040,(int)igNamedObject_register,(int)fn_80023CF4,(int)igGfxShaderDefine_getMetaCall,(int)lbl_8048A0E4,20,(int)igGfxShaderDefine_vtableRead,(int)igGfxShaderDefine_fieldInit,0,(int)lbl_8055EC80);
}
void *igGfxShaderDefine_getMetaCall(){return igGfxShaderDefine_getMeta();}
void igGfxShaderDefine_fieldInit(){
 void *value0=lbl_80563040;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EC88,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value3,1);
 fn_800659C0(value0,lbl_8055EC98,lbl_8055ECA0,lbl_8055ECA8,value1);
}
void *fn_800D43C8(){
 if(!lbl_8056304C) lbl_8056304C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056304C;
}
void *igTextureSamplerSourceList_getMeta(){
 if(!lbl_8056304C || !(reinterpret_cast<unsigned int *>(lbl_8056304C)[0x24/4]&4)) fn_800D44B0();
 return lbl_8056304C;
}
void *igTextureSamplerSourceList_vtableRead(){
 UnknownGenObject800D4440_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804934D4;
 object.unknown00=lbl_80493470;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D44B0(){
 fn_80066188((int)igTextureSamplerSourceList_register);
}
void igTextureSamplerSourceList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056304C,(int)igObjectList_register,(int)fn_80024180,(int)igTextureSamplerSourceList_getMetaCall,(int)lbl_8048A108,20,(int)igTextureSamplerSourceList_vtableRead,0,0,(int)lbl_8055ECB0);
}
void *igTextureSamplerSourceList_getMetaCall(){return igTextureSamplerSourceList_getMeta();}
void *igTextureSamplerSource_getMeta(){
 if(!lbl_80563050 || !(reinterpret_cast<unsigned int *>(lbl_80563050)[0x24/4]&4)) fn_800D4638();
 return lbl_80563050;
}
void *igTextureSamplerSource_vtableRead(){
 UnknownGenObject800D45A0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493414;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4638(){
 fn_80066188((int)igTextureSamplerSource_register);
}
void igTextureSamplerSource_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563050,(int)igNamedObject_register,(int)fn_80023CF4,(int)igTextureSamplerSource_getMetaCall,(int)lbl_8048A124,24,(int)igTextureSamplerSource_vtableRead,(int)fn_800D46F0,0,0);
}
void *igTextureSamplerSource_getMetaCall(){return igTextureSamplerSource_getMeta();}
}
#pragma pop
